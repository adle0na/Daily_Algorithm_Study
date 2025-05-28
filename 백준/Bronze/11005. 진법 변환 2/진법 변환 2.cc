#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    int B;
    cin >> N >> B;

    string result = "";
    
    while (N > 0)
    {
        int remainer = N % B;
        char digit;

        if (remainer < 10)
        {
            digit = '0' + remainer;
        }
        else
        {
            digit = 'A' + (remainer - 10);
        }

        result = digit + result;

        N /= B;
    }

    cout << result << '\n';

    return 0;
}