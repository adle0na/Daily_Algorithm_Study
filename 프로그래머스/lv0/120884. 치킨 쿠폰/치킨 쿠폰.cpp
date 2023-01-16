#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;

    if (chicken < 10) return answer;

    for (int i = 0; i < chicken / 10; i++)
    {
        answer++;
        chicken++;
    }

    return answer;
}
