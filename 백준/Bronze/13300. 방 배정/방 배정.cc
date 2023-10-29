#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int studentCount, roomCount;

int gradeCount = 6;

vector<vector<int>> StudentList(6);

int answer = 0;

void ListSetup(int allList)
{
	for (int i = 0; i < allList; i++)
	{
		int grade, sex = 0;

		cin >> sex >> grade;

		StudentList[grade - 1].push_back(sex);
	}
}

void AddStudentWithSex(int value)
{
	answer += value % roomCount == 0 ? value / roomCount : (value / roomCount) + 1;
}

void AddRoomValue()
{
	for (int h = 0; h < gradeCount; h++)
	{
		int boyCount = 0;
		int girlCount = 0;

		for (int sex : StudentList[h])
			sex == 1 ? boyCount++ : girlCount++;

		AddStudentWithSex(boyCount);
		AddStudentWithSex(girlCount);
	}
}

int main()
{
	cin >> studentCount >> roomCount;

	ListSetup(studentCount);

	AddRoomValue();

	cout << answer;
}
