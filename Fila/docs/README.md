# Fila (Queue)

#### Uma fila, também conhecida como Queue, é uma estrutura de dados que segue a abordagem FIFO (First-In, First-Out), ou seja, o primeiro elemento inserido na fila é o primeiro a ser removido. Nesta implementação, a fila é baseada em uma lista encadeada, em que cada elemento é representado por um nó. [Clique aqui](../queue.cpp) para ver a implementação da fila.

# Funcionalidades
A implementação da fila possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se a fila está vazia.

2. `enqueue(value)`: Adiciona um elemento no final da fila.

3. `dequeue()`: Remove o elemento na frente da fila.

4. `peek()`: Retorna o elemento na frente da fila.


# Utilização
A fila pode ser utilizada da seguinte forma:
### 1. Crie uma instância da fila:
```
Fila<T> fila;
```
Substitua T pelo tipo de dado que deseja armazenar na fila.

### 2. Realize as operações desejadas na fila, como inserção e remoção:

```
fila.isEmpty();
fila.enqueue(value);
fila.dequeue();
fila.peek();

```
Substitua value pelo valor a ser inserido.

Utilize as funções isEmpty() para verificar se a fila está vazia, enqueue(value) para adicionar um elemento no final da fila, dequeue() para remover o elemento na frente da fila e peek() para acessar o elemento na frente da fila sem removê-lo.

# Exemplo de utilização
```
#include <iostream>

// Classe que implementa uma fila utilizando a estrutura de lista encadeada.
template <typename T>
class Fila{
    // Código da classe Fila
};

int main() {
    Fila<int> fila;

    fila.enqueue(1);
    fila.enqueue(2);
    fila.enqueue(3);

    std::cout << "Elemento da frente: " << fila.peek() << std::endl;

    fila.dequeue();

    std::cout << "Elemento da frente após remover: " << fila.peek() << std::endl;

    fila.enqueue(4);
    fila.enqueue(5);

    while (!fila.isEmpty()) {
        std::cout << "Elemento removido: " << fila.peek() << std::endl;
        fila.dequeue();
    }

    return 0;
}
```

# Saída do exemplo
```
Elemento da frente: 1
Elemento da frente após remover: 2
Elemento removido: 2
Elemento removido: 3
Elemento removido: 4
Elemento removido: 5
```
Neste exemplo, uma instância da classe Fila é criada para armazenar valores do tipo int. Valores são adicionados na fila usando o método enqueue(). Em seguida, o elemento da frente da fila é acessado e exibido na saída padrão. Depois, um elemento é removido da fila usando o método dequeue(), e o novo elemento da frente é exibido. Mais elementos são adicionados na fila e, por fim, todos os elementos são removidos um por um usando o método dequeue() e exibidos na ordem correta.

# Observações
- Esta implementação da fila é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pela fila. O destrutor da classe Fila é responsável por liberar a memória alocada pelos nós da fila.

- Certifique-se de que o tipo de dado utilizado na fila fornece suporte para cópia (caso necessário).

- Você pode adicionar outras funcionalidades e métodos à fila de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da fila.
