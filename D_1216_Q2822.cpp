#pragma region 첫번째풀이

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
// 헤더 정리 완료

using namespace std;

int main(void)
{
	int score;
	int sum = 0;

	vector<int> v1;

	vector<int> v2;

	vector<int> v3;

	for (int i = 0; i < 8; i++)
	{
		cin >> score;
		v1.push_back(score);
		v3.push_back(score);
	}
	sort(v1.begin(), v1.end(), greater<int>());

	for (int j = 0; j < 5; j++)
	{
		v2.push_back(v1[j]);
		sum += v1[j];
	}

	cout << sum << "\n";

	v1.clear();

	for (int i = 0; i < v3.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			if (v3[i] == v2[j])
			{
				v1.push_back(i);
			}
		}
	}

	sort(v1.begin(), v1.end());

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] + 1 << " ";
	}

}
#pragma endregion

#pragma region 두번째 풀이
#include <iostream>
#include <algorithm>
using namespace std;

class answer
{
	public :
		int score;
		int num;
};

bool cmp(answer a, answer b)
{
	return a.score > b.score;
}

int main()
{
	answer* p = new answer[8];
	int sum = 0;
	int arr[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> p[i].score;
		p[i].num = i + 1;
	}

	// 새로 배우는 안정 정렬 기능
	stable_sort(p, p + 8, cmp);

	for (int i = 0; i < 5; i++)
	{
		sum += p[i].score;
		arr[i] = p[i].num;
	}

	sort(arr, arr + 5);

	cout << sum << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

#pragma endregion