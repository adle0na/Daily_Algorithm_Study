#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (int i = 0; i < array.size(); i++)
    {
        int b = array[i];

        while (1)
        {
            if (b == 0)
                break;
            
            if (b % 10 == 7)
                answer++;

            b /= 10;
        }
    }

    return answer;
}