#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    deque<pair<int, int>> balloons;

    for (int i = 1; i <= N; i++)
    {
        int move;

        cin >> move;

        balloons.push_back({ i, move });
    }

    while (!balloons.empty())
    {
        // 현재 풍선 터뜨리기
        int idx = balloons.front().first;

        // 다음 칸수부터 이동
        int move = balloons.front().second;

        cout << idx << " ";

        balloons.pop_front();

        // 터뜨리고 난뒤 중간 체크
        if (balloons.empty()) break;

        // 양수이동로직
        if (move > 0)
        {
            for (int i = 0; i < move - 1; i++)
            {
                balloons.push_back(balloons.front());
                balloons.pop_front();
            }
        }
        // 음수 왼쪽 이동
        else
        {
            for (int i = 0; i < (-move); i++)
            {
                balloons.push_front(balloons.back());
                balloons.pop_back();
            }
        }
    }

    return 0;
}