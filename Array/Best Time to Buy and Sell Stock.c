int maxProfit(int* prices, int pricesSize) {
    int max = 0;
    int minPrice = prices[0];

    for(int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > max) {
            max = prices[i] - minPrice;
        }
    }

    return max;
}
