#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - create a shash_table_t table
 * @size: size of the table to be created
 *
 * Return: pointer to created table, or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int index = 0;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL || size == 0)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}

/**
 * add_node_head - adds a new node at the beginning of a list.
 * @ht: pointer to shash_table_t table
 * @head: pointer to head of the linked list hash_node_t
 * @key: key value of hash table entry (string)
 * @value: value associated with key for hash table
 *
 * Return: 1 on success, 0 on failure
 */
int add_node_sorted(shash_table_t *ht, shash_node_t **head, const char *key,
		    const char *value)
{
	shash_node_t *new = NULL, *temp = NULL;

	if (key == NULL)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
		return (1);
	}
	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(temp->key, new->key) > 0)
		{
			new->snext = temp;
			new->sprev = temp->sprev;
			temp->sprev = new;
			if (new->sprev != NULL)
				new->sprev->snext = new;
			else
				ht->shead = new;
			return (1);
		}
		temp = temp->snext;
	}
	new->sprev = ht->stail;
	ht->stail->snext = new;
	ht->stail = new;
	return (1);
}

/**
 * shash_table_set - insert a new key:value pair to the table or update one
 * @ht: pointer to table to insert key:value pair in
 * @key: key of key:value pair (string)
 * @value: value corresponding to key (string)
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;
	int res = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	res = add_node_sorted(ht, &(ht->array[index]), key, value);

	if (res == 1)
		return (1);
	else
		return (0);
}

/**
 * shash_table_get - retrieve value of a given key from a shash_table_t table
 * @ht: pointer to the table to look into
 * @key: key whose value to look for
 *
 * Return: value corresponding to given key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - print the hash table using the sorted linked list
 * @ht: pointer to shash_table_t table
 *
 * Return: no return value (void)
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr = NULL;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	curr = ht->shead;
	while (curr != NULL)
	{
		if (comma == 0)
			comma += 1;
		else
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in reverse
 * using the sorted linked list
 * @ht: pointer to shash_table_t table
 *
 * Return: no return value (void)
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr = NULL;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	curr = ht->stail;
	while (curr != NULL)
	{
		if (comma == 0)
			comma += 1;
		else
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a shash_table_t table
 * @ht: pointer to the table
 *
 * Return: no return value (void)
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr = NULL, *temp = NULL;

	curr = ht->shead;
	while (curr != NULL)
	{
		if (curr->key != NULL)
			free(curr->key);
		if (curr->value != NULL)
			free(curr->value);

		temp = curr->snext;
		free(curr);
		curr = temp;
	}
	free(ht->array);
	free(ht);
}
