# Lista Simplesmente Encadeada

#### A Lista Simplesmente Encadeada é uma estrutura de dados em que cada elemento é representado por um nó contendo um valor e um ponteiro para o próximo elemento. Nesta implementação, a lista simplesmente encadeada é representada pelos nós Node que contêm um valor inteiro. [Clique aqui](../linkedList.cpp) para ver a implementação.

# Funcionalidades
A implementação da lista simplesmente encadeada possui as seguintes funcionalidades:

1. `push_front()`: Adiciona um elemento no início da lista.

2. `push_back()`: Adiciona um elemento no final da lista.

3. `pop_front()`: Remove o primeiro elemento da lista.

4. `pop_back()`: Remove o último elemento da lista.

5. `excluir()`: Remove um elemento específico da lista.

6. `sizeOf()`: Retorna o tamanho atual da lista.

7. `find()`: Verifica se um elemento está presente na lista.

8. `print()`: Imprime os elementos da lista.

9. `clear()`: Remove todos os elementos da lista.


# Utilização
A lista simplesmente encadeada pode ser utilizada da seguinte forma:
### 1. Crie uma instância da lista:
```
LinkedList lista;

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
#### 3. Utilize a função print() para exibir os elementos da lista e sizeOf() para obter o tamanho atual da lista.
```
lista.print();
```

# Observações
- Esta implementação utiliza valores inteiros na lista, mas você pode adaptá-la para outros tipos de dados modificando a definição do valor na estrutura Node e os tipos dos parâmetros e variáveis nas funções.

- Lembre-se de gerenciar corretamente a memória alocada pela lista. A função clear() é responsável por liberar a memória alocada pelos nós da lista.

- Você pode adicionar outras funcionalidades e métodos à lista simplesmente encadeada de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da lista.