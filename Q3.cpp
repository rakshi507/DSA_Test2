//Find the Second-Highest Score

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int secondHighest(vector<int>& scores) {
        int highest = 0;
        int secondHighestScore = 0;
        bool hasHighest = false;
        bool hasSecondHighest = false;

        for (int score : scores) {
            if (!hasHighest || score > highest) {
                if (hasHighest) {
                    secondHighestScore = highest;
                    hasSecondHighest = true;
                }
                highest = score;
                hasHighest = true;
            } else if (score < highest &&
                       (!hasSecondHighest || score > secondHighestScore)) {
                secondHighestScore = score;
                hasSecondHighest = true;
            }
        }

        return hasSecondHighest ? secondHighestScore : -1;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int& score : scores) {
        cin >> score;
    }

    Solution solution;
    cout << solution.secondHighest(scores) << '\n';
    return 0;
}