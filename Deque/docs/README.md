# Deque (Double-ended Queue)

#### Um deque, também conhecido como Double-ended Queue, é uma estrutura de dados que permite a inserção e remoção de elementos tanto no início quanto no final da fila. Nesta implementação, o deque é baseado em uma lista encadeada duplamente, em que cada elemento é representado por um nó contendo referências para o nó anterior e próximo. [Clique aqui](../deque.cpp) para ver a implementação da pilha.

# Funcionalidades
A implementação do deque possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se o deque está vazio.

2. `pushFront()`: Adiciona um elemento no início do deque.

3. `pushBack()`: Adiciona um elemento no final do deque.

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


# Observações
- Esta implementação do deque é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pelo deque. O destrutor da classe Deque é responsável por liberar a memória alocada pelos nós do deque.

- Você pode adicionar outras funcionalidades e métodos ao deque de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica do deque.
