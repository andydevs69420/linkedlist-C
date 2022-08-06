/*
 | LinkedList implementation in C programming language.
 | author: andydevs69420
 | description: LinkedList that handles integer as value.
 | Copyright (C) andydevs69420 2022 All rights reserved.
 */


#include "linkedlist.h"


Node *new_LinkedList(int _value) {
    Node *head = (Node*) malloc(sizeof(Node));
        head->value = _value;
        head->head  = NULL;
        head->tail  = NULL;
    return head;
}


Node *list_childNode(int _value, Node *_head, Node *_tail) {
    Node *head = (Node*) malloc(sizeof(Node));
        head->value = _value;
        head->head  = _head;
        head->tail  = _tail;
    return head;
}

void append(Node *_head, int _value) {
    Node *head_or_tail = _head;
    while (head_or_tail->tail != NULL)
        head_or_tail = head_or_tail->tail;
    // SET !
    head_or_tail->tail = list_childNode(_value, _head, NULL);
}


#ifndef MINI_STR
#define MINI_STR

#define new_String()  \
    int str_size = 2; \
    char *string = (char*) malloc(sizeof(char) * str_size);

#define pushChar(_c)             \
    string[str_size - 2] = _c;   \
    string[str_size - 1] = '\0'; \
    string = (char*) realloc(string, sizeof(char) * ++str_size); 

#endif

char *itoa(int __value__)
{
    char num[4096];
    sprintf(num, "%d", __value__);

    char *str_ptr = (char*) malloc(sizeof(char) * strlen(num));
        str_ptr = num;
    return str_ptr;
}

char *toString(Node *_head) {
    new_String();

    pushChar('[');

    Node *head_or_tail = _head;
    while (head_or_tail != NULL) {
        char *str = itoa(head_or_tail->value);
        for (int i = 0; i < strlen(str); i++)
        { pushChar(str[i]); }

        head_or_tail = head_or_tail->tail;
        if (head_or_tail != NULL)
        {
            pushChar(',');
            pushChar(' ');
        }
    }

    pushChar(']');
   
    return string;
}