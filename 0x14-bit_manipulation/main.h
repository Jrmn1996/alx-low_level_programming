#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif