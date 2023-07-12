# Pilha (Stack)

#### Uma pilha, também conhecida como Stack, é uma estrutura de dados que segue a abordagem LIFO (Last-In, First-Out), ou seja, o último elemento inserido na pilha é o primeiro a ser removido. Nesta implementação, a pilha é baseada em uma lista encadeada, em que cada elemento é representado por um nó. [Clique aqui](../stack.cpp) para ver a implementação da pilha.

# Funcionalidades
A implementação da pilha possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se a pilha está vazia.

2. `push(value)`: Adiciona um elemento no topo da pilha.

3. `pop()`: Remove o elemento do topo da pilha.

4. `peek()`: Retorna o elemento do topo da pilha.


# Utilização
A pilha pode ser utilizada da seguinte forma:
### 1. Crie uma instância da fila:
```cpp
Pilha<T> pilha;
```
Substitua T pelo tipo de dado que deseja armazenar na pilha.

### 2. Realize as operações desejadas na fila, como inserção e remoção:
```cpp
pilha.isEmpty();
pilha.push(value);
pilha.pop();
pilha.peek();

```
Substitua value pelo valor a ser inserido.      

Utilize as funções isEmpty() para verificar se a pilha está vazia, push(value) para adicionar um elemento no topo da pilha, pop() para remover o elemento do topo da pilha e peek() para acessar o elemento do topo da pilha sem removê-lo.

# Exemplo de utilização
```cpp
#include <iostream>

/**
 * Classe que implementa uma pilha utilizando a estrutura de lista encadeada.
 */
template <typename T>
class Pilha{
    // Código da classe Pilha
};

int main() {
    Pilha<int> pilha;

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);

    std::cout << "Elemento do topo: " << pilha.peek() << std::endl;

    pilha.pop();

    std::cout << "Elemento do topo após remover: " << pilha.peek() << std::endl;

    pilha.push(4);
    pilha.push(5);

    while (!pilha.isEmpty()) {
        std::cout << "Elemento removido: " << pilha.peek() << std::endl;
        pilha.pop();
    }

    return 0;
}
```

# Saída do exemplo
```
Elemento do topo: 3
Elemento do topo após remover: 2
Elemento removido: 5
Elemento removido: 4
Elemento removido: 2
Elemento removido: 1
```
Neste exemplo, uma instância da classe Pilha é criada para armazenar valores do tipo int. São realizadas operações de inserção (push()) e remoção (pop()) na pilha, e o elemento do topo é acessado (peek()) e exibido na saída padrão. No final, a pilha é esvaziada e os elementos removidos são exibidos na ordem correta.

# Observações
- Esta implementação da pilha é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pela pilha. O destrutor da classe Pilha é responsável por liberar a memória alocada pelos nós da pilha.

- Certifique-se de que o tipo de dado utilizado na pilha fornece suporte para cópia (caso necessário).

- Você pode adicionar outras funcionalidades e métodos à pilha de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da pilha.
