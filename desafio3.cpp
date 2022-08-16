// Cálcular o fatorial de um nº inteiro positivo.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int numero, i, fatorial;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    cout << "O numero digitado foi: " << numero << endl;

    fatorial = 1; // vamos iniciar de uma valor de fatorial igual a 1.

    for (i = 1; i <= numero; i++)
    {

        fatorial *= i;
        // inicialmente o fatorial é 1.
        // i++ dá um incremento de 1 em 1 no valor de i, passando por: 2, 3, 4, 5 e numero.
        // Quando i = numero, então o algoritimo sairá do laço.
        // O valor é calculado e cumulado na variável fatorial.
    }

    cout << "O fatorial de " << numero << " eh = " << fatorial << endl;

    return 0;
}
