#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A = 210;
    int B = 210;
    int C = 250;
    int AB = 60;
    int AC = 70;
    int BC = 50;
    int ABC = 20;
    int nenhum = 100;

    int totalEntrevistados = A + B + C - AB - AC - BC + ABC + nenhum;

    printf("Número total de pessoas entrevistadas: %d\n", totalEntrevistados);

    return 0;
}


