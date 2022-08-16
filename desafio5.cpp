
#include <iostream>

using namespace std;

int main()
{ // Abertura da função principal.

    float idade, redimento;
    cout << "##### Programa de Moradia Pop ####\n"
         << endl;

    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite seu rendimento (R$/mes): ";
    cin >> redimento;
    cout << " \n";

    if (idade >= 21 && redimento >= 2000)
    { // Abertura do if

        cout << "Voce pode participar do programa de moradia popular!\n";

    } // Fechameto do if
    else
        cout << "Infelizmente voce nao pode participar do programa de moradia popular!\n";

    return 0;

} // Fechamento da função principal.
