# DEBUG
* It includes debug.h and destructor.c.

# Usage
```C
//include debug.h to use utilities
#include  "debug.h"
```

```C
//use STOP as follows
while (1)
{
	i++;
	STOP; //wait for the user input
	printf("%d\n", i);
}
```
```C
//use TESTn(i) as follows
while (1)
{
	i++;
	TESTn(i); //displays 1.FILE NAME, 2.LINE, 3.FUNCTION NAME, and 4.VALUE
}
```
