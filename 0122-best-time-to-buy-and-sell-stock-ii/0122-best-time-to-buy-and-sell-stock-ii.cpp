class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int size = prices.size() - 1;
        for(int i =0;i<size;i++){
            if(prices[i] < prices[i+1]){
                maxprofit = maxprofit + prices[i+1] - prices[i];
            }
        }
        return maxprofit;
        
    }
};