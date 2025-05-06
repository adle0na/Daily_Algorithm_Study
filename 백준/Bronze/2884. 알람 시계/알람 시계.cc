#include <iostream>
using namespace std;

int main()
{
    int H, M;

    cin >> H >> M;

    if (M < 45)
    {
        M += 60;
        H = (H == 0) ? 23 : H - 1;
    }
    
    M -= 45;

    cout << H << ' ' << M << '\n';
    
    return 0;
}