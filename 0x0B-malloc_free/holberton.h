#ifndef HOLBERTON_H
#define HOLBERTON_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int getLength(char *str);
char *str_concat(char *s1, char *s2);
void _strcpy(char *str, char *dest, int start, int length);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
