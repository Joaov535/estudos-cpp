#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> items;
    int tam;
    list<int>::iterator iterator, iterator2;

    tam = 10;
    for (int i = 0; i < tam; i++)
    {
        // tem tambem o push front
        items.push_back(i);
    }

    iterator = items.begin();
    advance(iterator, 3);

    items.insert(iterator, 22);

    while (!items.empty())
    {
        cout << items.front() << endl;
        items.pop_front();
    }

    for (int i = 0; i < tam; i++)
    {
        if (i % 2 == 0)
        {
            items.push_back(i);
        }
        else
        {
            items.push_front(i);
        }
    }

    cout << "lista embaralhada: ";

    while (!items.empty())
    {
        cout << items.front() << endl;
        items.pop_front();
    }

    for (int i = 0; i < tam; i++)
    {
        if (i % 2 == 0)
        {
            items.push_back(i);
        }
        else
        {
            items.push_front(i);
        }
    }

    cout << "lista revertida: ";
    items.reverse();

    while (!items.empty())
    {
        cout << items.front() << endl;
        items.pop_front();
    }

    for (int i = 0; i < tam; i++)
    {
        if (i % 2 == 0)
        {
            items.push_back(i);
        }
        else
        {
            items.push_front(i);
        }
    }

    cout << "lista organizada: ";
    items.sort();

    // Removendo item da lista

    iterator2 = items.begin();
    advance(iterator2, 2); // Remove 3° item da lista
    items.erase(iterator2);

    while (!items.empty())
    {
        cout << items.front() << endl;
        items.pop_front();
    }

    return 0;
}

/*
    Essa é uma lista duplamente encadeada.
    Cada elemento conhece o próximo e o anterior
    para acessar elementos da lista precisamos iterar sobre ela
    como foi feito acima
    definindo um ponteiro e indo ao próximo nó para saber que é o próximo
    até chegar na posição desejada

    Quando fazemos um insert atualizamos as referências do no anterior e do próximo, fazendo o
    nó na posição 2 apontar para o novo nó como seu sucessor, o novo nó apontar para o 2 como seu antecessor
    e apontar para o 3 como seu sucessor.
    E o 3 apontar para o novo nó como sendo seu antecessor
*/