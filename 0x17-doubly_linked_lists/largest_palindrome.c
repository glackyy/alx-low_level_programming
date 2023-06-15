#include <stdio.h>
int is_palindrome(int n)
{
	int r, orig;
	int rev = 0;
	orig = n;
	while (n != 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}
	return (orig == rev);
}
int main()
{
	FILE *f;
	int p;
	int larg_palindrome = 0;
	int i, j;
	for (i = 999; i >= 100 ; i--)
	{
		for (j = i; j >= 100; j--)
		{
			p = i * j;
			if (p > larg_palindrome && is_palindrome(p))
			{
		  		larg_palindrome = p;
			}
		}
	}
	f  = fopen("102-result", "w");
	if (f != NULL)
	{
		fprintf(f, "%d", larg_palindrome);
		fclose(f);
	}
	printf("%d\n", larg_palindrome);
	return (0);
}
