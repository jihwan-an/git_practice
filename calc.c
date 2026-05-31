#include <stdio.h>
int main(void)
{
	printf("Set mode [plus=0/minus=1]");
	int a;
	scanf("%d", &a);
	
	printf("two number");
	int b,c;
	scanf("%b %c", &a, &b);
	if (a==0)
		printf("%d \n", b+c);
	else
		printf("%d \n", b-c);
	return 0;
}
