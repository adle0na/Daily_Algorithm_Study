#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int n;

    scanf("%d", &n);

    // i를 1부터 입력받은값(5) 까지 총 5번 반복 (5줄 출력)
    for (int i = 1; i <= n; i++)
    {
        // k를 1부터 n - i (4.. 3.. 0)번 출력 
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // j를 1부터 2*i - 1 (1.. 3.. 5.. 7)번 출력
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}