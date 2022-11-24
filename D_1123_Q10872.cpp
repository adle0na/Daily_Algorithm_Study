
	int n;

	cin >> n;

	int fact = 1;

	for (int i = n; i > 0; i--)
	{
		fact *= i;
	}

	cout << fact;
}