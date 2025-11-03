//Robert Bennethum IV
//PSU ID: 919300896

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// Exhaustive Search O(n^2)
int maxProfitExhaustive(std::vector<int>& prices) {
    int max_profit = 0;
    int n = prices.size();
    for (int i = 0; i < n; ++i) { // O(n)
        for (int j = i + 1; j < n; ++j) { // O(n)
            int profit = prices[j] - prices[i];
            if (profit > max_profit)
                max_profit = profit;
        }
    }
    return max_profit;
}

// Greedy Algorithm O(n); Min price tracking and max profit calculation
int maxProfitGreedy(std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }
    int min_price = prices[0];
    int max_profit = 0;
    for (int price : prices) {
        if (price < min_price)
            min_price = price;
        else if (price - min_price > max_profit)
            max_profit = price - min_price;
    }
    return max_profit;
}

//Input
int main() {
    std::cout << "Enter prices separated by spaces: ";
    std::string line;
    std::getline(std::cin, line);
    std::vector<int> prices;
    std::stringstream ss(line);
    int price;
    while (ss >> price)
        prices.push_back(price);

    if (prices.empty()) {
        std::cout << "Error no input" << std::endl;
        return 0;
    }
    std::cout << "Exhaustive Search Max Profit: " << maxProfitExhaustive(prices) << std::endl;
    std::cout << "Greedy Algorithm Max Profit:  " << maxProfitGreedy(prices) << std::endl;

    return 0;
}

//Greedy is correct and faster for large inputs because it only requires a single pass through the data (O(n)),
//while the exhaustive search requires nested loops (O(n^2)).
//Both algorithms yield the same result for the maximum profit problem,
//but the greedy approach is more efficient in terms of time complexity.