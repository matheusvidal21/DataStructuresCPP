# Deque (Double-ended Queue)

#### Um deque, também conhecido como Double-ended Queue, é uma estrutura de dados que permite a inserção e remoção de elementos tanto no início quanto no final da fila. Nesta implementação, o deque é baseado em uma lista encadeada duplamente, em que cada elemento é representado por um nó contendo referências para o nó anterior e próximo. [Clique aqui](../deque.cpp) para ver a implementação do deque.

# Funcionalidades
A implementação do deque possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se o deque está vazio.

2. `pushFront(value)`: Adiciona um elemento no início do deque.

3. `pushBack(value)`: Adiciona um elemento no final do deque.

4. `popFront()`:  Remove o elemento do início do deque.

5. `popBack()`: Remove o elemento do final do deque.

6. `getFront()`: Retorna o elemento do início do deque sem removê-lo.

7. `getBack()`: Retorna o elemento do final do deque sem removê-lo.

8. `clear()`: Remove todos os elementos do deque.

9. `print()`: Imprime os elementos do deque.


# Utilização
O deque pode ser utilizado da seguinte forma:

### 1. Crie uma instância do deque:
```
Deque<T> deque;
```
Substitua T pelo tipo de dado que deseja armazenar no deque.


### 2. Realize as operações desejadas no deque, como inserção e remoção:

```
deque.isEmpty();
deque.pushFront(value);
deque.pushBack(value);
deque.popFront();
deque.popBack();
deque.getFront();
deque.getBack();
deque.clear();
deque.print();

```
Substitua value pelo valor a ser inserido ou removido.

Utilize as funções isEmpty() para verificar se o deque está vazio, pushFront(value) para adicionar um elemento no início do deque, pushBack(value) para adicionar um elemento no final do deque, popFront() para remover o elemento do início do deque, popBack() para remover o elemento do final do deque, getFront() para acessar o elemento do início do deque sem removê-lo, getBack() para acessar o elemento do final do deque sem removê-lo, clear() para remover todos os elementos do deque e print() para imprimir os elementos do deque.

# Exemplo de utilização
```
#include <iostream>

template <typename T>
class Deque {
    // Código da classe Deque
};

int main() {
    Deque<int> deque;
    deque.pushFront(3);
    deque.pushFront(2);
    deque.pushFront(1);

    std::cout << "Deque: ";
    deque.print();

    deque.pushBack(4);
    deque.pushBack(5);
    deque.pushBack(6);

    std::cout << "Deque: ";
    deque.print();

    std::cout << "Frente: " << deque.getFront() << std::endl;
    std::cout << "Trás: " << deque.getBack() << std::endl;

    deque.popFront();
    deque.popBack();

    std::cout << "Deque após popFront() e popBack(): ";
    deque.print();

    deque.clear();

    std::cout << "Deque após clear(): ";
    deque.print();

    return 0;
}
```

# Saída do exemplo
```
Deque: 1 2 3
Deque: 1 2 3 4 5 6
Frente: 1
Trás: 6
Deque após popFront() e popBack(): 2 3 4 5
Deque após clear():
```
Neste exemplo, uma instância da classe Deque é criada para armazenar valores do tipo int. Valores são adicionados no início da deque usando o método pushFront(), e em seguida, são adicionados no final da deque usando o método pushBack(). Adeque é impressa usando o método print(). O elemento da frente da deque é obtido usando o método getFront() e o elemento de trás da deque é obtido usando o método getBack(), e ambos são exibidos na saída padrão. Em seguida, elementos são removidos tanto no início quanto no final da deque usando os métodos popFront() e popBack(), respectivamente. Adeque é impressa novamente para verificar as mudanças. Por fim, a deque é limpa usando o método clear() e novamente impressa, mostrando que está vazia.

# Observações
- Esta implementação do deque é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pelo deque. O destrutor da classe Deque é responsável por liberar a memória alocada pelos nós do deque.

- Você pode adicionar outras funcionalidades e métodos ao deque de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica do deque.
