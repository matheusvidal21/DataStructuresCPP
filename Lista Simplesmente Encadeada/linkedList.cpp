#include <iostream>

template <typename T>
class LinkedList {
private:
  struct Node {
    T value;
    Node* next;
  };

  Node* head;

public:
  LinkedList() : head(nullptr) {}

  ~LinkedList() {
    clear();
  }

  void print() const {
    Node* current = head;
    while (current != nullptr) {
      std::cout << current->value << " ";
      current = current->next;
    }
    std::cout << std::endl;
  }

  int sizeOf() const {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    return count;
  }

  void push_back(const T& x) {
    Node* newNode = new Node{ x, nullptr };

    if (head == nullptr) {
      head = newNode;
      std::cout << x << " foi adicionado na lista." << std::endl;
    } else {
      Node* current = head;
      while (current->next != nullptr) {
        current = current->next;
      }
      current->next = newNode;
      std::cout << x << " foi adicionado na última posição da lista." << std::endl;
    }
  }

  void push_front(const T& x) {
    Node* newNode = new Node{ x, nullptr };

    if (head == nullptr) {
      head = newNode;
      std::cout << x << " foi adicionado na lista." << std::endl;
    } else {
      newNode->next = head;
      head = newNode;
      std::cout << x << " foi adicionado na primeira posição da lista." << std::endl;
    }
  }

  void pop_front() {
    if (head == nullptr) {
      std::cout << "Lista vazia" << std::endl;
      return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    std::cout << "Primeiro elemento excluído." << std::endl;
  }

  void pop_back() {
    if (head == nullptr) {
      std::cout << "Lista vazia" << std::endl;
      return;
    }

    if (head->next == nullptr) {
      delete head;
      head = nullptr;
      std::cout << "Elemento excluído." << std::endl;
      return;
    }

    Node* current = head;
    while (current->next->next != nullptr) {
      current = current->next;
    }

    delete current->next;
    current->next = nullptr;
    std::cout << "Último elemento excluído." << std::endl;
  }

  void excluir(const T& x) {
    if (head == nullptr) {
      std::cout << "Lista vazia" << std::endl;
      return;
    }

    if (head->value == x) {
      Node* temp = head;
      head = head->next;
      delete temp;
      std::cout << "O elemento " << x << " foi excluído da lista" << std::endl;
      return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->value != x) {
      current = current->next;
    }

    if (current->next == nullptr) {
      std::cout << "Elemento não encontrado." << std::endl;
      return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    std::cout << "O elemento " << x << " foi excluído da lista" << std::endl;
  }

  bool find(const T& x) const {
    Node* current = head;
    while (current != nullptr) {
      if (current->value == x) {
        std::cout << "O elemento " << x << " está na lista!" << std::endl;
        return true;
      }
      current = current->next;
    }
    std::cout << "O elemento " << x << " não está na lista!" << std::endl;
    return false;
  }

  void clear() {
    Node* current = head;
    while (current != nullptr) {
      Node* next = current->next;
      delete current;
      current = next;
    }
    head = nullptr;
    std::cout << "Lista deletada." << std::endl;
  }
};

int main() {
  LinkedList<int> lista;

  lista.push_front(5);
  lista.push_front(4);
  lista.push_front(3);
  lista.push_front(2);
  lista.push_front(1);

  std::cout << "Lista atual: ";
  lista.print();
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  lista.push_back(6);
  lista.push_back(7);
  lista.push_back(8);

  std::cout << "Lista atual: ";
  lista.print();
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  lista.excluir(6);

  std::cout << "Lista atual: ";
  lista.print();
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  lista.pop_front();

  std::cout << "Lista atual: ";
  lista.print();
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  lista.pop_back();

  std::cout << "Lista atual: ";
  lista.print();
  std::cout << "Tamanho atual: " << lista.sizeOf() << std::endl;

  lista.find(3);
  lista.find(6);

  lista.clear();
  std::cout << "Lista atual: ";
  lista.print();

  return 0;
}
