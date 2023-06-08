#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<bool> seats(101, false);  // 자리의 상태를 나타내는 벡터, 초기값은 모두 비어있음
    int rejectedCount = 0;  // 거절당한 사람의 수

    for (int i = 0; i < N; ++i)
    {
        int seatNumber;
        cin >> seatNumber;

        if (seats[seatNumber])
        {
            // 이미 해당 자리에 사람이 있는 경우
            rejectedCount++;
        }
        else 
        {
            // 해당 자리가 비어있는 경우
            seats[seatNumber] = true;
        }
    }

    cout << rejectedCount << endl;

    return 0;
}