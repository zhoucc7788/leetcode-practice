class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        std::shared_ptr<std::vector<std::vector<int>>> pathSumGrid = std::make_shared<std::vector<std::vector<int>>>(); 
        int n = matrix.size(), result;
        //这里不能直接在尖括号里初始化，尖括号里唯一能填写的只有类型，而不是一个初始化以后的实例
        pathSumGrid->resize(n+1, std::vector<int>(n, 0));
        //resize里才可以用实例来初始化矩阵

        for(int line = 1; line <= n; line++){
            
            for(int column = 0; column < n; column++){

                if (column == 0){
                    pathSumGrid->at(line)[column] = (n > 1 ? (std::min(pathSumGrid->at(line - 1)[column] + matrix[line - 1][column], \
                    pathSumGrid->at(line - 1)[column + 1] + matrix[line - 1][column + 1])) : (pathSumGrid->at(line - 1)[column] + matrix[line - 1][column]));
                } else if (column == n-1) {
                    pathSumGrid->at(line)[column] = std::min(pathSumGrid->at(line - 1)[column] + matrix[line - 1][column], \
                        pathSumGrid->at(line - 1)[column - 1] + matrix[line - 1][column - 1]);
                } else {
                    pathSumGrid->at(line)[column] = std::min(std::min\
                        (pathSumGrid->at(line - 1)[column] + matrix[line - 1][column], \
                        pathSumGrid->at(line - 1)[column + 1] + matrix[line - 1][column + 1]), \
                        pathSumGrid->at(line - 1)[column - 1] + matrix[line - 1][column - 1]);
                }
                
            }
        }
            
            result = pathSumGrid->at(n)[0];
            
            for (int costSum : pathSumGrid->at(n)){
                if (costSum < result) result = costSum;
            }
            return result;
    }
};
