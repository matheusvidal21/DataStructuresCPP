#include <iostream>

template <typename T>
class Deque {
private:
    struct Node {
    T value;
    Node* prev;
    Node* next;
        Node(const T& val) : value(val), prev(nullptr), next(nullptr) {}
    };

    Node* front;
    Node* back;

public:
    Deque() : front(nullptr), back(nullptr) {}

    ~Deque() {
        clear();
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    void pushFront(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void pushBack(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
    }

    void popFront() {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            back = nullptr;
        } else {
            front->prev = nullptr;
        }

        delete temp;
    }

    void popBack() {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* temp = back;
        back = back->prev;

        if (back == nullptr) {
            front = nullptr;
        } else {
            back->next = nullptr;
        }

        delete temp;
    }

    const T& getFront() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque está vazio.");
        }
        return front->value;
    }

    const T& getBack() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque está vazio.");
        }
        return back->value;
    }

    void clear() {
        Node* current = front;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        front = back = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Deque<int> deque;
    deque.pushFront(3);
    deque.pushFront(2);
    deque.pushFront(1);

    std::cout << "Deque: ";
    deque.print();

    deque.pushBack(4);
    deque.pushBack(5);
    deque.pushBack(6);

    std::cout << "Deque: ";
    deque.print();

    std::cout << "Frente: " << deque.getFront() << std::endl;
    std::cout << "Trás: " << deque.getBack() << std::endl;

    deque.popFront();
    deque.popBack();

    std::cout << "Deque após popFront() e popBack(): ";
    deque.print();

    deque.clear();

    std::cout << "Deque após clear(): ";
    deque.print();

    return 0;
}
