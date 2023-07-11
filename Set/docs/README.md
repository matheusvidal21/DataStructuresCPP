# Set (Conjunto)

#### Um conjunto, também conhecido como Set, é uma estrutura de dados que armazena elementos de forma não ordenada e não permite a duplicação de valores. Nesta implementação, o conjunto é baseado em uma lista encadeada, em que cada elemento é representado por um nó. [Clique aqui](../set.cpp) para ver a implementação do set.

# Funcionalidades
A implementação do conjunto possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se o conjunto está vazio.

2. `contains()`: Verifica se o conjunto contém o valor especificado.

3. `insert()`: Insere um valor único no conjunto.

4. `remove()`: Remove um valor do conjunto, se presente.

5. `clear()`: Remove todos os elementos do conjunto.

6. `print()`: Imprime os elementos do conjunto.


# Utilização
O conjunto pode ser utilizado da seguinte forma:
### 1. Crie uma instância do conjunto:
```
Set<T> set;
```
Substitua T pelo tipo de dado que deseja armazenar no conjunto.

### 2. Realize as operações desejadas no conjunto, como inserção e remoção:

```
set.isEmpty();
set.contains(value);
set.insert(value);
set.remove(value);
set.clear();
set.print();

```
Substitua value pelo valor a ser inserido, removido ou verificado.
- Utilize as funções isEmpty() para verificar se o conjunto está vazio, contains(value) para verificar se um elemento está presente no conjunto, insert(value) para adicionar um elemento ao conjunto, remove(value) para remover um elemento do conjunto, clear() para remover todos os elementos do conjunto e print() para imprimir os elementos do conjunto.


# Exemplo de uso
```
#include <iostream>

int main() {
    Set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);

    std::cout << "Conjunto: ";
    set.print();

    std::cout << "Conjunto contém 2: " << (set.contains(2) ? "true" : "false") << std::endl;
    std::cout << "Conjunto contém 4: " << (set.contains(4) ? "true" : "false") << std::endl;

    set.remove(2);

    std::cout << "Conjunto após remover o 2: ";
    set.print();

    set.clear();

    std::cout << "Conjunto após limpar: ";
    set.print();

    return 0;
}
```

# Saída do exemplo
``` 
Conjunto: 3 2 1
Conjunto contém 2: true
Conjunto contém 4: false
Conjunto após remover o 2: 3 1
Conjunto após limpar: Conjunto vazio.
```
Neste exemplo, um conjunto de inteiros é criado e alguns valores são inseridos. Em seguida, a presença de certos valores é verificada no conjunto. Um valor é removido e o conjunto é impresso. Finalmente, o conjunto é limpo e impresso novamente para demonstrar que está vazio.

# Observações
- Esta implementação do conjunto é genérica, o que significa que pode ser utilizada para armazenar valores de qualquer tipo de dado.

- Lembre-se de gerenciar corretamente a memória alocada pelo conjunto. O destrutor da classe Set é responsável por liberar a memória alocada pelos nós do conjunto.

- Você pode adicionar outras funcionalidades e métodos ao conjunto de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica do conjunto.
