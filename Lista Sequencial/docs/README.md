# Lista Sequencial (array)

#### A Lista Sequencial é uma estrutura de dados que organiza os elementos de forma contígua na memória. Nesta implementação, a lista sequencial é representada por um vetor dinâmico. [Clique aqui](../array.cpp) para ver a implementação da Lista Sequencial.

# Funcionalidades
A implementação da lista sequencial possui as seguintes funcionalidades:

1. `push_front(valor)`: Permite adicionar um elemento no início da lista.

2. `push_back(valor)`: Permite adicionar um elemento no final da lista.

3. `insert(index, valor)`: Permite adicionar um elemento em uma posição determinada da lista.

4. `pop_front()`: Remove o primeiro elemento da lista.

5. `pop_back()`: Remove o último elemento da lista.

6. `removeAt(index)`: Remove um elemento em uma posição determinada da lista.

7. `sizeOf()`: Retorna o tamanho atual da lista.

8. `find(chave)`: Procura por um elemento na lista e retorna o seu índice.

9. `Delete()`: Remove todos os elementos da lista.

10. `sort()`: Ordena os elementos da lista em ordem crescente.

11. `reverse()`: Ordena os elementos da lista em ordem decrescente.

# Utilização
A lista sequencial pode ser utilizada da seguinte forma:
### 1. Inicialize a lista com uma capacidade máxima:
```cpp
Lista<int> lista;
int max;
std::cout << "Qual é a capacidade máxima da sua lista?" << std::endl;
std::cin >> max;
lista.inicializaVetor(max);
```
### 2. Insira elementos na lista:
```cpp
int n;
std::cout << "Quantos elementos deseja inserir?" << std::endl;
std::cin >> n;

for (int i = 0; i < n; i++) {
  int elemento = 0;
  std::cout << "Adicione o " << i+1 << "º elemento: ";
  std::cin >> elemento;
  lista.push_back(elemento);
}
```
### 3. Realize operações na lista conforme desejado:
```cpp
lista.push_back(valor);
lista.push_front(valor);
lista.insert(index, valor);
lista.removeAt(index); 
```
# Exemplo de utilização
```cpp
#include <iostream>
#include "lista_sequencial.h"

int main() {
    Lista<int> lista;
    int max, n, op, pos = 1;

    std::cout << "Qual é a capacidade máxima da sua lista?" << std::endl;
    std::cin >> max;

    lista.inicializaVetor(max);

    std::cout << "Quantos elementos deseja inserir?" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int elemento = 0;
        std::cout << "Adicione o " << pos << "º elemento: ";
        std::cin >> elemento;
        lista.push_back(elemento);
        pos++;
    }

    std::cout << std::endl << "Essa é sua lista:" << std::endl;
    lista.imprime();

    std::cout << std::endl << "Que operação deseja fazer?" << std::endl
              << " 1. Inserir um valor na frente da lista\n"
              << " 2. Inserir um valor no final da lista\n"
              << " 3. Inserir um valor em uma determinada posição da lista\n"
              << " 4. Excluir o primeiro valor da lista\n"
              << " 5. Excluir o último valor da lista\n"
              << " 6. Remover um determinado elemento\n"
              << " 7. Retornar o tamanho atual da lista\n"
              << " 8. Buscar um elemento na lista e retornar o índice\n"
              << " 9. Remover todos os elementos da lista\n"
              << "10. Ordenar a lista de forma crescente\n"
              << "11. Ordenar a lista de forma decrescente\n"
              << "-1. Sair do programa\n";

    while (true) {
        std::cout << "=======================================\n";
        std::cout << "Informe qual operação deseja fazer: \n";
        std::cin >> op;
        std::cout << std::endl;

        if (op == -1)
            break;

        system("clear");

        switch (op) {
            case 1: {
                int valor;
                std::cout << "Qual valor deseja inserir na frente da lista? ";
                std::cin >> valor;
                lista.push_front(valor);
                lista.imprime();
                break;
            }

            case 2:
            ....
        }

        std::cout << "Pressione qualquer tecla para continuar...";
        std::cin.ignore();
        std::cin.get();

        system("clear");

        std::cout << std::endl << "Que operação deseja fazer?" << std::endl
                  << " 1. Inserir um valor na frente da lista\n"
                  << " 2. Inserir um valor no final da lista\n"
                  << " 3. Inserir um valor em uma determinada posição da lista\n"
                  << " 4. Excluir o primeiro valor da lista\n"
                  << " 5. Excluir o último valor da lista\n"
                  << " 6. Remover um determinado elemento\n"
                  << " 7. Retornar o tamanho atual da lista\n"
                  << " 8. Buscar um elemento na lista e retornar o índice\n"
                  << " 9. Remover todos os elementos da lista\n"
                  << "10. Ordenar a lista de forma crescente\n"
                  << "11. Ordenar a lista de forma decrescente\n"
                  << "-1. Sair do programa\n";
    }

    std::cout << "Programa finalizado." << std::endl;

    return 0;
}
```

# Saída do exemplo
```
Qual é a capacidade máxima da sua lista?
5
Quantos elementos deseja inserir?
4
Adicione o 1º elemento: 10
Adicione o 2º elemento: 20
Adicione o 3º elemento: 30
Adicione o 4º elemento: 40

Essa é sua lista:
10 20 30 40 

Que operação deseja fazer?
 1. Inserir um valor na frente da lista
 2. Inserir um valor no final da lista
 3. Inserir um valor em uma determinada posição da lista
 4. Excluir o primeiro valor da lista
 5. Excluir o último valor da lista
 6. Remover um determinado elemento
 7. Retornar o tamanho atual da lista
 8. Buscar um elemento na lista e retornar o índice
 9. Remover todos os elementos da lista
10. Ordenar a lista de forma crescente
11. Ordenar a lista de forma decrescente
-1. Sair do programa
=======================================
Informe qual operação deseja fazer: 
2

Qual valor deseja inserir no fim da lista? 50
10 20 30 40 50 
Pressione qualquer tecla para continuar...
```
Esse exemplo permite que você execute diversas operações na lista sequencial, como inserir elementos no início ou final, inserir em uma posição específica, remover elementos, buscar elementos, ordenar a lista e muito mais. Você pode testar diferentes operações e observar os resultados.

# Observações
- A implementação da lista sequencial neste exemplo utiliza o tipo int. Você pode modificar o tipo de dado da lista sequencial de acordo com as suas necessidades, alterando a declaração da estrutura Lista e adaptando as operações de acordo.
  
- Este exemplo é uma implementação básica da lista sequencial. Para aplicações mais complexas ou que exigem um desempenho melhor, pode ser necessário realizar otimizações adicionais ou utilizar outras estruturas de dados mais adequadas.

- CCertifique-se de gerenciar corretamente a memória alocada ao utilizar a lista sequencial. Utilize a função Delete() para liberar a memória alocada pela lista quando não for mais necessária.
