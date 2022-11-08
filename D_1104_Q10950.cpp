#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int T, i, j, k;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &j, &k);
		printf("%d\n", j + k);
	}
	return 0;
}