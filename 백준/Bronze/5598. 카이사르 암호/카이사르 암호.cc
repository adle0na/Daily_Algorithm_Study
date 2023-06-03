#include <iostream>
#include <string>

using namespace std;

int main()
{
    string caesarWord;
    getline(cin, caesarWord);

    string originalWord = "";

    for (char c : caesarWord)
    {
        if (c >= 'A' && c <= 'Z')
        {
            // 알파벳 대문자 범위인 경우에만 변환 수행
            c -= 3;
            if (c < 'A')
            {
                // 'A'보다 작아지면 'Z'로 되돌림
                c += 26;
            }
        }
        originalWord += c;
    }

    cout << originalWord << endl;

    return 0;
}
