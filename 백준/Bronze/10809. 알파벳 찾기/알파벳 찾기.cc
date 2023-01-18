#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    cin >> s;

    for(int i = 0; i < alpha.size(); i++)
        cout << (int)s.find(alpha[i]) << " ";
}