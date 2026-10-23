//A college is organizing a programming  competition. Each participant receives a unique seat number from 0 to n. however, one seat number is missing frim the registration list.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& seatNumbers) {
        int missing = static_cast<int>(seatNumbers.size());

        for (vector<int>::size_type i = 0; i < seatNumbers.size(); ++i) {
            missing ^= static_cast<int>(i) ^ seatNumbers[i];
        }

        return missing;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> seatNumbers(n);
    for (int& seatNumber : seatNumbers) {
        cin >> seatNumber;
    }

    Solution solution;
    cout << solution.missingNumber(seatNumbers) << '\n';
    return 0;
}
