# 1. Programas utilizado na condução do concurso

## 1.1 Programa para embaralhar uma lista de nomes

O prorgama [`sorteio_nomes.cpp`](sorteio_nomes.cpp) **embaralha** uma lista de nomes criada no próprio [código fonte do programa](sorteio_nomes.cpp).

## 1.2 Programa para gerar um número inteiro em um intervalo

O programa [`sorteio_int.cpp`](sorteio_int.cpp) seleciona, de forma aleatória, um número inteiro do intervalo `[min,max]`. O número é escolhido de acordo com uma distribuição uniforme no intervalo, o que significa que cada um dos números tem a mesma **probabilidade** de ser selecionado pelo sorteio.

# 2. Funções utilizadas no programa

Ambos os programas foram desenvolvidos em C++ utilizando as funções presentes na [Biblioteca de Modelos Padrão (STL)](https://pt.wikipedia.org/wiki/Standard_Template_Library), cuja documentação está disponível  [**aqui**](https://en.cppreference.com/w/cpp/algorithm).

A ordenação inicial da lista de nomes foi feita com a função [`std::sort()`](https://en.cppreference.com/w/cpp/algorithm/sort).

O embaralhamento da lista de nomes foi feito com a função [`std::random_shuffle()`](https://en.cppreference.com/w/cpp/algorithm/random_shuffle).

A aleatoriedade do processo de embaralhamento foi feito com:
+ Gerador aletório de números inteiros com distribuição uniforme [`std::random_device`](https://en.cppreference.com/w/cpp/numeric/random/random_device).
+ Motor de geração aletória baseado no algoritmo [Mersenner Twister](https://en.wikipedia.org/wiki/Mersenne_twister): [`std::mt19937`](https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine).

A seleção aleatória de um valor inteiro no intervalo `[min,max]`, com distribuição uniforme foi feito com o gerador [`std::uniform_int_distribution`](https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution).

# 3. Para compilar os programas

Assumindo que existe um compilador C++ (suporte padrão `C++11`), para compilar o programa `sorteio_nomes.cpp` faça:

```c++
g++ -Wall -std=c++11 sorteios_nomes.cpp -o sorteio_nomes
```

Esse comando vai gerar um executável denominado de `sorteio_nomes`. Para executar o programa utilize o comando abaixo no terminal:

```c++
$ ./sorteios
```

Similarment, para compilar o prorgama `sorteio_int.cpp` faça:

```c++
g++ -Wall -std=c++11 sorteio_int.cpp -o sorteio_int
```

Esse comando vai gerar um executável denominado de `sorteio_int`. Para executar o programa utilize o comando abaixo no terminal:

```c++
$ ./sorteio_int
```

--------
&copy; DIMAp/UFRN 2021.
