#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    string word;
    int count = 0;

    while (iss >> word)
    {
        count++;
    }

    cout << count << '\n';
}