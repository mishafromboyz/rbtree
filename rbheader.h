#include <stdio.h>
#include <stdlib.h>
#define H__rbtree__H

typedef struct
{
    int key;
    struct node *left;
    struct node *right;
    struct node *parent;
    char color;
    int value;
} node;

void leftRotate(struct node *n);
void rbadd(struct node *root, int key, int value);
