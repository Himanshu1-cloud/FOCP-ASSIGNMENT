// print a spiral pattern of  number for a given size 4X4 matrix

#include <iostream>

using namespace std;

void Spiral(int size) {
    int matrix[size][size];
    int value = 1;
    int top = 0, bottom = size - 1, left = 0, right = size - 1;

    while (value <= size * size) {
        // left to right
        for (int i = left; i <= right; i++)
            matrix[top][i] = value++;
        top++;

        // top to bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = value++;
        right--;

        // right to left
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = value++;
        bottom--;

        //bottom to top
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = value++;
        left++;
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\n";
        }
        cout << endl;
    }
}

int main() {
    int size = 4; 
    cout << "Spiral Matrix of size " << size << "x" << size << "\n";
    Spiral(size);
    return 0;
}
