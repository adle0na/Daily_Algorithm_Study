#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N = 0;

    cin >> N;

    int FindN = 0;

    while (true)
    {
        cin >> FindN;

        if (FindN == 0)
            break;

        if (FindN % N == 0)
            cout << FindN << " is a multiple of " << N << "." << "\n";
        else
            cout << FindN << " is NOT a multiple of " << N << "." << "\n";
    }

    return 0;
}
