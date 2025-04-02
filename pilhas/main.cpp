#include <iostream>
#include <stack>

// using namespace std;

// LIFO
// Primeiro a entrar ultimo a sair

int main()
{
    // informa que é uma instancia da classe stack
    // e que será preenchida com instâncias de string
    // adicionando o namespace fica implicito
    std::stack <std::string> cartas;

    cartas.push("A copas");
    cartas.push("Q Espada");
    cartas.push("3 ouro");

    std::cout << "Tamanho da pilha: " << cartas.size() << std::endl;
    std::cout << "Carta do topo: " << cartas.top() << std::endl;

    std::cout << "Carta removida" << std::endl;
    cartas.pop();

    std::cout << "Carta do topo: " << cartas.top() << std::endl;

    if (cartas.empty())
    {
        std::cout << "Pilha vazia" << std::endl;
    } else {
        std::cout << "A pilha não está vazia" << std::endl;
    }
    
    // Esvaziando a pilha
    while(!cartas.empty()) {
        cartas.pop();
    }

    if (cartas.empty())
    {
        std::cout << "Pilha vazia" << std::endl;
    } else {
        std::cout << "A pilha não está vazia" << std::endl;
    }

    return 0;
}
