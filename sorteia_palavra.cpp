#include <vector>
#include <string>
#include "lendo_arquivos.cpp"
#include <ctime>

std::string palavra_secreta; 

void sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}