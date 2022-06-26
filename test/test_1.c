#include "stdio.h"
int main()
{
	printf ("\n(Hello world)\n");
	for (int c=0; c<10;c++)
    { 
        for (int i =0;i<c;i++)
			printf("# %d",i);
		printf ("\n");
	}
    return 0;
}
