#include <iostream>
using namespace std;

int main()
{
    // 찾기 배열
    int x[3], y[3];

    for (int i = 0; i < 3; ++i)
    {
        cin >> x[i] >> y[i];
    }

    int resultX, resultY;

    // x좌표에서 한 번만 나오는 것 찾기
    if (x[0] == x[1]) resultX = x[2];
    else if (x[0] == x[2]) resultX = x[1];
    else resultX = x[0];

    // y좌표에서 한 번만 나오는 것 찾기
    if (y[0] == y[1]) resultY = y[2];
    else if (y[0] == y[2]) resultY = y[1];
    else resultY = y[0];

    cout << resultX << " " << resultY << '\n';

    return 0;
}