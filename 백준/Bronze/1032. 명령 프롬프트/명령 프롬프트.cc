#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 패턴 분석함수
string GetPattern(const vector<string>& filenames)
{
    // 길이 설정
    int length = filenames[0].length();
    // 문자열
    string pattern = "";

    // 길이만큼 조회
    for (int i = 0; i < length; i++)
    {
        char currentChar = filenames[0][i];
        bool isWildcard = true;

        // 입력한 문자가 전부 같으면 그 배열은 통과 아닐 경우 ? 처리
        for (int j = 1; j < filenames.size(); j++)
        {
            if (currentChar != filenames[j][i])
            {
                isWildcard = false;
                break;
            }
        }

        if (isWildcard)
        {
            pattern += currentChar;
        }
        else
        {
            pattern += "?";
        }
    }

    return pattern;
}

int main()
{
    int N;
    cin >> N;

    vector<string> filenames(N);

    for (int i = 0; i < N; i++)
    {
        cin >> filenames[i];
    }

    string pattern = GetPattern(filenames);

    cout << pattern << endl;

    return 0;
}
