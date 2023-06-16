#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main()
{
    int N;
    cin >> N;

    set<string> words; // 중복된 단어를 제거하기 위해 set 컨테이너를 사용합니다.

    for (int i = 0; i < N; i++)
    {
        string word;

        cin >> word;

        words.insert(word);
    }

    vector<string> sortedWords(words.begin(), words.end()); // set을 vector로 변환하여 정렬합니다.

    sort(sortedWords.begin(), sortedWords.end(), compare);

    for (string word : sortedWords)
    {
        cout << word << "\n";
    }

    return 0;
}