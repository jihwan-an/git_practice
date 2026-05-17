include <stdio.h>
//도전 프로그래밍 1 - 도전 2

void gugu(int num)
{
	for (int i=1; i<=9; i++)
		printf("%d * %d == %d \n", num, i, num*i);
}
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	gugu(a);
	printf("\n");
	gugu(b);
	
	return 0;
}
	

