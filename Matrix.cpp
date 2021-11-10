// main.cpp
#include "matrix.h"
using namespace std;

int main()
{
    Matrix Y(3, 2);
    Matrix X(4, 1);

    std::cout << "Y:: " << std::endl;
    Y.print();
    std::cout << "Numero de linhas de Y:: " << Y.getRows() << endl;
    std::cout << "Numero de colunas de Y:: " << Y.getCols() << endl;

    std::cout << "Z é transposta de Y:: " << std::endl;
    Matrix Z = Y.transpose();
    cout << "cheguei aqui" << endl;
    Z.print();
    std::cout << "Numero de linhas de Z:: " << Z.getRows() << endl;
    std::cout << "Numero de colunas de Z:: " << Z.getCols() << endl;

    std::cout << std::endl << "X:: " << std::endl;
    X.print();

    std::cout << "Numero de linhas de X:: " << X.getRows() << endl;
    std::cout << "Numero de colunas de X:: " << X.getCols() << endl;

    return 0;
}
