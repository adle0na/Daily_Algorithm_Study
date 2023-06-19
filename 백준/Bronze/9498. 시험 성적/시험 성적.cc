#include <iostream>

using namespace std;

int main()
{
    int score;

    cin >> score;

    char grade = (score >= 90 && score <= 100) ? 'A'
        : (score >= 80 && score <= 89) ? 'B'
        : (score >= 70 && score <= 79) ? 'C'
        : (score >= 60 && score <= 69) ? 'D'
        : 'F';

    cout << grade << endl;

    return 0;
}