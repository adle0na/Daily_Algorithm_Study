#include <iostream>

using namespace std;

int main()
{
    int year[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    char day[7][20] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};

    int x, y;

    cin >> y >> x;

    for(int i = 1; i < x; i++)
        y += year[i];

    cout << day[y%7];
}
