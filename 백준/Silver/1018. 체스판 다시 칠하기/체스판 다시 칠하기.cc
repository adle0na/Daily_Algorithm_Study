#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector<string> board(N);

    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    int minPaint = 64; // 최대 8x8 크기니까 최댓값 64으로 자를 예정

    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int countW = 0; // 왼쪽 위 'W' 로 시작
            int countB = 0; // 왼쪽 위 'B' 로 시작

            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    char expectedW = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expectedB = ((x + y) % 2 == 0) ? 'B' : 'W';

                    if (board[i + x][j + y] != expectedW) countW++;
                    if (board[i + x][j + y] != expectedB) countB++;
                }
            }
            minPaint = min({ minPaint, countW, countB });
        }
    }

    cout << minPaint << endl;

    return 0;
}
