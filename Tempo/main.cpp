// Tempo_1.cpp : Este arquivo cont�m a fun��o 'main'. A execu��o do programa come�a e termina ali.
//

#include "Tempo.h"


int main()
{
    Tempo T1(5, 3,2,75);
    T1.print();

    Tempo T2(12, 5, 2, 1);
    T2 = T2 + T1;
    T2.print();

    T2.~Tempo();
    T2.print();

    T2.addSeg();
    T2.print();

}
