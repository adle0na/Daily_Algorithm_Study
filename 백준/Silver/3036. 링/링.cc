#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

pair<int, int> simplifyFraction(int numerator, int denominator) {
    int common = gcd(numerator, denominator);
    return { numerator / common, denominator / common };
}

int main() {
    int N;
    cin >> N;

    int firstRingRadius;
    cin >> firstRingRadius;

    for (int i = 1; i < N; ++i) {
        int otherRingRadius;
        cin >> otherRingRadius;

        // 첫 번째 링을 한 바퀴 돌렸을 때, 다른 링이 몇 바퀴 도는지 계산
        auto result = simplifyFraction(otherRingRadius, firstRingRadius);

        cout << result.second << "/" << result.first << endl;
    }

    return 0;
}
