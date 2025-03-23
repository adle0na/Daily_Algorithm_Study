#include <iostream>

int main()
{
	int n = -1;
	int m = -1;

	while (true)
	{
		std::cin >> n >> m;

		if (n == 0 && m == 0)
			break;

		std::cout << (n > m ? "Yes" : "No") << "\n";
	}
}
