#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.size(); )
    {

        if (i + 2 < s.size() && s.substr(i, 3) == "dz=")
        {
            count++;
            i += 3;
        }
        // 2글자짜리 체크
        else if(
            (i + 1 < s.size()) &&
                (
                s.substr(i, 2) == "c=" ||
                s.substr(i, 2) == "c-" ||
                s.substr(i, 2) == "d-" ||
                s.substr(i, 2) == "lj" ||
                s.substr(i, 2) == "nj" ||
                s.substr(i, 2) == "s=" ||
                s.substr(i, 2) == "z="
                )
            )
        {
            count++;
            i += 2;
        }
        else {
            count++;
            i++;
        }
    }

    cout << count << '\n';
    return 0;
}