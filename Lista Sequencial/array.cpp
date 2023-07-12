#include <iostream>
#include <cstdlib>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

template<typename T>
struct Lista {
  T *vetor;
  int tamanho;
  int capacidade;

  void inicializaVetor(int x) {
    tamanho = 0;
    capacidade = x;
    vetor = new T[x];
  }

  int push_front(const T& valor) {
    if (tamanho == capacidade) {
      std::cout << "Tamanho máximo já atingido\n";
      return -1;
    } 
    for (int i = tamanho; i > 0; i--) {
      vetor[i] = vetor[i-1];
    }
    vetor[0] = valor;
    tamanho++;
    return 1;
  }

  int push_back(const T& valor) {
    if (tamanho == capacidade) {
      std::cout << "Tamanho máximo já atingido\n";
      return -1;
    } 
    vetor[tamanho] = valor;
    tamanho++;
    return 1;
  }

  int insert(int index, const T& valor) {
    if (tamanho == capacidade) {
      std::cout << "Tamanho máximo já atingido\n";
      return -1;
    } 
    for (int i = tamanho; i > index; i--) {
      vetor[i] = vetor[i-1];
    }
    vetor[index] = valor;
    tamanho++;
    return 1;
  }

  int pop_front() {
    if (tamanho == 0) return -1;
    for (int i = 0; i < tamanho - 1; i++) {
      vetor[i] = vetor[i + 1];
    }
    tamanho--;
    return 1;
  }

  int pop_back() {
    if (tamanho == 0) return -1;
    tamanho--;
    return 1;
  }

  int removeAt(int index) {
    if (index < 0 || index >= tamanho) return -1;
    for (int i = index; i < tamanho - 1; i++) {
      vetor[i] = vetor[i + 1];
    }
    tamanho--;
    return 1;
  }

  int sizeOf() {
    return tamanho;
  }

  int find(const T& chave) {
    for (int i = 0; i < tamanho; i++) {
      if (chave == vetor[i]) {
        std::cout << "O valor está na posição " << i << std::endl;
        return i;
      }
    }
    std::cout << "Esse valor não está na lista" << std::endl;
    return -1;
  }

  int Delete() {
    tamanho = 0;
    delete[] vetor;
    return 0;
  }

  void sort() {
    for (int i = 0; i < tamanho - 1; i++) {
      for (int j = 0; j < tamanho - i - 1; j++) {
        if (vetor[j] > vetor[j+1]) {
          T temp = vetor[j];
          vetor[j] = vetor[j+1];
          vetor[j+1] = temp;
        }
      }
    }
  }

  void reverse() {
    for (int i = 0; i < tamanho / 2; i++) {
      T temp = vetor[i];
      vetor[i] = vetor[tamanho - i - 1];
      vetor[tamanho - i - 1] = temp;
    }
  }

  void imprime() {
    for (int i = 0; i < tamanho; i++) {
      std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  Lista<int> vetor;
  int n, max, op, pos = 1;
  std::cout << "Qual é a capacidade máxima da sua lista?" << std::endl;
  std::cin >> max;
  std::cout << "Quantos elementos deseja inserir?" << std::endl;
  std::cin >> n;

  vetor.inicializaVetor(max);

  for (int i = 0; i < n; i++) {
    int elemento = 0;
    std::cout << "Adicione o " << pos << "º elemento: ";
    std::cin >> elemento;
    vetor.push_back(elemento);
    pos++;
  }

  std::cout << std::endl << "Essa é sua lista:" << std::endl;
  vetor.imprime();

  std::cout << std::endl << "Que operação deseja fazer?" << std::endl
       << " 1. Inserir um valor na frente da lista\n"
       << " 2. Inserir um valor no final da lista\n"
       << " 3. Inserir um valor em uma determinada posição da lista\n"
       << " 4. Excluir o primeiro valor da lista\n"
       << " 5. Excluir o último valor da lista\n"
       << " 6. Remover um determinado elemento\n"
       << " 7. Retornar o tamanho atual da lista\n"
       << " 8. Buscar um elemento na lista e retornar o índice\n"
       << " 9. Remover todos os elementos da lista\n"
       << "10. Ordenar a lista de forma crescente\n"
       << "11. Ordenar a lista de forma decrescente\n"
       << "-1. Sair do programa\n";

  while (true) {
    std::cout << "=======================================\n";
    std::cout << "Informe qual operação deseja fazer: \n";
    std::cin >> op;
    std::cout << std::endl;

    if (op == -1) break;

    system(CLEAR_COMMAND);

    switch (op) {
      case 1: {
        int valor; 
        std::cout << "Qual valor deseja inserir na frente da lista? "; 
        std::cin >> valor; 
        vetor.push_front(valor); 
        vetor.imprime();
        break;
      }
      
      case 2: {
        int valor; 
        std::cout << "Qual valor deseja inserir no fim da lista? "; 
        std::cin >> valor; 
        vetor.push_back(valor); 
        vetor.imprime();
        break;
      }
   
      case 3: {
        int valor, index; 
        std::cout << "Em qual posição você quer inserir um valor? "; 
        std::cin >> index; 
        std::cout << "Qual valor deseja inserir na posição " << index << " da lista? "; 
        std::cin >> valor; 
        vetor.insert(index, valor); 
        vetor.imprime();
        break;
      }

      case 4: {
        std::cout << "Lista com o primeiro valor excluído: "; 
        vetor.pop_front(); 
        vetor.imprime();
        break;
      }

      case 5: {
        std::cout << "Lista com o último valor excluído: "; 
        vetor.pop_back(); 
        vetor.imprime();
        break;
      }
      
      case 6: {
        int index; 
        std::cout << "Em qual posição você quer excluir um valor? ";  
        std::cin >> index;
        std::cout << "Lista com o valor da posição " << index << " excluído: " << std::endl; 
        vetor.removeAt(index); 
        vetor.imprime();
        break;
      }
      
      case 7: {
        std::cout << "O tamanho da lista é " << vetor.sizeOf() << std::endl; 
        break;
      }
      
      case 8: {
        int valor; 
        std::cout << "Qual elemento deseja procurar na lista? ";  
        std::cin >> valor;
        vetor.find(valor); 
        break;
      }
      
      case 9: {
        std::cout << "Todos os elementos foram removidos" << std::endl;
        vetor.Delete();
        vetor.imprime();
        break;
      }
      
      case 10: {
        std::cout << "Lista ordenada de forma crescente:" << std::endl;
        vetor.sort();
        vetor.imprime();
        break;
      }
      
      case 11: {
        std::cout << "Lista ordenada de forma decrescente:" << std::endl;
        vetor.reverse();
        vetor.imprime();
        break;
      }
    }

    std::cout << "Pressione qualquer tecla para continuar...";
    std::cin.ignore();
    std::cin.get();

    system(CLEAR_COMMAND);

    std::cout << std::endl << "Que operação deseja fazer?" << std::endl
         << " 1. Inserir um valor na frente da lista\n"
         << " 2. Inserir um valor no final da lista\n"
         << " 3. Inserir um valor em uma determinada posição da lista\n"
         << " 4. Excluir o primeiro valor da lista\n"
         << " 5. Excluir o último valor da lista\n"
         << " 6. Remover um determinado elemento\n"
         << " 7. Retornar o tamanho atual da lista\n"
         << " 8. Buscar um elemento na lista e retornar o índice\n"
         << " 9. Remover todos os elementos da lista\n"
         << "10. Ordenar a lista de forma crescente\n"
         << "11. Ordenar a lista de forma decrescente\n"
         << "-1. Sair do programa\n";
  }

  std::cout << "Programa finalizado." << std::endl;

  return 0;
}
