#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <stdlib.h>
#include <stdio.h>

#define TABLE_SIZE 50

struct node_t {
    const char* key;
    void *data;
    struct node_t *next;
};

struct table_t {
    struct node_t **table_list;
    int table_size;
};

struct table_t *table_create ();

int table_insert (struct table_t *table, const char *key, void *data);

void *table_lookup (struct table_t *table, const char *key);

void *table_delete (struct table_t *table, const char *key);

void table_destroy ();

#endif
