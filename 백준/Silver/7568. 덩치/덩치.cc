#include <iostream>
#include <vector>

struct Person
{
    int weight;
    int height;
    int rank;
};

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<Person> people(N);

    // 사람들의 몸무게와 키 입력 받기
    for (int i = 0; i < N; i++)
    {
        cin >> people[i].weight >> people[i].height;

        people[i].rank = 1; // 초기 덩치 등수를 1로 설정
    }

    // 모든 사람들의 덩치 등수 계산
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (people[i].weight < people[j].weight && people[i].height < people[j].height)
            {
                people[i].rank++; // i번째 사람보다 j번째 사람의 덩치가 더 크면 등수 증가
            }
        }
    }

    // 덩치 등수 출력
    for (int i = 0; i < N; i++)
    {
        cout << people[i].rank << " ";
    }
    cout << endl;

    return 0;
}
