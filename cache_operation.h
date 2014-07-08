#ifndef _CACHE_OPERATION_H_
#define _CACHE_OPERATION_H_

#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"
#include "mk_memory.h"

#define MAX_LENGTH_NAME 1024

struct table_t *hash_table;
struct heap_t *heap;

struct file_t {

    char name[MAX_LENGTH_NAME];
    int fd;
    mk_ptr_t content;
    size_t size;
    int count;
/*    int suspended;
    int still_needed;*/
};

void cache_init();

int isvalid (struct stat *file_status);

void file_access_count (struct file_t *file);

struct file_t *cache_add_file (const char *uri, const char *content);

struct file_t *cache_lookup_file (const char *uri);

void cache_unmap_file (struct file_t *file);

#endif
