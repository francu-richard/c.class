#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int v[] = {2, 1, 2};
	int *p = v;
	printf("%d\n", *p);
	p = &v[0];
	p = p + 1;
	printf("%d\n", *p);

  	return 0;
}