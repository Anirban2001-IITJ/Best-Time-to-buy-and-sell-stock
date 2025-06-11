#include<stdio.h>
int maxProfit (int * prices, int priceSize) {
	int profit = 0;
	int i;
	int p = prices [0];
	for(i=1;i<priceSize;i++) {
		if((prices [i] - p) > profit)
		profit = prices [i] - p;
		p = prices [i] < p ? prices [i] : p;
	}
	return profit;
}
int main () {
	int prices[] = {7,1,5,3,6,4};
	int n = sizeof(prices) / sizeof(prices[0]);
	int result = maxProfit(prices,n);
	printf("Maximum profit: %d\n", result);
	return 0;
}
