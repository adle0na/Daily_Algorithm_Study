#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    int num = 666;

    while (true)
    {
        stringstream ss;

        ss << num;

        string s = ss.str();

        if (s.find("666") != string::npos)
        {
            count++;
            if (count == N)
            {
                cout << num << endl;
                break;
            }
        }

        num++;
    }

    return 0;
}
