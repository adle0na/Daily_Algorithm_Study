#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int maxPrize = 0;  // 가장 많은 상금
    for (int i = 0; i < N; i++)
    {
        vector<int> dice(4);
        for (int j = 0; j < 4; j++)
        {
            cin >> dice[j];
        }

        sort(dice.begin(), dice.end());  // 주사위 눈을 오름차순으로 정렬

        int prize = 0;  // 현재 참가자의 상금

        // 같은 눈이 4개인 경우
        if (dice[0] == dice[3])
        {
            prize = 50000 + dice[0] * 5000;
        }
        // 같은 눈이 3개인 경우
        else if (dice[0] == dice[2] || dice[1] == dice[3])
        {
            prize = 10000 + dice[1] * 1000;
        }
        // 같은 눈이 2개씩 두 쌍인 경우
        else if (dice[0] == dice[1] && dice[2] == dice[3])
        {
            prize = 2000 + dice[0] * 500 + dice[2] * 500;
        }
        // 같은 눈이 2개인 경우
        else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[2] == dice[3])
        {
            if (dice[1] == dice[2])
                prize = 1000 + dice[1] * 100;
            else if (dice[0] == dice[1])
                prize = 1000 + dice[0] * 100;
            else
                prize = 1000 + dice[2] * 100;
        }
        // 모두 다른 눈이 나오는 경우
        else
        {
            prize = dice[3] * 100;
        }

        // 현재 참가자의 상금이 가장 많은 상금보다 크면 갱신
        if (prize > maxPrize)
            maxPrize = prize;
    }

    cout << maxPrize << endl;

    return 0;
}
