#include <iostream>
using namespace std;

/**
 * This function will multiply two matrices
 */
void mulMatrix(int mat1[][3], int mat2[][3], int ans[][3], int n1, int m1,
               int n2, int m2) {
    if (m1 != n2) {
        cout << "Cannot Multiply" << endl;
        return;
    } else {
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m2; j++) {
                for (int k = 0; k < m1; k++) {
                    ans[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int mat1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3] = {0};
    
    // Function call
    mulMatrix(mat1, mat2, ans, 3, 3, 3, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
