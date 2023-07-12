# Lista Duplamente Encadeada


#### A Lista Duplamente Encadeada é uma estrutura de dados em que cada elemento é representado por um nó contendo um valor e ponteiros para o nó anterior e para o próximo nó. Nesta implementação, a lista duplamente encadeada é representada pelos nós No que contêm um valor de um tipo genérico T. [Clique aqui](../doublyLinkedList.cpp) para ver a implementação.

# Funcionalidades
A implementação da lista duplamente encadeada possui as seguintes funcionalidades:

1. `get()`: Retorna o valor de um elemento em um índice específico da lista.

2. `pushFront()`: Adiciona um elemento no início da lista.

3. `pushBack()`: Adiciona um elemento no final da lista.

4. `removeFront()`: Remove o primeiro elemento da lista.

5. `removeBack()`: Remove o último elemento da lista.

6. `removeValue()`: Remove um elemento específico da lista.

7. `getSize()`: Retorna o tamanho atual da lista.

8. `isEmpty()`: Verifica se a lista está vazia.

9. `print()`: Imprime os elementos da lista.

10. `clear()`: Remove todos os elementos da lista.


# Utilização
A lista duplamente encadeada pode ser utilizada da seguinte forma:
### 1. Crie uma instância da lista:
```cpp
ListaDuplamenteEncadeada<T> lista;
```
Substitua T pelo tipo de dado que deseja armazenar na lista.
### 2. Realize as operações desejadas na lista, como inserção, remoção, busca e limpeza:
```cpp
lista.pushFront(value);
lista.pushBack(value);
lista.removeFront();
lista.removeBack();
lista.removeValue(value);
lista.get(index);
lista.isEmpty();
lista.print();
lista.getSize();
lista.clear();
```
Substitua value pelo valor a ser inserido ou removido e index pelo índice do elemento que deseja acessar

#### 3. Utilize as funções print() para exibir os elementos da lista, getSize() para obter o tamanho atual da lista e isEmpty() para verificar se a lista está vazia.
```cpp
lista.print();
```

# Observações
- Esta implementação da lista duplamente encadeada é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.
- Lembre-se de gerenciar corretamente a memória alocada pela lista. O método clear() é responsável por liberar a memória alocada pelos nós da lista.

- Certifique-se de que o tipo de dado utilizado na lista fornece suporte para comparação e cópia (caso necessário).

- Você pode adicionar outras funcionalidades e métodos à lista duplamente encadeada de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da lista.
