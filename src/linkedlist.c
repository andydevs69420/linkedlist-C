/*
 | LinkedList implementation in C programming language.
 | author: andydevs69420
 | description: LinkedList that handles integer as value.
 | Copyright (C) andydevs69420 2022 All rights reserved.
 */


#include "linkedlist.h"


// @contructor
/**
 * @brief Creates new LinkedList Node.
 * @param _value int value.
 * @return Node* 
 **/
Node *new_LinkedList(int _value)
{
    Node *head = (Node*) malloc(sizeof(Node));
        head->value = _value;
        head->head  = NULL;
        head->tail  = NULL;
    return head;
}

/**
 * @brief Creates new LinkedList Node with head and value.
 * @param _value integer value
 * @param _head Node* head of linkedlist or root node.
 * @param _tail Node* tail of node.
 * @return Node* 
 **/
Node *list_childNode(int _value, Node *_head, Node *_tail)
{
    Node *head = (Node*) malloc(sizeof(Node));
        head->value = _value;
        head->head  = _head;
        head->tail  = _tail;
    return head;
}


/**
 * @brief Free mempry from head to last tail.
 * @param _head Node* head of linkedlist or root node.
 **/
void freeNodes(Node *_head)
{
    Node *head_or_tail = _head;
    while(head_or_tail != NULL)
    {
        free(head_or_tail);
        head_or_tail = head_or_tail->tail;
    }
}


/**
 * @brief Appends new child node.
 * @param _head Node* head of linkedlist or root node.
 * @param _value int value.
 **/
void append(Node *_head, int _value)
{
    Node *head_or_tail = _head;
    while (head_or_tail->tail != NULL)
        head_or_tail = head_or_tail->tail;
    // SET !
    head_or_tail->tail = list_childNode(_value, _head, NULL);
}


/**
 * @brief Sorts LinkedLit by value using bubble sort.
 * @param _head Node* head of linkedlist or root node.
 **/
void sort_by_value(Node *_head)
{
    Node *_outer = _head, *_inner;
    while(_outer != NULL)
    {
        _inner = _head;
        while(_inner != NULL)
        {
            if (_inner->value > _outer->value)
            {
                int temp = _outer->value;
                _outer->value = _inner->value;
                _inner->value = temp;
            }
            _inner = _inner->tail;
        }
        _outer = _outer->tail;
    }
}

#ifndef MINI_STR
#define MINI_STR

#define new_String()  \
    int str_size = 2; \
    char *string = (char*) malloc(sizeof(char) * str_size); \
        string[0] = '\0';

#define pushChar(_c)             \
    string[str_size - 2] = _c;   \
    string[str_size - 1] = '\0'; \
    string = (char*) realloc(string, sizeof(char) * ++str_size); 

#endif


/**
 * @brief Converts integer to char*.
 * @param __value__ int value to convert.
 * @return char* 
 **/
char *itoa(int __value__)
{
    char num[4096];
    sprintf(num, "%d", __value__);

    char *str_ptr = (char*) malloc(sizeof(char) * strlen(num));
        str_ptr = num;
    return str_ptr;
}

/**
 * @brief Formats LinkedList into array.
 * @param _head Node* head of linkedlist or root node.
 * @return char* 
 **/
char *toString(Node *_head)
{
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