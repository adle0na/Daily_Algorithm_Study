#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, rs;
    cin >> s;

    rs = s;

    reverse(rs.begin(), rs.end());

    cout << (rs == s) ? 1 : 0;

    return 0;
}