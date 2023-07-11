#include <iostream>

// Classe que implementa uma fila utilizando a estrutura de lista encadeada.
template <typename T>
class Fila{
private:
   // Classe que representa um nó da fila.
    struct No{
        T valor;  /*< O valor armazenado no nó. */
        No* next;  /*< Ponteiro para o próximo nó. */

        No(T value) : valor(value), next(NULL){}
    };

    No* head; /*< Ponteiro para o primeiro elemento da fila. */
    No* tail; /*< Ponteiro para o último elemento da fila. */

public:
    // Construtor da classe Fila.
    Fila() : head(NULL), tail(NULL){}


    // Destrutor da classe Fila.
    ~Fila(){
      while(!isEmpty()) {
        dequeue();
      }
    }


    // Verifica se a fila está vazia.
    bool isEmpty() const {
      if(head == NULL){
        return true;
      }else{
        return false;
      }
    }


    // Adiciona um elemento no final da fila.
    void enqueue(T value){
      No* newNo = new No(value);
      if(isEmpty()){
        head = tail = newNo;
      }else{
        tail->next = newNo;
        tail = newNo;
      }
    }


    // Remove o elemento na frente da fila.
    void dequeue(){
      if(isEmpty()){
        std::cout << "A fila está vazia." << std::endl;
        return;
      }
      No* temp = head;
      head = head->next;
      if(head == NULL){
        tail = NULL;
      }
      delete temp;
    }


    // Retorna o elemento da frente da fila.

    T& peek(){
        if (isEmpty()) {
            throw std::runtime_error("A fila está vazia.");
        }
        return head->valor;
    }
};

int main() {
    Fila<int> fila;

    fila.enqueue(1);
    fila.enqueue(2);
    fila.enqueue(3);

    std::cout << "Elemento da frente: " << fila.peek() << std::endl;

    fila.dequeue();

    std::cout << "Elemento da frente após remover: " << fila.peek() << std::endl;

    fila.enqueue(4);
    fila.enqueue(5);

    while (!fila.isEmpty()) {
      std::cout << "Elemento removido: " << fila.peek() << std::endl;
      fila.dequeue();
    }

    return 0;
}
