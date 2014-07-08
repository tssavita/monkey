#ifndef _MIN_HEAP_H
#define _MIN_HEAP_H

#define MAX_LENGTH_NAME 1024

struct node_count {
    char name[MAX_LENGTH_NAME];
    int count;
};

struct heap_t {
    int heapsize;
    struct node_count *heap_array;
};

struct heap_t *heap_create();

int heap_insert (struct heap_t *heap, const char *name);

void count_increment (struct heap_t *heap, const char *name);

char *pop (struct heap_t *heap);

void heap_destroy(struct heap_t *heap);

#endif
