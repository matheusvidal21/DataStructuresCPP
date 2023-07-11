#include <iostream>


/**
 * Classe que implementa uma pilha utilizando a estrutura de lista encadeada.
 */
template <typename T>
class Pilha{
private:

    struct No{
        T valor; /*< O valor armazenado no nó. */
        No* next; /*< Ponteiro para o próximo nó. */

        No(T value) : valor(value), next(NULL){}
    };

    No* top; /*< Ponteiro para o topo da pilha. */

public:

    // Construtor da classe Pilha.
    Pilha() : top(NULL){}


    //Destrutor da classe Pilha.
    ~Pilha(){
      while(!isEmpty()) {
        pop();
      }
    }


    // Verifica se a pilha está vazia.
    bool isEmpty() const {
      if(top == NULL){
        return true;
      }else{
        return false;
      }
    }


    // Adiciona um elemento no topo da pilha.
    void push(T value) {
        No* newNo = new No(value);
        newNo->next = top;
        top = newNo;
    }


    // Remove o elemento do topo da pilha.
    void pop() {
      if(isEmpty()){
        std::cout << "A pilha está vazia." << std::endl;
        return;
      }
      No* temp = top;
      top = top->next;
      delete temp;
    }


    // Retorna o elemento do topo da pilha.
    T& peek(){
        if (isEmpty()) {
            throw std::runtime_error("A pilha está vazia.");
        }
        return top->valor;
    }
    
};

