#ifndef BOX_H
#define BOX_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 255

typedef struct {
    int size;
    char m[MAX_LEN];
    char f[MAX_LEN];
} Box;

#endif // BOX_H
