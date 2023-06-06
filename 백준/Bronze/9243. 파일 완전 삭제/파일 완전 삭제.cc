#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N = 0;
    string before, after = "";

    // 입력 받기
    cin >> N;
    cin >> before;
    cin >> after;

    // 파일 삭제 프로그램 실행
    for (int i = 0; i < before.length(); i++)
    {
        if (N % 2 == 0)
        {
            // n이 짝수인 경우, 비트가 그대로 유지되어야 함
            if (before[i] != after[i])
            {
                cout << "Deletion failed" << endl;
                return 0;
            }
        }
        else
        {
            // n이 홀수인 경우, 비트가 반전되어야 함
            if (before[i] == after[i])
            {
                cout << "Deletion failed" << endl;
                return 0;
            }
        }
    }

    // 모든 비트가 올바르게 삭제되었음
    cout << "Deletion succeeded" << endl;

    return 0;
}