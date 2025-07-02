#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count, cutLine;

    cin >> count >> cutLine;

    vector<int> scores;

    for (int i = 0; i < count; i++)
    {
        int score;

        cin >> score;

        scores.push_back(score);
    }

    sort(scores.begin(), scores.end());

    reverse(scores.begin(), scores.end());

    cout << scores[cutLine - 1];

    return 0;
}
