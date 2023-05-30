#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> dq;
    int N;
    cin >> N;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int X;
            cin >> X;
            dq.push_front(X);
        }
        else if (command == "push_back") {
            int X;
            cin >> X;
            dq.push_back(X);
        }
        else if (command == "pop_front") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (command == "pop_back") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (command == "size") {
            cout << dq.size() << endl;
        }
        else if (command == "empty") {
            cout << (dq.empty() ? 1 : 0) << endl;
        }
        else if (command == "front") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.front() << endl;
            }
        }
        else if (command == "back") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.back() << endl;
            }
        }
    }

    return 0;
}
