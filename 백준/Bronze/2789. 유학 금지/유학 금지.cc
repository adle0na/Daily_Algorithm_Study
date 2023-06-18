#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    string censored_word;

    for (char c : word)
    {
        // 대문자로 변환하여 CAMBRIDGE에 포함된 알파벳인지 확인
        if (c < 'A' || c > 'Z' || (c >= 'A' && c <= 'Z' && string("CAMBRIDGE").find(c) == string::npos))
            censored_word += c;
    }

    cout << censored_word << endl;

    return 0;
}
