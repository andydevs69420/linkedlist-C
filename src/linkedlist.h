/*
 | LinkedList implementation in C programming language.
 | author: andydevs69420
 | description: LinkedList that handles integer as value.
 | Copyright (C) andydevs69420 2022 All rights reserved.
 */


#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#ifndef LINKEDLIST__H
#define LINKEDLIST__H

typedef struct NODE Node;
typedef struct NODE {
    int value;
    Node *head;
    Node *tail;
} Node;

Node *new_LinkedList(int);
Node *list_childNode(int, Node*, Node*);

void append(Node*, int);

char *itoa(int);
char *toString(Node*);

#endif


#ifdef __cplusplus
}
#endif