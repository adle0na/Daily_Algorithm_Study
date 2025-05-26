#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    bool paper[100][100] = { false };

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        for (int j = x; j < x + 10; ++j)
        {
            for (int k = y; k < y + 10; ++k)
            {
                paper[j][k] = true;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; ++j)
        {
            if (paper[i][j]) area++;
        }
    }

    printf("%d\n", area);
    return 0;
}