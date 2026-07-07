int maxProfit(int* prices, int pricesSize) 
{
    int profit = 0, min = prices[0];
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) min = prices[i];
        if (prices[i] - min > profit) profit = prices[i] - min;
    }
    return profit;
}