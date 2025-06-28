#include <iostream>
using namespace std;

// 자리수 체크
int count_digits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int main()
{
    int N;

    cin >> N;

    int result = 0;

    // 자리수
    int num_digits = count_digits(N);
    // 시작값
    int start = N - 9 * num_digits;

    // 0보다 큰경우부터 1로 시작
    if (start < 1) start = 1;

    for (int i = start; i < N; i++)
    {
        int sum = i;
        int temp = i;

        // 자리수만큼 반복
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N)
        {
            result = i;
            break;
        }
    }

    cout << result << endl;

    return 0;
}