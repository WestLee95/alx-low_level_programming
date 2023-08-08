#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#ifndef MY_HEADER_H
#define MY_HEADER_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

#endif
