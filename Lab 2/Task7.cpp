//#include <iostream>
//#include <fstream>
//#include <vector>
//
//using namespace std;
//
//struct Matrix {
//    vector<vector<int>> data;
//};
//
//vector<Matrix> readMatrices(const string& filePath, int& n) {
//    ifstream file(filePath);
//    file >> n;
//
//    vector<Matrix> matrices;
//    int k;
//    file >> k;
//
//    for (int i = 0; i < k; ++i) {
//        Matrix matrix;
//        matrix.data.resize(n, vector<int>(n));
//
//        for (int row = 0; row < n; ++row) {
//            for (int col = 0; col < n; ++col) {
//                file >> matrix.data[row][col];
//            }
//        }
//
//        matrices.push_back(matrix);
//    }
//
//    file.close();
//    return matrices;
//}
//
//int calculateDiagonalSum(const Matrix& matrix) {
//    int sum = 0;
//    int n = matrix.data.size();
//
//    for (int i = 0; i < n; ++i) {
//        sum += matrix.data[i][i];
//        if (i != n / 2) {
//            sum += matrix.data[i][n - i - 1];
//        }
//    }
//
//    return sum;
//}
//
//void transposeMatrix(Matrix& matrix) {
//    int n = matrix.data.size();
//    vector<vector<int>> transposedData(n, vector<int>(n));
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            transposedData[j][i] = matrix.data[i][j];
//        }
//    }
//
//    matrix.data = transposedData;
//}
//
//void writeMatrices(const string& filePath, const vector<Matrix>& matrices) {
//    ofstream file(filePath, ios::app); 
//
//    for (const auto& matrix : matrices) {
//        for (const auto& row : matrix.data) {
//            for (int element : row) {
//                file << element << " ";
//            }
//            file << endl;
//        }
//        file << endl;
//    }
//
//    file.close();
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int n;
//    vector<Matrix> matrices = readMatrices("T7_1.txt", n);
//
//    if (matrices.empty()) {
//        return 1;
//    }
//
//    vector<Matrix> transposedMatrices;
//
//    for (const auto& matrix : matrices) {
//        int diagonalSum = calculateDiagonalSum(matrix);
//
//        if (diagonalSum % 2 != 0) {
//            Matrix transposedMatrix = matrix;
//            transposeMatrix(transposedMatrix);
//            transposedMatrices.push_back(transposedMatrix);
//        }
//    }
//
//    cout << "Содержимое первого файла:" << endl;
//    for (const auto& matrix : matrices) {
//        for (const auto& row : matrix.data) {
//            for (int element : row) {
//                cout << element << " ";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//
//    writeMatrices("T7_2.txt", transposedMatrices);
//
//    cout << "Содержимое второго файла:" << endl;
//    for (const auto& matrix : transposedMatrices) {
//        for (const auto& row : matrix.data) {
//            for (int element : row) {
//                cout << element << " ";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
