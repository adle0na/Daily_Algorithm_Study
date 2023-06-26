#include <iostream>

using namespace std;

int main()
{
    int K;

    int call_Length;

    int resultY = 0;
    int resultM = 0;
    
    cin.tie(NULL);

    ios_base::sync_with_stdio(false);   

    cin >> K;

    for(int i = 0; i < K; i++)
    {
        cin >> call_Length;

        resultY += ((call_Length / 30) + 1) * 10;
        resultM += ((call_Length / 60) + 1) * 15;
    }

    if(resultY > resultM)
    {
        cout << "M" << " " << resultM;
    }
    else if (resultY == resultM)
    {
        cout << "Y" << " " << "M" << " " << resultM;
    }
    else
    {
        cout << "Y" << " " << resultY;
    }
    
    return 0;
} 