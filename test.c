#include <stdio.h>

char numType(int a); // function declaration

int main()
{
	int b;
	printf("Enter a number: \n");
	scanf("%d", &b);
	char output = numType(b);
	printf("%c\n", output);
	return 0;
}

char numType(int a)
{
	char result = '/';
	if(a < 0)
	{
		result = '-';
	}
	if(a > 0)
	{
		result = '+';
	}
	if(a == 0)
	{
		result = '0';
	}
	return result;
}