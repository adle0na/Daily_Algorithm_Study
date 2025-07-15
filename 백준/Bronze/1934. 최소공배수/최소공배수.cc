#include <iostream>

using namespace std;

// 최소 공배수
int gcd(int a, int b)
{
    // 나눠서 떨어지는수가 없을때까지 반복
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N--)
    {
        int A, B;
        cin >> A >> B;

        int lcm = (A * B) / gcd(A, B);
        cout << lcm << '\n';
    }

    return 0;
}