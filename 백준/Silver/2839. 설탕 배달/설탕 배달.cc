#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int count = -1;

    for (int five = N / 5; five >= 0; five--)
    {
        int remain = N - (5 * five);

        if (remain % 3 == 0)
        {
            int three = remain / 3;
            count = five + three;
            break;
        }
    }

    cout << count << endl;
    return 0;
}
