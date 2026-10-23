//Find the best pair of Students 
//you are given an integer array scores and an integer target. Return the indices if the two elements whose sum equeals the target Exactly one valid answer exits and you cannot use thge same elements twice

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& scores, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < static_cast<int>(scores.size()); ++i) {
            int needed = target - scores[i];
            auto match = seen.find(needed);

            if (match != seen.end()) {
                return {match->second, i};
            }

            seen[scores[i]] = i;
        }

        return {};
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int& score : scores) {
        cin >> score;
    }

    int target;
    cin >> target;

    Solution solution;
    vector<int> result = solution.twoSum(scores, target);
    if (!result.empty()) {
        cout << result[0] << ' ' << result[1] << '\n';
    }

    return 0;
}
