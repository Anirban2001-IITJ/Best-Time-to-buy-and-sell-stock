#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int max_profit = 0;

    for (int price : prices) {
        if (price < min_price) {
            min_price = price; 
        } else if (price - min_price > max_profit) {
            max_profit = price - min_price; 
        }
    }
    return max_profit;
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}

