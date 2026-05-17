include <stdio.h>
int min(int na, int nb)
{
	if (na<nb)
		return na;
	return nb;
int main(void)
{
	int a, b;
	printf("두 개의 정수 입력");
	scanf("%d %d", &a, &b);
	
	int i;

	for (i=min(a,b); i>=1; i--)
		if (a%i == 0 && b%i ==0)
			break;
	printf("두 수의 최대공약수: %d", i);
	return 0;
}
