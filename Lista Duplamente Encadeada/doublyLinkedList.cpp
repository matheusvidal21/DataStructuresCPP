#include <iostream>


template <typename T>
class No{
  public:
    T valor; /*< O valor armazenado no nó. */
    No* prev; /*< Ponteiro para o nó anterior. */
    No* next; /*< Ponteiro para opróximo nó. */

    No(T valor) : valor(valor), prev(NULL), next(NULL){}

    ~No(){};
};


template <typename T>
class ListaDuplamenteEncadeada{
  private:
    No<T>* head; /*< Ponteiro para o primeiro elemento da lista. */
    No<T>* tail; /*< Ponteiro para o último elemento da lista. */

  public:

    ListaDuplamenteEncadeada() : head(NULL), tail(NULL){}


    // Destrutor da classe ListaDuplamenteEncadeada.
    ~ListaDuplamenteEncadeada(){
      clear();
    }


    // Método getter que retorna o ponteiro para o primeiro elemento da lista.
    No<T>* getHead() const {
      return head;
    }


    // Método para obter o elemento em um índice específico da lista
    T& get(int index) const {
        if (index < 0 || index >= getSize()) {
            throw std::out_of_range("Index não encontrado.");
        }

        No<T>* current = head;
        int currentIndex = 0;

        while (current != NULL) {
            if (currentIndex == index) {
                return current->valor;
            }
            current = current->next;
            currentIndex++;
        }

        throw std::out_of_range("Index não encontrado.");
    }


    // Método que adiciona um novo elemento no início da lista.
    void pushFront(T value){
      No<T>* newNo = new No<T>(value);
        if (isEmpty()){
          head = tail = newNo;
        }else{
          newNo->next = head;
          head->prev = newNo;
          head = newNo;
        }
    }  


    // Método que adiciona um novo elemento no final da lista.
    void pushBack(T value){
      No<T>* newNo = new No<T>(value);
        if(isEmpty()){
          head = tail = newNo;
        }else{
          tail->next = newNo;
          newNo->prev = tail;
          tail = newNo;
        }
    }


    // Método que remove o primeiro elemento da lista.
    void removeFront() {
      if(isEmpty()){
        std::cout << "A lista está vazia." << std::endl;
        return;
      }

      No<T>* temp = head;
      head = head->next;

      if (head == NULL){ //Caso só tenha um elemento
        tail = NULL;
      }else{
        head->prev = NULL;
      }
      delete temp;
    }


    // Método que remove o último elemento da lista.
    void removeBack() {
      if(isEmpty()){
        std::cout << "A lista está vazia." << std::endl;
        return;
      }

      No<T>* temp = tail;
      tail = tail->prev;

      if(tail == NULL){ //Caso só tenha um elemento
        head = NULL;
      }else{
        tail->next = NULL;
      }

      delete temp;
    }


    // Método que verifica se a lista está vazia.
    bool isEmpty() const {
      if(head == NULL){
        return true;
      }else{
        return false;
      }
    }


    // Método que imprime os elementos da lista.
    void print() const{
      if(isEmpty()){
        std::cout << "A lista está vazia." << std::endl;
        return;
      }

      No<T>* current = head;
      while (current != NULL) {
        std::cout << current->valor << " ";
        current = current->next;
      }
      std::cout << std::endl;
    }


   // Método que retorna o tamanho da lista.
    int getSize() const{
      int size = 0;
      No<T>* current = head;

      while(current != NULL) {
        size++;
        current = current->next;
      }

      return size;
    }


   // Método que remove um valor específico da lista.
    bool removeValue(const T& value){
      if(isEmpty()){
        return false;
      }

      No<T>* current = head;

      // Caso o valor a ser removido esteja na cabeça da lista
      if(current->valor == value){
        head = current->next;

        if(head != NULL){
          head->prev = NULL;
        }else{
          tail = NULL;
        }

        delete current;
        return true;
      }

      while(current != NULL) {
        if(current->valor == value) {
          No<T>* prevNo = current->prev;
          No<T>* nextNo = current->next;

          if(prevNo != NULL) {
            prevNo->next = nextNo;
          }

          if(nextNo != NULL) {
            nextNo->prev = prevNo;
          }else{
            tail = prevNo;
          }

          delete current;
          return true;
        }
        current = current->next;
      }
      return false;
    }


    // Método que remove todos os elementos da lista.
    void clear(){
      No<T>* current = head;

      while(current != NULL) {
        No<T>* nextNo = current->next;
        delete current;
        current = nextNo;
      }

      head = tail = NULL;
    }

    // Método para inserir um elemento em qualquer lugar da lista.
    void insert(int index, T value) {
      if (index < 0 || index >= getSize()) {
        throw std::out_of_range("Index não encontrado.");
      }
    
      No<T>* newNo = new No<T>(value);
      No<T>* current = head;
    
      for (int i = 0; i < index; i++) {
        current = current->next;
      }
    
      newNo->next = current->next;
      newNo->prev = current;
      current->next->prev = newNo;
      current->next = newNo;
    }
    
    // Método para encontrar um elemento na lista.
    T find(T value) {
      No<T>* current = head;
    
      while (current != NULL) {
        if (current->valor == value) {
          return current->valor;
        }
        current = current->next;
      }
    
      return NULL;
    }
    
    // Método para classificar os elementos da lista.
    void sort() {
      if (head == NULL) {
        return;
      }
    
      No<T>* current = head;
      No<T>* next = current->next;
    
      while (next != NULL) {
        if (current->valor > next->valor) {
          T temp = current->valor;
          current->valor = next->valor;
          next->valor = temp;
        }
    
        current = next;
        next = current->next;
      }
    }
    
    // Método para inverter os elementos da lista.
    void reverse() {
      if (head == NULL) {
        return;
      }
    
      No<T>* current = head;
      No<T>* prev = NULL;
      No<T>* next = current->next;
    
      while (next != NULL) {
        current->next = prev;
        prev = current;
        current = next;
        next = current->next;
      }
    
      head = prev;
    }
    
    // Método para clonar a lista.
    ListaDuplamenteEncadeada<T> clone() {
      ListaDuplamenteEncadeada<T> newList = ListaDuplamenteEncadeada<T>();
    
      No<T>* current = head;
    
      while (current != NULL) {
        newList.pushBack(current->valor);
        current = current->next;
      }
    
      return newList;
    }
    
    // Método para converter a lista em uma string.
    std::string toString() {
      std::string str;
    
      No<T>* current = head;
    
      while (current != NULL) {
        str += std::to_string(current->valor) + " ";
        current = current->next;
      }
    
      return str;
    }
    
    // Método para calcular o hashCode da lista.
    std::size_t hashCode() {
      std::size_t hash = 0;
    
      No<T>* current = head;
    
      while (current != NULL) {
        hash = hash * 31 + current->valor;
        current = current->next;
      }
    
      return hash;
    }
    
    // Método para comparar duas listas.
    bool equals(ListaDuplamenteEncadeada<T> otherList) {
      if (this->getSize() != otherList.getSize()) {
        return false;
      }
    
      No<T>* current = head;
      No<T>* otherCurrent = otherList.head;
    
      while (current != NULL) {
        if (current->valor != otherCurrent->valor) {
          return false;
        }
    
        current = current->next;
        otherCurrent = otherCurrent->next;
      }
    
      return true;
    }

};

int main() {
    ListaDuplamenteEncadeada<int> lista;

    lista.pushFront(5);
    lista.pushFront(4);
    lista.pushFront(3);
    lista.pushFront(2);
    lista.pushFront(1);

    std::cout << "Lista atual: ";
    lista.print();
    std::cout << "Tamanho atual: " << lista.getSize() << std::endl;

    lista.pushBack(6);
    lista.pushBack(7);
    lista.pushBack(8);

    std::cout << "Lista atual: ";
    lista.print();
    std::cout << "Tamanho atual: " << lista.getSize() << std::endl;

    lista.removeValue(6);

    std::cout << "Lista atual: ";
    lista.print();
    std::cout << "Tamanho atual: " << lista.getSize() << std::endl;

    lista.removeFront();

    std::cout << "Lista atual: ";
    lista.print();
    std::cout << "Tamanho atual: " << lista.getSize() << std::endl;

    lista.removeBack();

    std::cout << "Lista atual: ";
    lista.print();
    std::cout << "Tamanho atual: " << lista.getSize() << std::endl;

    std::cout << "Valor no índice 2: " << lista.get(2) << std::endl;

    lista.clear();
    std::cout << "Lista atual: ";
    lista.print();

    return 0;
}
