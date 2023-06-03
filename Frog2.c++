#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Recursive function to calculate minimum cost
int calculateMinCost(const vector<int>& heights, int i, int K, vector<int>& dp) {
    // Base case: If already calculated, return the stored value
    if (dp[i] != -1)
        return dp[i];

    // Base case: If already at the last stone (Stone N)
    if (i == heights.size() - 1)
        return 0;

    // Calculate the minimum cost by considering all possible jumps within the range of K
    int minCost = INT_MAX;
    for (int j = i + 1; j <= i + K && j < heights.size(); j++) {
        int cost = abs(heights[i] - heights[j]) + calculateMinCost(heights, j, K, dp);
        minCost = min(minCost, cost);
    }

    // Store the minimum cost in the DP array
    dp[i] = minCost;

    // Return the minimum cost
    return dp[i];
}

// Function to find the minimum possible total cost
int findMinCost(const vector<int>& heights, int K) {
    int N = heights.size();
    vector<int> dp(N, -1);  // Dynamic programming array to store calculated costs

    // Call the recursive function to calculate the minimum cost
    return calculateMinCost(heights, 0, K, dp);
}

int main() {
    int N, K;
    cout << "Enter the number of stones (N): ";
    cin >> N;

    cout << "Enter the maximum jump range (K): ";
    cin >> K;

    vector<int> heights(N);
    cout << "Enter the heights of the stones:\n";
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int minCost = findMinCost(heights, K);
    cout << "Minimum possible total cost incurred: " << minCost << endl;

    return 0;
}
