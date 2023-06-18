#include <iostream>
#include <string>

using namespace std;

int main()
{
    int checkMonth = 2;
    int checkday = 18;

    int month;
    int day;

    // 0 => Special, 1 => Before, 2 => After
    int type = -1;

    cin >> month;
    cin >> day;
    
    if (month > checkMonth)
    {
        type = 2;
    }
    else
    {
        if (month == checkMonth && day == checkday)
            type = 0;
        else if (month == checkMonth && day > checkday)
            type = 2;
        else
            type = 1;
    }

    switch (type)
    {
        case 0:
            cout << "Special";
            break;
        case 1:
            cout << "Before";
            break;
        case 2:
            cout << "After";
            break;
    }

    return 0;
}