#include <iostream>
#include <vector>

void addColumn(std::vector<std::vector<int>>& matrix, int colIndex, const std::vector<int>& newCol) {
    int rows = matrix.size();
    for (int i = 0; i < rows; ++i) {
        matrix[i].insert(matrix[i].begin() + colIndex, newCol[i]);
    }
}

int main() {
    int M = 3, N = 4;
    std::vector<std::vector<int>> matrix(M, std::vector<int>(N));

    std::cout << "Enter matrix elements (3x4) \n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<int> newCol = { 1, 2, 3 };
    int colIndex = 2;
    addColumn(matrix, colIndex, newCol);

    std::cout << "adding column \n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N + 1; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
