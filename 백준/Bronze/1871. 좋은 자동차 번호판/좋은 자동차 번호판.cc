#include <iostream>
#include <string>

using namespace std;

int ConvertToBase26(const string& str)
{
    // 결과
    int result = 0;
    int power = 1;

    // 변경할 문자의 길이 -1 만큼 반복
    for (int i = str.length() - 1; i >= 0; i--)
    {
        result += (str[i] - 'A') * power;
        power *= 26;
    }

    return result;
}

int main()
{
    // 탐색할 횟수 입력
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        // 탐색할 문자열 입력 AAA-0000 형식으로 입력 예정
        string plate;
        cin >> plate;

        // 0번부터 3번째 까지 잘라 문자열 구분
        // 4번부터 4번째 까지 잘라 숫자열 구분
        string letters = plate.substr(0, 3);
        string numbers = plate.substr(4, 4);

        // 문자열은 26진수로 변환, 숫자열은 stoi로 인트값 변환
        int letterValue = ConvertToBase26(letters);
        int numberValue = stoi(numbers);

        string lastresult = "";

        lastresult = abs(letterValue - numberValue) <= 100 ? "nice" : "not nice";

        cout << lastresult << endl;
    }

    return 0;
}
