void setZeroes(int ** matrix, int matrixSize, int * colSize) {
    int matrixColSize = colSize[0];
    int firstRowZero = 0, firstColZero = 0;


    for (int i = 0; i < matrixColSize; i++) {
        if (matrix[0][i] == 0) {
            firstRowZero = 1;
            break;
        }
    }


    for (int i = 0; i < matrixSize; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = 1;
            break;
        }
    }

ed
    for (int i = 1; i < matrixSize; i++) {
        for (int j = 1; j < matrixColSize; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < matrixSize; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < matrixColSize; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 1; j < matrixColSize; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < matrixSize; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    if (firstRowZero) {
        for (int i = 0; i < matrixColSize; i++) {
            matrix[0][i] = 0;
        }
    }

    if (firstColZero) {
        for (int i = 0; i < matrixSize; i++) {
            matrix[i][0] = 0;
        }
    }
}
