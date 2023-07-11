#include <iostream>
using namespace std;

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

struct Lista {
  int *vetor;
  int tamanho;
  int capacidade;

  void inicializaVetor(int x) {
    tamanho = 0;
    capacidade = x;
    vetor = new int[x];
  }

  int push_front(int valor) {
    if (tamanho == capacidade) {
      cout << "Tamanho máximo já atingido\n";
      return -1;
    } 
    for (int i = tamanho; i > 0; i--) {
      vetor[i] = vetor[i-1];
    }
    vetor[0] = valor;
    tamanho++;
    return 1;
  }

  int push_back(int valor) {
    if (tamanho == capacidade) {
      cout << "Tamanho máximo já atingido\n";
      return -1;
    } 
    vetor[tamanho] = valor;
    tamanho++;
    return 1;
  }

  int insert(int index, int valor) {
    if (tamanho == capacidade) {
      cout << "Tamanho máximo já atingido\n";
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

  int find(int chave) {
    for (int i = 0; i < tamanho; i++) {
      if (chave == vetor[i]) {
        cout << "O valor está na posição " << i << endl;
        return i;
      }
    }
    cout << "Esse valor não está na lista" << endl;
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
          int temp = vetor[j];
          vetor[j] = vetor[j+1];
          vetor[j+1] = temp;
        }
      }
    }
  }

  void reverse() {
    for (int i = 0; i < tamanho / 2; i++) {
      int temp = vetor[i];
      vetor[i] = vetor[tamanho - i - 1];
      vetor[tamanho - i - 1] = temp;
    }
  }

  void imprime() {
    for (int i = 0; i < tamanho; i++) {
      cout << vetor[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Lista vetor;
  int n, max, op, pos = 1;
  cout << "Qual é a capacidade máxima da sua lista?" << endl;
  cin >> max;
  cout << "Quantos elementos deseja inserir?" << endl;
  cin >> n;

  vetor.inicializaVetor(max);

  for (int i = 0; i < n; i++) {
    int elemento = 0;
    cout << "Adicione o " << pos << "º elemento: ";
    cin >> elemento;
    vetor.push_back(elemento);
    pos++;
  }

  cout << endl << "Essa é sua lista:" << endl;
  vetor.imprime();

  cout << endl << "Que operação deseja fazer?" << endl
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
    cout << "=======================================\n";
    cout << "Informe qual operação deseja fazer: \n";
    cin >> op;
    cout << endl;

    if (op == -1) break;

    system(CLEAR_COMMAND);

    switch (op) {
      case 1: {
        int valor; 
        cout << "Qual valor deseja inserir na frente da lista? "; 
        cin >> valor; 
        vetor.push_front(valor); 
        vetor.imprime();
        break;
      }
      
      case 2: {
        int valor; 
        cout << "Qual valor deseja inserir no fim da lista? "; 
        cin >> valor; 
        vetor.push_back(valor); 
        vetor.imprime();
        break;
      }
   
      case 3: {
        int valor, index; 
        cout << "Em qual posição você quer inserir um valor? "; 
        cin >> index; 
        cout << "Qual valor deseja inserir na posição " << index << " da lista? "; 
        cin >> valor; 
        vetor.insert(index, valor); 
        vetor.imprime();
        break;
      }

      case 4: {
        cout << "Lista com o primeiro valor excluído: "; 
        vetor.pop_front(); 
        vetor.imprime();
        break;
      }

      case 5: {
        cout << "Lista com o último valor excluído: "; 
        vetor.pop_back(); 
        vetor.imprime();
        break;
      }
      
      case 6: {
        int index; 
        cout << "Em qual posição você quer excluir um valor? ";  
        cin >> index;
        cout << "Lista com o valor da posição " << index << " excluído: " << endl; 
        vetor.removeAt(index); 
        vetor.imprime();
        break;
      }
      
      case 7: {
        cout << "O tamanho da lista é " << vetor.sizeOf() << endl; 
        break;
      }
      
      case 8: {
        int valor; 
        cout << "Qual elemento deseja procurar na lista? ";  
        cin >> valor;
        vetor.find(valor); 
        break;
      }
      
      case 9: {
        cout << "Todos os elementos foram removidos" << endl;
        vetor.Delete();
        vetor.imprime();
        break;
      }
      
      case 10: {
        cout << "Lista ordenada de forma crescente:" << endl;
        vetor.sort();
        vetor.imprime();
        break;
      }
      
      case 11: {
        cout << "Lista ordenada de forma decrescente:" << endl;
        vetor.reverse();
        vetor.imprime();
        break;
      }
    }

    cout << "Pressione qualquer tecla para continuar...";
    cin.ignore();
    cin.get();

    system(CLEAR_COMMAND);

    cout << endl << "Que operação deseja fazer?" << endl
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

  cout << "Programa finalizado." << endl;

  return 0;
}
