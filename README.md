# DEBUG
* It includes debug.h and destructor.c.

# Structure
```C
//debug.h
#include <sys/time.h>
#define TESTn(i) printf("[(%s/%d) %s ]%s:%ld\n", __FILE__, __LINE__, __func__, #i, (long)(i)); fflush(stdin);
#define TEST(i) printf("[%s]%s:%ld\n", __func__, #i, (long)(i)); fflush(stdin);
#define STOP {char c; read(STDIN_FILENO, &c, sizeof(char));}
```
```C
//destructor.c
__attribute__((destructor))
void	destructor(void)
{
	system("echo");
	system("leaks -q push_swap | awk 'NR == 3' | cut -d ' ' -f 3-4");
}
```


# Usage
* include debug.h to use utilities
```C
#include  "debug.h"
```

* use STOP as follows
```C
while (1)
{
	i++;
	STOP; //wait for the user input
	printf("%d\n", i);
}
```
* use TESTn(i) as follows
```C
while (1)
{
	i++;
	TESTn(i); //displays 1.FILE NAME, 2.LINE, 3.FUNCTION NAME, and 4.VALUE
}
```
