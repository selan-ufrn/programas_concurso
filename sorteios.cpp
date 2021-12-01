/*!
 * Programa para sortear uma ordem aleatória para uma lista de pessoas.
 *
 * @date December 1st, 2021
 * @author Selan R. dos Santos
 * @email <selan.santos@ufrn.br>
 *
 * Para compilar digite esse comando no terminal:
 *      g++ -Wall -std=c++11 sorteios.cpp -o sortreios
 */

#include <sstream>
#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iomanip>

/// Imprime a lista de candidatos com numeração associada a ordem da listagem.
std::string to_string(const std::vector<std::string> &candidatos){
    std::ostringstream oss;
    int id{0}; // Numeração sequencial de cada candidato.
    for(const auto& nome : candidatos)
        oss << std::setw(2) << ++id << ". " << nome << "\n";
    return oss.str();
}

/// Programa principal
int main () {
    // ================================================================================
    // [1] CRIAR A LISTA DE CANDIDATOS
    // --------------------------------------------------------------------------------
    std::vector<std::string> candidatos{
        "ANDERSON MAX CIRILO DA SILVA",
        "DANIEL NOBRE PINHEIRO",
        "ERICA ESTEVES C UNHA DE MIRANDA",
        "GABRIEL ALVES VASILJEVIC MENDES",
        "JOSÉ KLEITON EWERTON DA COSTA MARTINS",
        "LENO RODRIGUES MARTINS",
        "MAYRTON DIAS DE QUEIROZ",
        "PETRÚCIO RIC ARDO TAVARES DE MEDEIROS",
        "ROBSON DA SILVA ANDRADE",
        "SIDEMAR FIDELES CEZARIO",
        "THIAGO SOARES MARQUES",
    };

    // ================================================================================
    // [2] IMPRIMIR OS CANDIDATOS EM ORDEM ALFABÉTICA.
    // --------------------------------------------------------------------------------

    // Referência para o algoritmo: https://en.cppreference.com/w/cpp/algorithm/sort
    // Ordenar a lista.
    std::sort(candidatos.begin(), candidatos.end());

    // Listar os candidatos em ordem alfabética.
    std::cout << ">>> Lista inicial dos candidatos: \n";
    std::cout << to_string(candidatos);

    // ================================================================================
    // [3] EMBARALHAR OS CANDIDATOS.
    // --------------------------------------------------------------------------------

    // Fonte: https://en.cppreference.com/w/cpp/numeric/random/random_device
    // Gerador aleatório uniforme de números inteiros.
    std::random_device rd;
    // mt19937 is a random number engine based on Mersenne Twister algorithm.
    std::mt19937 g(rd());

    // Essa função embaralha a ordem dos candidatos.
    std::cout << "\n>>> Sorteio em progresso, por favor aguarde..\n\n";
    std::shuffle(candidatos.begin(), candidatos.end(), g);

    // ================================================================================
    // [2] IMPRIMIR OS CANDIDATOS EM ORDEM ALFABÉTICA.
    // --------------------------------------------------------------------------------
    std::cout << ">>> Lista dos candidatos DEPOIS do sorteio:\n";
    std::cout << to_string(candidatos) << "\n\n";

    return 0;
}
