#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    int result = 0;

    unordered_set<string> sentenceList;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string sentence;
        cin >> sentence;
        sentenceList.insert(sentence);
    }

    for (int i = 0; i < M; i++)
    {
        string checkSentence;
        cin >> checkSentence;

        if (sentenceList.count(checkSentence))
        {
            result++;
        }
    }

    cout << result;

    return 0;
}
