#ifndef _UTILS_H
#define _UTILS_H

#include <stdio.h>
#include <stdlib.h>

#define handle_error(msg) \
        do { perror (msg); \
            exit(EXIT_FAILURE); \
        } while (0)

#define MODE(z) ((st.st_mode &(z)) == z)

typedef enum {false, true} bool;

#endif
