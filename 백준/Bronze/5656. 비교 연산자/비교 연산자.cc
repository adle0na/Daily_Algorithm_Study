#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string op;

    int caseNumber = 0;

    while (cin >> a >> op >> b)
    {
        if (op != "E")
        {
            caseNumber++;

            cout << "Case " << caseNumber << ": ";
        }

        if (op == ">")
            cout <<  (a > b ? "true" : "false") << endl;
        else if (op == ">=")
            cout << (a >= b ? "true" : "false") << endl;
        else if (op == "<")
            cout << (a < b ? "true" : "false") << endl;
        else if (op == "<=")
            cout << (a <= b ? "true" : "false") << endl;
        else if (op == "==")
            cout << (a == b ? "true" : "false") << endl;
        else if (op == "!=")
            cout << (a != b ? "true" : "false") << endl;
        else if (op == "E")
            break;
    }

    return 0;
}