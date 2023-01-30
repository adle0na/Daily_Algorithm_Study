#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, M;

    string str;
    
    cin >> N >> M;

    for(int i = 0; i < N; i++)
        str = str + to_string(N);
    
    if(str.size() > M)
        cout << str.substr(0, M);
    else
        cout << str;
}