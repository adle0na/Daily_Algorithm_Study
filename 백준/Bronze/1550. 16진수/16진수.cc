#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string hexNumber;
    int decimalNumber;
    
    cin >> hexNumber;
    
    stringstream ss;
    ss << hex << hexNumber;
    ss >> decimalNumber;

    cout << decimalNumber;
   
    return 0;
}