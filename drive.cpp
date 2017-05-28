#include <stdio.h>
#include "loop.h"
#include "sort.h"
#include <typeinfo>
int main(void)
{
	double base[5]={0,2,3,4,5};
	foreach(base,ac){
		printf("%lf ",ac);
	}
	printf("\n");
	return 0;
}