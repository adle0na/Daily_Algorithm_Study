#include <iostream>
using namespace std;

int main()
{
    int size;
    
    cin >> size;

    int cnt = size / 4;
    
    for (int i = 0; i < cnt; ++i)
    {
        cout << "long ";
    }
    
    cout << "int\n";
    
    return 0;
}