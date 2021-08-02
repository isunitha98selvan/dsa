def buyStocks(prices):
    if len(prices)==1:
        return prices[0]
    profit = 0
    buyOn = float('inf')
    for i in range(len(prices)):
        if prices[i]<buyOn:
            buyOn = prices[i]
        elif prices[i] - buyOn > profit:
            profit = prices[i]- buyOn
    return profit
    
prices = [7,1,5,3,6,4]
print(buyStocks(prices))

prices = [7,6,4,3,1]
print(buyStocks(prices))