//Rotate a matrix 90 degree clockwise
 
#include <iostream>

using namespace std;

#define N 3 


void rotateMatrix(int matrix[N][N]) {
    
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(matrix[i][j], matrix[i][N - j - 1]);
        }
    }
}


void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << "\n";
        }
        cout << endl;
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "\nMatrix after 90-degree rotation:\n";
    printMatrix(matrix);

    return 0;
}
