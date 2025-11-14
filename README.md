# Stock Profit Calculator

A C++ implementation demonstrating two algorithms for solving the maximum profit problem: exhaustive search and greedy approach.

## Problem Description

Given an array of stock prices where `prices[i]` is the price on day `i`, find the maximum profit you can achieve by buying on one day and selling on a later day.

## Algorithms Implemented

### 1. Exhaustive Search (O(n²))
- Checks all possible buy-sell combinations
- Time complexity: O(n²)
- Space complexity: O(1)

### 2. Greedy Algorithm (O(n))
- Tracks minimum price seen so far
- Calculates maximum profit in a single pass
- Time complexity: O(n)
- Space complexity: O(1)

## Requirements

- C++ compiler with C++20 support
- CMake (version 3.x recommended)

## Building the Project

**Note:** The current CMakeLists.txt has configuration issues. To build manually:

```bash
g++ -std=c++20 -o stock_profit RobertBennethum463HW1.cpp
```

## Usage

Run the compiled program and enter stock prices separated by spaces:

```bash
./stock_profit
```

Example:
```
Enter prices separated by spaces: 7 1 5 3 6 4
Exhaustive Search Max Profit: 5
Greedy Algorithm Max Profit:  5
```

## How It Works

Both algorithms solve the same problem but with different approaches:

- **Exhaustive Search**: Compares every possible pair of buy/sell days
- **Greedy Algorithm**: Maintains the minimum price seen so far and calculates the potential profit at each step

### Example

For prices `[7, 1, 5, 3, 6, 4]`:
- Buy at price 1 (day 2)
- Sell at price 6 (day 5)
- Maximum profit: 6 - 1 = 5

## Performance Comparison

The greedy algorithm is significantly faster for large inputs:
- **Exhaustive**: O(n²) - requires nested loops
- **Greedy**: O(n) - single pass through the data

Both algorithms produce the same correct result, but the greedy approach is more efficient.

## Author

Robert Bennethum IV  
PSU ID: 919300896

## License

Educational project - PSU 463 Homework Assignment
