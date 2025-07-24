#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> people;
    for (int i = 1; i <= N; ++i)
    {
        people.push_back(i);
    }

    vector<int> result;
    int index = 0;

    while (!people.empty())
    {
        index = (index + K - 1) % people.size();
        result.push_back(people[index]);        
        people.erase(people.begin() + index);   
    }

    cout << "<";
    
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        
        if (i != result.size() - 1) cout << ", ";
    }
    
    cout << ">\n";

    return 0;
}