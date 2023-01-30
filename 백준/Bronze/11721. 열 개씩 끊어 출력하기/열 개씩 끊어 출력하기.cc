#include <iostream>
#include <string>

using namespace std;

int main()
{
    string w;

    cin >> w;

    for(int i = 0; i < w.size(); i++)
    {
        cout << w[i];

        if(i % 10 == 9)
            cout << endl;
    }
}