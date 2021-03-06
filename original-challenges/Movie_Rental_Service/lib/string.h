#ifndef STRING_H_
#define STRING_H_

#include <stddef.h>

extern void *cgc_memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern void *cgc_memset(void *dest, int c, size_t n);
extern int memcmp(void *s1, const void *s2, size_t n);
extern void *memchr(const void *s, int c, size_t n);

extern int strcmp(const char *s1, const char *s2);
extern size_t cgc_strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern char *strchr(const char *s, int c);
extern char *strsep(char **stringp, const char *delim);

#endif /* !STRING_H_ */
