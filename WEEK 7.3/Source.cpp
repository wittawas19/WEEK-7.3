#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  i = 0, x = 0, y = 0, j = 0;
	char str[101];
	scanf("%s", &str);
	for (i; i < 101; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x += 1;
			j += 1;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			y += 1;
			j += 1;
		}


	}
	if (x == j)
	{
		printf("All Capital Letter");
	}
	else if (y == j)
	{
		printf("All Small Letter");
	}
	else if (x + y == j)
	{
		printf("Mix");
	}
	else
	{
		printf("Error!");
	}

}