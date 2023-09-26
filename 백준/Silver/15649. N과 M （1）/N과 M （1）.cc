#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> sequence;
bool used[9]; // 1부터 8까지의 자연수를 사용하기 위해 크기 9의 배열을 사용합니다.

// 수열을 생성하고 출력하는 함수
void generateSequence(int count) {
    // 수열의 길이가 M에 도달하면 출력하고 종료합니다.
    if (count == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << sequence[i] << ' ';
        }
        cout << '\n';
        return;
    }

    // 1부터 N까지의 자연수 중에서 사용되지 않은 수를 찾아서 수열에 추가합니다.
    for (int i = 1; i <= N; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            sequence.push_back(i);
            generateSequence(count + 1);
            used[i] = false;
            sequence.pop_back();
        }
    }
}

int main()
{
    // 입력 받기
    cin >> N >> M;

    // 수열 생성 및 출력
    generateSequence(0);

    return 0;
}
