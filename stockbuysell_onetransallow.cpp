LinkedIn : www.linkedin.com/in/souvik-chowdhury444411

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        if(prices.size()<2)return 0;
        int min_price_so_far = prices[0];
        int max_profit = 0;
        for( int i = 1;i<prices.size();i++){
            if(prices[i]<min_price_so_far){
                min_price_so_far = prices[i];
            }else{
                int profit = prices[i] - min_price_so_far;
                max_profit=max(max_profit,profit);
            }
        }
        return max_profit;
    }
};
