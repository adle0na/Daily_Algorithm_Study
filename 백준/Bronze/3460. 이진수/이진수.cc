#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int cnt;

string str;

vector<int> v;

void toBinary(unsigned int n)
{
    if(n / 2 != 0)
        toBinary(n / 2);
    
    str = to_string(n % 2);

    v.push_back(stoi(str));
}

int main()
{
    unsigned int decimal;
    
    cin >> cnt;

    for(int i = 0 ; i < cnt; i++)
    {
        cin >> decimal;

        toBinary(decimal);

        reverse(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == 1)
                cout << i << " ";
        }

        v.clear();
    }
    return 0;
}