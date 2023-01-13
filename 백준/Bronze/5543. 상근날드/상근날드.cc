#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int price;

    vector<int> bl;

    vector<int> dl;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> price;
        if(i < 3)
        {
            bl.push_back(price);
        }
        else if(i >= 3)
        {
            dl.push_back(price);
        }
    }
    sort(bl.begin(), bl.end());

    sort(dl.begin(), dl.end());

    cout << bl[0] + dl[0] - 50;
}