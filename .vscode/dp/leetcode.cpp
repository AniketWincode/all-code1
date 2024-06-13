#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>

using namespace std;

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
        dp[0][0] = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

                for (const auto& dir : directions) {
                    int ni = i + dir[0];
                    int nj = j + dir[1];

                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        int effort = max(dp[i][j], abs(heights[i][j] - heights[ni][nj]));

                        if (effort < dp[ni][nj]) {
                            dp[ni][nj] = effort;
                        }
                    }
                }
            }
        }

        return dp[rows - 1][cols - 1];
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<vector<int>> heights = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};
    int result = solution.minimumEffortPath(heights);

    cout << "Minimum effort path: " << result << endl;

    return 0;
}
