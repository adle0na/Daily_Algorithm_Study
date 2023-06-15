#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());  // A 배열을 오름차순으로 정렬

    sort(B.begin(), B.end(), greater<int>());  // B 배열을 내림차순으로 정렬

    int minSum = 0;
    for (int i = 0; i < N; i++) {
        minSum += A[i] * B[i];
    }

    cout << minSum << endl;

    return 0;
}
