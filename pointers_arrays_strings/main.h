#ifndef MAIN_H
#define MAIN_H

void puts2(char *str);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *leet(char *);
char *cap_string(char *);
void puts_half(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
int _atoi(char *s);
void print_rev(char *s);
void rev_string(char *s);


#endif /* MAIN_H */
