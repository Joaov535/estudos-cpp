#include <iostream>

using namespace std;
// Enums servem para criar tipos dentro da linguagem
// Cada tipo é representado por um numero e o próximo item é acrescido uma unidade do anterior
// O valor de um enum é sempre um inteiro

int main()
{
    enum chinelos
    {
        Havaianas,
        Ipanema,
        Rider = 20,
        Cartago
    };
    // Devemos declarar uma variável do tipo do enum
    // Enums não são como objetos, servem para tipar variáveis

    chinelos a, b, c, d;

    a = Havaianas;
    b = Ipanema;
    c = Rider;
    d = Cartago;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    // Como observamos na saída o valor padrão do enum é o próximo acrescido uma unidade do anterior

    return 0;
}