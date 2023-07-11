# Fila (Queue)

#### Uma fila, também conhecida como Queue, é uma estrutura de dados que segue a abordagem FIFO (First-In, First-Out), ou seja, o primeiro elemento inserido na fila é o primeiro a ser removido. Nesta implementação, a fila é baseada em uma lista encadeada, em que cada elemento é representado por um nó. [Clique aqui](../queue.cpp) para ver a implementação da fila.

# Funcionalidades
A implementação da fila possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se a fila está vazia.

2. `enqueue()`: Adiciona um elemento no final da fila.

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


#### 3. Utilize as funções isEmpty() para verificar se a fila está vazia, enqueue(value) para adicionar um elemento no final da fila, dequeue() para remover o elemento na frente da fila e peek() para acessar o elemento na frente da fila sem removê-lo.

# Observações
- Esta implementação da fila é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pela fila. O destrutor da classe Fila é responsável por liberar a memória alocada pelos nós da fila.

- Certifique-se de que o tipo de dado utilizado na fila fornece suporte para cópia (caso necessário).

- Você pode adicionar outras funcionalidades e métodos à fila de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da fila.
