#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxiProfit =0;
    int n = prices.size();
    int minPrices = INT_MAX;

    for(int i=0;i<n;i++){
        minPrices = min(minPrices, prices[i]);
        maxiProfit = max(maxiProfit, prices[i]-minPrices);
    }
    return maxiProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}