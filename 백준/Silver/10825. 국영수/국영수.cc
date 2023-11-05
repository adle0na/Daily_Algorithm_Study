#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct score
{
    string name;
    int korean;
    int english;
    int math;
};

bool cmp(score a, score b)
{
    if (a.korean != b.korean)
    {
        return a.korean > b.korean;
    }

    if (a.english != b.english)
    {
        return a.english < b.english;
    }

    if (a.math != b.math)
    {
        return a.math > b.math;
    }

    return a.name < b.name;
}

int main()
{
    int n;

    cin >> n;
    
    vector<score> scoreList(n);

    for (int i = 0; i < n; i++)
    {
        cin >> scoreList[i].name >> scoreList[i].korean >> scoreList[i].english >> scoreList[i].math;
    }

    sort(scoreList.begin(), scoreList.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << scoreList[i].name << "\n";
    }
    
    return 0;
}


