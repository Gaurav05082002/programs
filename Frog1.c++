#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Recursive function to calculate minimum cost
int calculateMinCost(const vector<int>& heights, int i, vector<int>& dp) {
    // Base case: If already calculated, return the stored value
    if (dp[i] != -1)
        return dp[i];

    // Base case: If already at the last stone (Stone N)
    if (i == heights.size() - 1)
        return 0;

    // Recursive case: Calculate the minimum cost from current stone (i)
    // by either jumping to the next stone (i+1) or the stone after that (i+2)
    int cost1 = abs(heights[i] - heights[i + 1]) + calculateMinCost(heights, i + 1, dp);
    int cost2 = abs(heights[i] - heights[i + 2]) + calculateMinCost(heights, i + 2, dp);

    // Store the minimum cost in the DP array
    dp[i] = min(cost1, cost2);

    // Return the minimum cost
    return dp[i];
}

// Function to find the minimum possible total cost
int findMinCost(const vector<int>& heights) {
    int N = heights.size();
    vector<int> dp(N, -1);  // Dynamic programming array to store calculated costs

    // Call the recursive function to calculate the minimum cost
    return calculateMinCost(heights, 0, dp);
}

int main() {
    int N;
    cout << "Enter the number of stones (N): ";
    cin >> N;

    vector<int> heights(N);
    cout << "Enter the heights of the stones:\n";
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int minCost = findMinCost(heights);
    cout << "Minimum possible total cost incurred: " << minCost << endl;

    return 0;
}
