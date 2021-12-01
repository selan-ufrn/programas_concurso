# Programa para embaralhar uma lista de nomes

Esse programa **embaralha** uma lista de nomes criada no próprio [código fonte do programa](sorteios.cpp).

Este programa foi desenvolvido em C++ utilizando as funções presentes na [Biblioteca de Modelos Padrão (STL)](https://pt.wikipedia.org/wiki/Standard_Template_Library), cuja documentação está disponível  [**aqui**](https://en.cppreference.com/w/cpp/algorithm).

# Funções utilizadas no programa

A ordenação inicial da lista de nomes foi feita com a função [`std::sort()`](https://en.cppreference.com/w/cpp/algorithm/sort).

O embaralhamento da lista de nomes foi feito com a função [`std::random_shuffle()`](https://en.cppreference.com/w/cpp/algorithm/random_shuffle).

A aleatoriedade do processo de embaralhamento foi feito com:
+ Gerador aletório de números inteiros com distribuição uniforme [`std::random_device`](https://en.cppreference.com/w/cpp/numeric/random/random_device).
+ Motor de geração aletória baseado no algoritmo [Mersenner Twister](https://en.wikipedia.org/wiki/Mersenne_twister): [`std::mt19937`](https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine).

# Para compilar

Use o seguinte comando em um terminal com compilador C++, padrão `C++11`:

```c++
g++ -Wall -std=c++11 sorteios.cpp -o sorteios
```

Esse comando vai gerar um executável denominado de `sorteios`. Para executar o programa utilize o comando abaixo no terminal:

```c++
$ ./sorteios
```

--------
&copy; DIMAp/UFRN 2021.
