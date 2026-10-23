//The best Buy-and-Sell Day
//you are given an arrray prices, where prices[i] is the price on day i, find the maximum profit posssible by buying in one day and selling on a later day. if no profit is possible, return 0.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int lowestPrice = prices[0];
        int maxProfit = 0;

        for (vector<int>::size_type i = 1; i < prices.size(); ++i) {
            maxProfit = max(maxProfit, prices[i] - lowestPrice);
            lowestPrice = min(lowestPrice, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int& price : prices) {
        cin >> price;
    }

    Solution solution;
    cout << solution.maxProfit(prices) << '\n';
    return 0;
}
