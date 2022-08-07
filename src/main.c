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
     | Describe: Tests linked list and sort by value.
     */

    Node *list = new_LinkedList(100);
    for (int r = 10; r >= 2; r--)
        append(list, r * 23);
    
    // unsorted list
    printf("list (unsorted): %s\n", toString(list));

    printf("\n");
    printf("SORTED BY VALUE:\n");
    sort_by_value(list);

    // sorted list
    printf("list (sorted)  : %s\n", toString(list));
    /* OUTPUT
     |
     | andydevs69420@devPC:~/Documents/linkedlist-C
     | $ ./compile-linux.sh 
     | list (unsorted): [100, 1000, 900, 800, 700, 600, 500, 400, 300, 200]
     |
     | SORTED BY VALUE:
     | list (sorted)  : [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]
     |
     */

    freeNodes(list);
    return 0;
}

