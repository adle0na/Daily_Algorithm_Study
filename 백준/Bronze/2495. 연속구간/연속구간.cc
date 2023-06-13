#include <iostream>
#include <string>

using namespace std;

int FindSameCount(const string& number)
{
    int longestLength = 1;
    int currentLength = 1;

    for (int i = 1; i < number.length(); i++)
    {
        if (number[i] == number[i - 1])
        {
            currentLength++;

            if (currentLength > longestLength)
            {
                longestLength = currentLength;
            }
        }
        else
        {
            currentLength = 1;
        }
    }

    return longestLength;
}

int main()
{
    string numbers[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < 3; i++)
    {
        int longestLength = FindSameCount(numbers[i]);
        cout << longestLength << endl;
    }

    return 0;
}
