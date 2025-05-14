#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int total = 0;

    for (char c : s)
    {
        if ('A' <= c && c <= 'C') total += 3;
        else if ('D' <= c && c <= 'F') total += 4;
        else if ('G' <= c && c <= 'I') total += 5;
        else if ('J' <= c && c <= 'L') total += 6;
        else if ('M' <= c && c <= 'O') total += 7;
        else if ('P' <= c && c <= 'S') total += 8;
        else if ('T' <= c && c <= 'V') total += 9;
        else if ('W' <= c && c <= 'Z') total += 10;
    }

    cout << total << '\n';

    return 0;
}