#include <iostream>
using namespace std;

int main()
{
    int tPrice, tCount;
    
    cin >> tPrice >> tCount;

    int calTotal = 0;
    
    for(int i = 0; i < tCount; i++)
    {
        int price, count;
        
        cin >> price >> count;
        
        calTotal += price * count;
    }
    
    cout << (calTotal == tPrice ? "Yes" : "No") << '\n';
   
    return 0;
}