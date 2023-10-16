#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string word;

vector<string> slicedTexts;

void generateSequence(string word, int length)
{
    for (int i = 0; i < length; i++)
    {
        string slicedText = "";

        slicedTexts.push_back(word);

        word.erase(word.begin());
    }
}

int main()
{
    // 입력 받기
    cin >> word;

    int length = word.size();
    // 수열 생성 및 출력
    generateSequence(word, length);

    sort(slicedTexts.begin(), slicedTexts.end());

    for (int i = 0; i < length; i++)
    {
        cout << slicedTexts[i] << "\n";
    }

    return 0;
}
