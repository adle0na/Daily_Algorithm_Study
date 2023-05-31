#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{   
    string str;
    while (getline(cin, str))
    {
        int lowercase_count = 0;
        int uppercase_count = 0;
        int digit_count = 0;
        int space_count = 0;
        for (char c : str)
        {
            if (islower(c)) {  // 소문자인 경우
                lowercase_count++;
            }
            else if (isupper(c)) {  // 대문자인 경우
                uppercase_count++;
            }
            else if (isdigit(c)) {  // 숫자인 경우
                digit_count++;
            }
            else if (isspace(c)) {  // 공백인 경우
                space_count++;
            }
        }
        cout << lowercase_count << " " << uppercase_count << " " << digit_count << " " << space_count << endl;
    }
    return 0;
}