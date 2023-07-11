#include <iostream>
#include <vector>
#include <list>

template <typename KeyType, typename ValueType>
class HashTable {
private:
    std::vector<std::list<std::pair<KeyType, ValueType>>> table;
    size_t size;

    size_t hashFunction(const KeyType& key) const {
        // Exemplo de função hash simples
        return std::hash<KeyType>{}(key) % table.size();
    }

public:
    HashTable(size_t initialSize = 10) : table(initialSize), size(0) {}

    ~HashTable() {}

    bool isEmpty() const {
        return size == 0;
    }

    size_t getSize() const {
        return size;
    }

    void insert(const KeyType& key, const ValueType& value) {
        size_t index = hashFunction(key);
        std::list<std::pair<KeyType, ValueType>>& bucket = table[index];

        for (auto& pair : bucket) {
            if (pair.first == key) {
                std::cout << "Chave já existe na tabela." << std::endl;
                return;
            }
        }

        bucket.push_back(std::make_pair(key, value));
        size++;
    }

    void remove(const KeyType& key) {
        size_t index = hashFunction(key);
        std::list<std::pair<KeyType, ValueType>>& bucket = table[index];

        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                size--;
                std::cout << "Chave removida da tabela." << std::endl;
                return;
            }
        }

        std::cout << "Chave não encontrada na tabela." << std::endl;
    }

    bool contains(const KeyType& key) const {
        size_t index = hashFunction(key);
        const std::list<std::pair<KeyType, ValueType>>& bucket = table[index];

        for (const auto& pair : bucket) {
            if (pair.first == key) {
                return true;
            }
        }

        return false;
    }

    const ValueType& get(const KeyType& key) const {
        size_t index = hashFunction(key);
        const std::list<std::pair<KeyType, ValueType>>& bucket = table[index];

        for (const auto& pair : bucket) {
            if (pair.first == key) {
                return pair.second;
            }
        }

        throw std::out_of_range("Chave não encontrada na tabela.");
    }

    void clear() {
        for (auto& bucket : table) {
            bucket.clear();
        }
        size = 0;
        std::cout << "Tabela hash foi limpa." << std::endl;
    }
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
