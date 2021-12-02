/*!
 * Programa para sortear um número dentro e uma baixa pré-definida.
 *
 * @date December 2nd, 2021
 * @author Selan R. dos Santos
 * @file sorteio_int.cpp
 * @email <selan.santos@ufrn.br>
 *
 * Para compilar digite esse comando no terminal:
 *      g++ -Wall -std=c++11 sorteio_num.cpp -o sortreio_num
 */

#include <iostream>
#include <random>

short constexpr LOW  = 1; //!< Valor mínimo do intervalo de sorteio (inclusive).
short constexpr HIGH = 6; //!< Valor máximo do intervalo de sorteio (inclusive).

/// Programa principal
int main () {
    // Fonte: https://en.cppreference.com/w/cpp/numeric/random/random_device
    // Gerador aleatório uniforme de números inteiros.
    std::random_device rd;
    // mt19937 is a random number engine based on Mersenne Twister algorithm.
    std::mt19937 gen(rd());
    // Fonte: https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    // Gerador aleatório de núme inteiro em um intervalo, com distribuição uniforme.
   std::uniform_int_distribution<> distrib(LOW, HIGH);

   // Usa `distrib` para transformar o inteiro sem sinal gerado por 'gen' em um inteor na faixa [1,6].
   std::cout << ">>> Tema sorteado: " << distrib(gen) << '\n';

    return 0;
}
