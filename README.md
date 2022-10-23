# Daily_Backjoon_Study

fitst day 22.10.22 Q_2438 Clear!

Code 
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
```
Input = 5

Output
```
*
**
***
****
*****
```
