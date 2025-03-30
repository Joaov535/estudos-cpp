#include <iostream>

using namespace std;

void prtTxt(string txt = "");

int main()
{
    prtTxt("Para omitir a passagem de argumento basta definir um valor padrão na prototipação da função");
    prtTxt();
    return 0;
}

void prtTxt(string txt)
{
    std::cout << txt << std::endl;
}