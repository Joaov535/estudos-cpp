#include <iostream>
#include <queue>

int main()
{
    std::queue<int> senha;

    senha.push(1);
    senha.push(2);
    senha.push(3);
    senha.push(5);

    std::cout << "O tamanho da fila é: " << senha.size() << std::endl;
    std::cout << "o primeiro da fila é: " << senha.front() << std::endl;
    std::cout << "O ultimo da fila é: " << senha.back() << std::endl;

    while (!senha.empty())
    {
        std::cout << "próximo: " << senha.front() << std::endl;
        senha.pop();
    }

    std::cout << "Fila vazia" << std::endl;

    return 0;
}