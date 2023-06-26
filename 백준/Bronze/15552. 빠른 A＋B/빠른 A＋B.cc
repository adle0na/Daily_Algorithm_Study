#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int K;

    int a, b;
    
    cin.tie(NULL);

    ios_base::sync_with_stdio(false);   

    cin >> K;

    for(int i = 0; i < K; i++)
    {
        cin >> a >> b;

        cout << a + b << "\n";
    }

    return 0;
} 