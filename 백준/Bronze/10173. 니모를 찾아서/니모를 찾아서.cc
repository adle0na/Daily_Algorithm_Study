#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    string nemo = "nemo";

    while (getline(cin, input))
    {
        if (input == "EOI")
        {
            break;
        }

        transform(input.begin(), input.end(), input.begin(), ::tolower);
        transform(nemo.begin(), nemo.end(), nemo.begin(), ::tolower);

        if (input.find(nemo) != string::npos)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Missing" << endl;
        }
    }

    return 0;
}