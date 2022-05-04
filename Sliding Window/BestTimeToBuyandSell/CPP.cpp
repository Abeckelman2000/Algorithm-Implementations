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
