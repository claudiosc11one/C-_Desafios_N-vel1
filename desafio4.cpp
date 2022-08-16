
#include <iostream>

using namespace std;

int main()
{ // aberturada funcao princial.

    float base, exp, i, resPotencia;
    while (1)
    { // Abrindo while (1)
        cout << "#### Calculo da potencia ####\n ";
        cout << "Digite um numero base: ";
        cin >> base;

        cout << "Digite um numero expoente: ";
        cin >> exp;

        i = 1; // i é o contador.
        resPotencia = 1;
        while (i <= exp)
        { // abertura do while.

            resPotencia = resPotencia * base;
            i++; // i=i+1 ou i+=1;

        } // fechamento do while.

        cout << "Resultado de " << base << " elevado a " << exp << " eh: " << resPotencia << endl
             << endl;

        cout << "Voce deseja calcular outra potencia? \n"
             << endl;
        cout << "Se sim digite 1  ou  Se nao digite 0: \n"
             << endl;

        int parar;
        cin >> parar;

        if (parar == 0)
        { // abrindo if

            cout << "Obrigado pela sua atecao!" << endl;
            break;

        } // fechando if
    }     // fechando while (1)

    return 0;

} // fechamento da funcao principal.
