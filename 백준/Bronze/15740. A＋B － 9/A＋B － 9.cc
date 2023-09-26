#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addLargeIntegers(const string& num1, const string& num2) {
    int carry = 0;
    string result;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i] - '0' : 0;
        int y = (j >= 0) ? num2[j] - '0' : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        sum %= 10;

        result += to_string(sum);

        i--;
        j--;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string num1, num2;

    cin >> num1 >> num2;

    string sum = addLargeIntegers(num1, num2);

    cout << sum << endl;

    return 0;
}
