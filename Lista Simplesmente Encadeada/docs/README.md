# Lista Simplesmente Encadeada

#### A Lista Simplesmente Encadeada Genérica é uma estrutura de dados em que cada elemento é representado por um nó contendo um valor e um ponteiro para o próximo elemento. Nesta implementação, a lista simplesmente encadeada é representada pelos nós Node que podem armazenar valores de qualquer tipo. [Clique aqui](../linkedList.cpp) para ver a implementação.

# Funcionalidades
A implementação da lista simplesmente encadeada possui as seguintes funcionalidades:

1. `push_front(x)`: Adiciona um elemento no início da lista.

2. `push_back(x)`: Adiciona um elemento no final da lista.

3. `pop_front()`: Remove o primeiro elemento da lista.

4. `pop_back()`: Remove o último elemento da lista.

5. `excluir(x)`: Remove um elemento específico da lista.

6. `sizeOf()`: Retorna o tamanho atual da lista.

7. `find(x)`: Verifica se um elemento está presente na lista.

8. `print()`: Imprime os elementos da lista.

9. `clear()`: Remove todos os elementos da lista.


# Utilização
A lista simplesmente encadeada pode ser utilizada da seguinte forma:
### 1. Crie uma instância da lista especificando o tipo dos elementos:
```
LinkedList<int> lista; // Lista de inteiros
LinkedList<std::string> lista; // Lista de strings
LinkedList<double> lista; // Lista de números de ponto flutuante
```
### 2. Realize as operações desejadas na lista, como inserção, remoção, busca e limpeza:
```
lista.push_front(5);
lista.push_back(6);
lista.push_back(8);
lista.pop_front();
lista.pop_back();
lista.find(8);
lista.clear();
```
### 3. Utilize a função print() para exibir os elementos da lista e sizeOf() para obter o tamanho atual da lista.
```
lista.print();
std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;
```

# Exemplo de utilização
```
#include <iostream>
#include "LinkedList.h"

int main() {
  // Criação de uma instância da lista de inteiros
  LinkedList<int> lista;

  // Adicionando elementos à lista
  lista.push_front(5);
  lista.push_front(3);
  lista.push_back(8);
  lista.push_back(2);

  // Imprimindo os elementos da lista
  std::cout << "Lista atual: ";
  lista.print();

  // Verificando o tamanho da lista
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  // Removendo elementos da lista
  lista.pop_front();
  lista.pop_back();

  // Verificando a presença de elementos na lista
  lista.find(3);
  lista.find(10);

  // Imprimindo os elementos atualizados da lista
  std::cout << "Lista atualizada: ";
  lista.print();

  // Limpando a lista
  lista.clear();

  // Imprimindo os elementos após limpar a lista
  std::cout << "Lista após limpar: ";
  lista.print();

  return 0;
}
```

# Saída do exemplo
```
Lista atual: 3 5 8 2
Tamanho atual: 4
O elemento 3 está na lista!
O elemento 10 não está na lista!
Lista atualizada: 5 8
Lista após limpar:
```
Neste exemplo, criamos uma instância da lista de inteiros (LinkedList<int>) e realizamos diversas operações, como adicionar elementos no início e no final da lista, remover elementos, buscar elementos na lista e limpar a lista. A saída exibe os elementos da lista em diferentes momentos e também mostra o tamanho atual da lista.

# Observações
- Esta implementação utiliza valores genéricos na lista, permitindo que você defina o tipo dos elementos ao criar uma instância da lista.

- Lembre-se de gerenciar corretamente a memória alocada pela lista. A função clear() é responsável por liberar a memória alocada pelos nós da lista.
  
- Você pode adicionar outras funcionalidades e métodos à lista simplesmente encadeada de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da lista.
