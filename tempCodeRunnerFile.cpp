#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int minCostConnectPoints(vector<vector<int>>& points) {
    int n = points.size();
    vector<bool> visited(n, false); // To track visited nodes
    vector<int> minCost(n, INT_MAX); // Minimum cost to connect each point
    minCost[0] = 0; // Start from the first point
    int totalCost = 0;

    for (int i = 0; i < n; ++i) {
        int currPoint = -1;

        // Find the unvisited point with the smallest cost
        for (int j = 0; j < n; ++j) {
            if (!visited[j] && (currPoint == -1 || minCost[j] < minCost[currPoint])) {
                currPoint = j;
            }
        }

        // Mark the current point as visited and add its cost
        visited[currPoint] = true;
        totalCost += minCost[currPoint];

        // Update the cost to connect other points
        for (int j = 0; j < n; ++j) {
            if (!visited[j]) {
                int manhattanDist = abs(points[currPoint][0] - points[j][0]) + abs(points[currPoint][1] - points[j][1]);
                minCost[j] = min(minCost[j], manhattanDist);
            }
        }
    }

    return totalCost;
}

int main() {
    vector<vector<int>> points = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};
    cout << "Minimum Cost to Connect Points: " << minCostConnectPoints(points) << endl;
    return 0;
}