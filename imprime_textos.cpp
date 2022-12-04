#include <iostream>
#include <string>
#include <map>
#include <vector>

std:: vector<char> chutes_errados;
std:: string palavra_secreta;
std:: map<char, bool> chutou;


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
    std::cout << "Digite a nova palavra, usando letras maiúsculas." << endl;
    string nova_palavra;
    std::cin >> nova_palavra;

    vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}