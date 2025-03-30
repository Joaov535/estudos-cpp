#include <iostream>
#include <string>

int run(int num);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "valor passado inválido" << std::endl;
        return 0;
    }

    int i = 0;
    while (*argv[1] != '\0')
    {

        if (*argv[1] < '0' || *argv[1] > '9')
        {
            std::cerr << "Caractere inválido. Forneça apenas números inteiros positivos" << std::endl;
            exit(1);
        }

        // Deslocamento na tabela ascii
        // Aqui estamos a operar com as posições desses caracteres na tabela ascii e desssa forma
        // chegamos na posição do equivalente numérico
        //(*str - '0') subtrai o valor ASCII do caractere '0'(que é 48) do valor ASCII do caractere atual.No nosso exemplo :
        // *str = 53(valor ASCII de '5')'0' = 48(valor ASCII de '0')(*str - '0') = 53 - 48 = 5
        // Ou seja, esta subtração converte o caractere '5' no valor numérico 5.
        // Importante multiplicar o valor por 10 para anexar o valor e não somar
        // Se num atualmente vale 23 e estamos processando o caractere '5', a operação seria :
        // num * 10 = 23 * 10 = 230(*str - '0') = 5 num * 10 + (*str - '0') = 230 + 5 = 235
        // Desta forma,
        // cada novo dígito é "anexado" ao final do número que estamos construindo.* argv[1] = *argv[1] - '0';

        i = i * 10 + (*argv[1] - '0');
        *argv[1]++;
    }

    std::cout << i << std::endl;
    return 0;
}

int run(int num)
{
    if (num == 0)
    {
        return 1;
    }

    return num * run(num - 1);
}