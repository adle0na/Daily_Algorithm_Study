#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;

	while (1)
	{
		getline(cin, input);  // ���Ͱ� ������ �� ���� �� �� �Է� 

		if (input == "")  // ������ �ԷµǸ� ���� 
			break;

		cout << input << endl;  // �Էµ� �� �� ��� 
	}

	return 0;
}