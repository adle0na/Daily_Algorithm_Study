#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    string TitleText;

    cin >> N;
    cin.ignore();

    for (int i = 1; i <= N; i++)
    {
        getline(cin, TitleText);

        cout << i << ". " << TitleText << endl;
    }

    return 0;
}