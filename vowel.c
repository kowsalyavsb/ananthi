#include <stdio.h>

int main() 
{
	char c;
	printf("enter  an alphabet\n");
	scanf("%c",&c);
	int a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	int b=(c=='A'||c=='E'||c=='J'||c=='O'||c=='U');
	if(a||b)
	{
	printf("%c is a vowel",c);
	}
	else
	{
		printf("%c is a constant",c);
	}
	return 0;
}
