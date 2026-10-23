//Find the First Repeated Roll Number
//You are given an integer array rollNumbers. Return true if any roll number appears at least twice; otherwise, return false;

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& rollNumbers) {
        unordered_set<int> seen;

        for (int rollNumber : rollNumbers) {
            if (!seen.insert(rollNumber).second) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> rollNumbers(n);
    for (int& rollNumber : rollNumbers) {
        cin >> rollNumber;
    }

    Solution solution;
    cout << (solution.containsDuplicate(rollNumbers) ? "true" : "false") << endl;
    return 0;
}
