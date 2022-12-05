#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "lendo_arquivos.hpp"
#include "salva_arquivo.hpp"

extern std:: vector<char> chutes_errados;
extern std:: string palavra_secreta;
extern std:: map<char, bool> chutou;


void imprime_cabecalho(){
    std::cout << "*********************" << std::endl;
    std::cout << "*** Jogo da Forca ***" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
}

void imprime_palavra(){
    for(char letra : palavra_secreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }
        else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

void imprime_erros(){
    std::cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}

void adiciona_palavra(){
    std::cout << "Digite a nova palavra, usando letras maiúsculas." << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}