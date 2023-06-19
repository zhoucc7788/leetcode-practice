#include <iostream>
#include <memory>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>

//class Solution {
//public:
//    int minPathSum(std::vector<std::vector<int>>& grid) {
//
//        std::unordered_map<std::pair<int, int>, int> minCostGrid;
//        int shortLen = std::min(grid.size(), grid[0].size());
//        int column = grid[0].size();
//
//        for (int i = 0; i <= column; i++) {
//            
//        }
//
//
//
//    }
//};

//用一个矩阵去存已经算出最短路径的结果,减少重复计算的次数，终于可以通过了。但栈帧占用的空间还是太多
//class Solution {
//public:
//    std::vector<std::vector<int>> costGrid;
//    int minPathSum(std::vector<std::vector<int>>& grid) {
//
//        int minCostSum = 0;
//        int m = grid.size(), n = grid[0].size();
//        costGrid.resize(m, std::vector<int>(n, -1));  //注意这里的vector初始化的方式
//
//        minCostSum = minCost(grid, m-1 ,n-1);
//
//        costGrid.clear();
//        return minCostSum;
//    }
//
//    int minCost(std::vector<std::vector<int>>& grid, int m, int n) {
//        int minCostSum = 0, up = 0, left = 0;
//        
//        if (m == -1 || n == -1) return 0;
//
//        if (m == 0 && n == 0){ 
//            return grid[0][0]; }
//        else if (m != 0 && n != 0){
//            up = costGrid[m - 1][n] == -1 ? minCost(grid, m - 1, n) : costGrid[m - 1][n] + grid[m - 1][n];
//            left = costGrid[m][n - 1] == -1 ? minCost(grid, m, n - 1) : costGrid[m][n - 1] + grid[m][n - 1];
//            costGrid[m][n] = std::min(up, left);
//        }
//        else if (m == 0 && n > 0){
//            //left = costGrid[m][n - 1] == -1 ? minCost(grid, m, n - 1) : costGrid[m][n - 1];
//            left = minCost(grid, m, n - 1);
//            costGrid[m][n] = left;
//        }
//        else if (m > 0 && n == 0){
//            //up = costGrid[m - 1][n] == -1 ? minCost(grid, m - 1, n) : costGrid[m - 1][n];
//            up = minCost(grid, m - 1, n);
//            costGrid[m][n] = up;
//        }
//
//        minCostSum = costGrid[m][n] + grid[m][n];
//        
//
//        return minCostSum;    
//    }
//};


//这个比较快了，如果不调用函数可能更快
class Solution {
public:
    std::vector<std::vector<int>> costGrid;
    int minPathSum(std::vector<std::vector<int>>& grid) {

        int minCostSum = 0;
        int m = grid.size(), n = grid[0].size();
        costGrid.resize(m, std::vector<int>(n, 0));  //注意这里的vector初始化的方式

        minCostSum = minCost(grid, m, n);

        costGrid.clear();
        return minCostSum;
    }

    int minCost(std::vector<std::vector<int>>& grid, int m, int n) {
        int minCostSum = 0;

        for (int i = 1; i < m; i++) {
            costGrid[i][0] = costGrid[i - 1][0] + grid[i - 1][0];
        }
        for (int j = 1; j < n; j++) {
            costGrid[0][j] = costGrid[0][j - 1] + grid[0][j - 1];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                costGrid[i][j] = std::min(costGrid[i][j - 1] + grid[i][j - 1], costGrid[i - 1][j] + grid[i - 1][j]);
            }
        }

        minCostSum = costGrid[m-1][n-1] + grid[m-1][n-1];
        return minCostSum;
    }
};


int main() {
    Solution sol;
    int result1, result2, result3;

    std::vector<std::vector<int>> grid = { {1, 3, 1 }, { 1, 5, 1 }, { 4, 2, 1 }};
    result1 = sol.minPathSum(grid);
    std::cout << result1 << "\n";

    grid = { {1,2,3 }, {4, 5, 6 }};
    result2 = sol.minPathSum(grid);
    std::cout << result2 << "\n";

    grid = {{3, 8, 6, 0, 5, 9, 9, 6, 3, 4, 0, 5, 7, 3, 9, 3}, {0, 9, 2, 5, 5, 4, 9, 1, 4, 6, 9, 5, 6, 7, 3, 2}, {8, 2, 2, 3, 3, 3, 1, 6, 9, 1, 1, 6, 6, 2, 1, 9}, {1, 3, 6, 9, 9, 5, 0, 3, 4, 9, 1, 0, 9, 6, 2, 7}, {8, 6, 2, 2, 1, 3, 0, 0, 7, 2, 7, 5, 4, 8, 4, 8}, {4, 1, 9, 5, 8, 9, 9, 2, 0, 2, 5, 1, 8, 7, 0, 9}, {6, 2, 1, 7, 8, 1, 8, 5, 5, 7, 0, 2, 5, 7, 2, 1}, {8, 1, 7, 6, 2, 8, 1, 2, 2, 6, 4, 0, 5, 4, 1, 3}, {9, 2, 1, 7, 6, 1, 4, 3, 8, 6, 5, 5, 3, 9, 7, 3}, {0, 6, 0, 2, 4, 3, 7, 6, 1, 3, 8, 6, 9, 0, 0, 8}, {4, 3, 7, 2, 4, 3, 6, 4, 0, 3, 9, 5, 3, 6, 9, 3}, {2, 1, 8, 8, 4, 5, 6, 5, 8, 7, 3, 7, 7, 5, 8, 3}, {0, 7, 6, 6, 1, 2, 0, 3, 5, 0, 8, 0, 8, 7, 4, 3}, {0, 4, 3, 4, 9, 0, 1, 9, 7, 7, 8, 6, 4, 6, 9, 5}, {6, 5, 1, 9, 9, 2, 2, 7, 4, 2, 7, 2, 2, 3, 7, 2}, {7, 1, 9, 6, 1, 2, 7, 0, 9, 6, 6, 4, 4, 5, 1, 0}, {3, 4, 9, 2, 8, 3, 1, 2, 6, 9, 7, 0, 2, 4, 2, 0}, {5, 1, 8, 8, 4, 6, 8, 5, 2, 4, 1, 6, 2, 2, 9, 7}};
    result3 = sol.minPathSum(grid);
    std::cout << result3;

    std::cin.get();

    return 0;
}