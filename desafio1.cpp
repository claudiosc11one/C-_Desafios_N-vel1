// Obter a fução do 2º grau:  f(x)= x^2 - 3x + 5.

#include <iostream>
//#include <math.h> eu preferi não usar esta biblioteca neste momento.

using namespace std;

int main()
{
    float x;
    cout << "Digita o valor de x para calcular o valor da funcao: " << endl;
    cin >> x;

    float funcao = (x * x) - (3 * x) + 5;
    cout << "O valor da funcao para " << x << " = " << funcao << endl;

    return 0;
}
