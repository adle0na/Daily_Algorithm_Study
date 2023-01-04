#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int answer = 0;

    string a, b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int na = stoi(a);

    int nb = stoi(b);
    
    na > nb ? answer = na : answer = nb;

    cout << answer;
}