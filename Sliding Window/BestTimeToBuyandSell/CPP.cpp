// Best time to buy or sell a stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
--------------------------------------------------------------------------------------------------------
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int profit = 0;
        int maxP = 0;

        while(r < prices.size()){
            // if there is any profit to be made
            if(prices[l] < prices[r]){
                profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            }
            // no profit for the day?
            else{
                l = r;
            }
            r += 1;
        }
        return maxP;
    }
};
