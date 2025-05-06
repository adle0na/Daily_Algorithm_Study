#include <iostream>
using namespace std;

int main()
{
    int H, M;
    int timer;
    
    cin >> H >> M;
    cin >> timer;

    int total = H * 60 + M + timer;
    
    total %= 24 * 60;
    
    cout << total / 60 << ' ' << total % 60 << '\n';
    
    return 0;
}