// matrix.cpp
#include "matrix.h"
using namespace std;

// contrutor default - cria uma matriz vazia com nRows = nCols = 0  
Matrix::Matrix() {
    nCols = 0;
    nRows = 0;
    m = new double* [nRows];
}


// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e 
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem) {
    nRows = rows;
    nCols = cols;
    aloca_matriz();
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            m[i][j] = elem;
        }
    }
}


// destrutor
//Matrix::~Matrix() {
//    for (int i = 0; i < this->nRows; i++)
//        delete[] this->m[i];
//    delete[] this->m;
//    this->m = NULL; 
//    this->nCols = 0;
//    this->nRows = 0;
//}

void Matrix::aloca_matriz() {
    m = new double* [nRows];
    for (int i = 0; i < nRows; i++)
        m[i] = new double[nCols];
}


// obtem o numero de linhas
int Matrix::getRows() const {
    return nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {
    return nCols;
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {
    Matrix aux(nCols, nRows, 0);
    for (int i = 0; i < aux.nRows; i++) {
        for (int j = 0; j < aux.nCols; j++) {
            aux.m[i][j] = this->m[j][i];
        }
    }
    this->nCols = aux.nCols;
    this->nRows = aux.nRows;
    this->aloca_matriz();
    for (int i = 0; i < aux.nRows; i++) {
        for (int j = 0; j < aux.nCols; j++) {
            this->m[i][j] = aux.m[i][j];
        }
    }


    return *this;
}

// imprime o conteudo da matriz
void Matrix::print() const {
    cout << m[0][0] << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << this->m[i][j] << " ";
        }
        cout << endl;
    }
}
