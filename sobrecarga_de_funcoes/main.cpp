#include <iostream>

using namespace std;

// Prototipação (Carrega as funções para ser possível usar antes da declaração)
void soma();
void soma(float a, float b);

int main() 
{
    std::cout << "Sobrecarga de função nada mais é que a possíbilidade de ter 2 funções com o mesmo nome." << std::endl;
    std::cout << "Para isso as funções devem ter argumentos de entrada diferentes." << std::endl;

    soma();
    soma(3.456, 8.6);

    return 0;
}

void soma() 
{
    float a, b;

    a = 3;
    b = 5;

    std::cout << a + b << std::endl;
}


void soma(float a, float b)
{
    std::cout << a + b << std::endl;
}