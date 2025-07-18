#include <iostream>

using namespace std;

int gcd(int a, int b)
{
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

    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    // 분수 덧셈: A/B + C/D = (A*D + C*B) / (B*D)
    int numerator = A * D + C * B;
    int denominator = B * D;

    int g = gcd(numerator, denominator);

    cout << numerator / g << " " << denominator / g << '\n';

    return 0;
}