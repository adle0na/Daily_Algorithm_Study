#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    // 사용할 큐 q
    queue<int> q;

    // 입력 받을 숫자 n 선언
    int n;
    cin >> n;

    // n의 크기만큼 반복 실행
    while (n--) {
        // 입력 받을 명령어 string 선언
        string command;
        cin >> command;

        // push 명령어의 경우 q에서 push 함수 실행 => 큐에x 삽입
        if (command == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        // pop 명령어의 경우 q가 비어있는 경우 -1 출력 아닌 경우 Pop 함수 실행 => 맨 앞 숫자 제거
        else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        // size 명령어의 경우 q의 길이 출력
        else if (command == "size") {
            cout << q.size() << endl;
        }
        // empty 명령어의 경우 q가 비어있는지 여부에 따라 1 0 출력 
        else if (command == "empty") {
            cout << (q.empty() ? 1 : 0) << endl;
        }
        else if (command == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.front() << endl;
            }
        }
        else if (command == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.back() << endl;
            }
        }
    }

    return 0;
}