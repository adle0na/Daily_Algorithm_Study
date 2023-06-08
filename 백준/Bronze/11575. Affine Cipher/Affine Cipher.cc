#include <iostream>
#include <string>

using namespace std;

// 아핀 암호를 수행하는 함수
string affineCipher(int a, int b, const string& plaintext)
{
    string ciphertext;

    for (char c : plaintext)
    {
        // 알파벳 대문자가 아닌 경우는 그대로 결과에 추가
        if (c < 'A' && c > 'Z') ciphertext += c;

        // 알파벳 대문자인 경우에만 암호화 수행
        if (c >= 'A' && c <= 'Z')
        {   
            int x = c - 'A';  // 알파벳을 0부터 25로 매핑

            // 아핀 암호식을 적용하여 암호화
            int encrypted = (a * x + b) % 26;

            char encryptedChar = 'A' + encrypted;  // 매핑된 암호문자

            ciphertext += encryptedChar;
        }
    }
    return ciphertext;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        string plaintext;
        cin >> plaintext;

        string ciphertext = affineCipher(a, b, plaintext);

        cout << ciphertext << endl;
    }

    return 0;
}