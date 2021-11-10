#pragma once
// matrix.h (header file)

#include <iostream>

class Matrix {
private:

    double** m; // m é um array 2D a ser implementado como um pointer de pointers
    int nRows;  // numero de linhas
    int nCols;  //  numero de colunas

public:

    // Construtores
    Matrix();
    Matrix(int rows, int cols, double elem = 0);
    // destrutor
    ~Matrix();

    void aloca_matriz();

    // basic getters
    int getRows() const;
    int getCols() const;

    // other methods
    Matrix transpose();
    void print() const;


};