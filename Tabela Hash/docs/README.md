# Tabela Hash (Hash Table)

#### Uma tabela hash, também conhecida como Hash Table, é uma estrutura de dados que utiliza uma função hash para mapear chaves a valores. Nesta implementação, a tabela hash é baseada em um vetor de listas encadeadas, em que cada elemento é representado por um par chave-valor armazenado em uma lista. [Clique aqui](../hashtable.cpp) para ver a implementação da tabela hash.

# Funcionalidades
A implementação da tabela hash possui as seguintes funcionalidades:

1. `isEmpty()`: Verifica se a tabela hash está vazia.

2. `getSize()`: Retorna o número de elementos presentes na tabela hash.

3. `insert(key, value)`: Adiciona um par chave-valor na tabela hash.

4. `remove(key)`: Remove um par chave-valor da tabela hash a partir da chave.

5. `contains(key)`: Verifica se uma chave está presente na tabela hash.

6. `get(key)`: Retorna o valor associado a uma chave na tabela hash.

7. `clear()`: Remove todos os elementos da tabela hash.


# Utilização
A tabela hash pode ser utilizada da seguinte forma:

### 1. Crie uma instância da tabela hash:
```
HashTable<KeyType, ValueType> hashTable;
```
Substitua KeyType pelo tipo de dado da chave e ValueType pelo tipo de dado do valor.


### 2. Realize as operações desejadas na tabela hash, como inserção, remoção, obtenção de valor associado a uma chave:

```
hashTable.isEmpty();
hashTable.getSize();
hashTable.insert(key, value);
hashTable.remove(key);
hashTable.contains(key);
hashTable.get(key);
hashTable.clear();
```
Substitua key pela chave a ser inserida, removida, verificada ou obtida, e value pelo valor associado à chave.

Utilize as funções isEmpty() para verificar se a tabela hash está vazia, getSize() para obter o tamanho da tabela hash, insert(key, value) para adicionar um par chave-valor na tabela hash, remove(key) para remover um par chave-valor da tabela hash a partir da chave, contains(key) para verificar a existência de uma chave na tabela hash, get(key) para obter o valor associado a uma chave na tabela hash e clear() para remover todos os elementos da tabela hash.

# Exemplo de utilização
```
#include <iostream>
#include <vector>
#include <list>

template <typename KeyType, typename ValueType>
class HashTable {
    // Código da classe HashTable
};

int main() {
    HashTable<std::string, int> hashTable;

    hashTable.insert("one", 1);
    hashTable.insert("two", 2);
    hashTable.insert("three", 3);

    std::cout << "Tamanho da tabela hash: " << hashTable.getSize() << std::endl;
    std::cout << "Contém a chave 'two': " << (hashTable.contains("two") ? "Sim" : "Não") << std::endl;

    std::cout << "Valor associado à chave 'one': " << hashTable.get("one") << std::endl;

    hashTable.remove("two");

    std::cout << "Tamanho da tabela hash após remover a chave 'two': " << hashTable.getSize() << std::endl;

    hashTable.clear();

    std::cout << "Tamanho da tabela hash após limpar: " << hashTable.getSize() << std::endl;

    return 0;
}
```
# Saída do exemplo
```
Tamanho da tabela hash: 3
Contém a chave 'two': Sim
Valor associado à chave 'one': 1
Tamanho da tabela hash após remover a chave 'two': 2
Tamanho da tabela hash após limpar: 0
```
Neste exemplo, uma instância da classe HashTable é criada para armazenar pares de chave-valor, onde a chave é do tipo std::string e o valor é do tipo int. Pares de chave-valor são inseridos na tabela usando o método insert(). O tamanho da tabela é impresso usando o método getSize(). A presença de uma chave específica é verificada usando o método contains(). O valor associado a uma chave é obtido usando o método get(). Um par de chave-valor é removido da tabela usando o método remove(). O tamanho da tabela após a remoção é impresso novamente. Por fim, a tabela é limpa usando o método clear(), e o tamanho final da tabela é exibido.

# Observações
- Esta implementação da tabela hash é genérica, o que significa que pode ser utilizada para armazenar pares chave-valor de qualquer tipo de dado.

- Lembre-se de ajustar o tamanho inicial da tabela hash de acordo com as necessidades do seu problema. O tamanho inicial é definido ao criar a instância da tabela hash.

- A função hash utilizada na implementação é uma função hash simples, mas você pode substituí-la por uma função hash mais adequada ao seu caso.

- Certifique-se de que o tipo de dado da chave fornece suporte para a função hash padrão do C++ (std::hash) ou forneça sua própria função hash personalizada.

- Você pode adicionar outras funcionalidades e métodos à tabela hash de acordo com suas necessidades. Esta implementação serve como base para a manipulação básica da tabela hash.
