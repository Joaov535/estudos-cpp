#include <iostream>

using namespace std;


// argc -> quantidade de parâmetros passados
// argv -> vetor com o ponteiro para os parâmetros passados
/*
int main(int argc, char *argv[]) {

    cout << argv[1] << "\n" << argc << "\n";

    return 0;

}
*/

// listando todos os parâmetros passados

int main(int argc, char *argv[]) {

    for(int i = 0; i < argc; i++) {
        std::cout << *argv[i] << std::endl;
    }
}