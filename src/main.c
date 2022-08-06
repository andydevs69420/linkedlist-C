/*
 | LinkedList implementation in C programming language.
 | author: andydevs69420
 | description: LinkedList that handles integer as value.
 | Copyright (C) andydevs69420 2022 All rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"



int main(int argc, char **args)
{
    /*
     | Test
     | Describe: Tests linked list and sort by node or value.
     */

    Node *list = new_LinkedList(100);

    for (int r = 2; r <= 10; r++)
        append(list, r * 100);

    Node *copy;
    &copy = *list;

    printf("list: %s\n", toString(list));
    return 0;
}

