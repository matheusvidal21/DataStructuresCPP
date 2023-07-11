# Pilha (Stack)

#### Uma pilha, também conhecida como Stack, é uma estrutura de dados que segue a abordagem LIFO (Last-In, First-Out), ou seja, o último elemento inserido na pilha é o primeiro a ser removido. Nesta implementação, a pilha é baseada em uma lista encadeada, em que cada elemento é representado por um nó. [Clique aqui](../stack.cpp) para ver a implementação da pilha.

# Funcionalidades
A implementação da pilha possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se a fila está vazia.

2. `push()`: Adiciona um elemento no topo da pilha.

3. `pop()`: Remove o elemento do topo da pilha.

4. `peek()`: Retorna o elemento do topo da pilha.


# Utilização
A pilha pode ser utilizada da seguinte forma:
### 1. Crie uma instância da fila:
```
Pilha<T> pilha;
```
Substitua T pelo tipo de dado que deseja armazenar na pilha.


### 2. Realize as operações desejadas na fila, como inserção e remoção:

```
pilha.isEmpty();
pilha.push(value);
pilha.pop();
pilha.peek();

```
Substitua value pelo valor a ser inserido.      

#### 3. Utilize as funções isEmpty() para verificar se a pilha está vazia, push(value) para adicionar um elemento no topo da pilha, pop() para remover o elemento do topo da pilha e peek() para acessar o elemento do topo da pilha sem removê-lo.

# Observações
- Esta implementação da pilha é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pela pilha. O destrutor da classe Pilha é responsável por liberar a memória alocada pelos nós da pilha.

- Certifique-se de que o tipo de dado utilizado na pilha fornece suporte para cópia (caso necessário).

- Você pode adicionar outras funcionalidades e métodos à pilha de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da pilha.