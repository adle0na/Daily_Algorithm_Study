#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int n;

    scanf("%d", &n);

    // i�� 1���� �Է¹�����(5) ���� �� 5�� �ݺ� (5�� ���)
    for (int i = 1; i <= n; i++)
    {
        // k�� 1���� n - i (4.. 3.. 0)�� ��� 
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // j�� 1���� 2*i - 1 (1.. 3.. 5.. 7)�� ���
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}