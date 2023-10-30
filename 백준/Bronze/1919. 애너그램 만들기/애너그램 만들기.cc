#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word1, word2;
    cin >> word1 >> word2;

    int freq1[26] = { 0 };
    int freq2[26] = { 0 };

    for (char c : word1) 
        freq1[c - 'a']++;

    for (char c : word2) 
        freq2[c - 'a']++;

    int removals = 0;

    for (int i = 0; i < 26; i++) {
        removals += abs(freq1[i] - freq2[i]);
    }

    cout << removals << endl;

    return 0;
}