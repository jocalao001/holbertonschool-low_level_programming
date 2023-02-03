#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of str
 * @next: pointer to next node in list
 *
 * Description: singly linked list
 */


typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
