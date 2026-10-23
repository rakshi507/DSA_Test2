//Find the First Unique letter
//given a string code containing lowercaseEnglish letters, return the index of the first character that appears only once. if every character repeats, return -1.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string code) {
        int frequency[26] = {};

        for (char character : code) {
            ++frequency[character - 'a'];
        }

        for (string::size_type i = 0; i < code.size(); ++i) {
            if (frequency[code[i] - 'a'] == 1) {
                return static_cast<int>(i);
            }
        }

        return -1;
    }
};

int main() {
    string code;
    cin >> code;

    Solution solution;
    cout << solution.firstUniqChar(code) << endl;
    return 0;
}