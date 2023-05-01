#ifndef	_DEBUG_H_
#define	_DEBUG_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

#define	TESTn(i) printf("[(%s/%d) %s ]%s:%ld\n", __FILE__, __LINE__, __func__, #i, (long)(i)); fflush(stdin);
#define	STOP {char c; read(STDIN_FILENO, &c, sizeof(char));}

#endif
