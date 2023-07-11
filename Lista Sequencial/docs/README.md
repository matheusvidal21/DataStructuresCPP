# Lista Sequencial (array)

#### A Lista Sequencial é uma estrutura de dados que organiza os elementos de forma contígua na memória. Nesta implementação, a lista sequencial é representada por um vetor dinâmico. [Clique aqui](../array.cpp) para ver a implementação da Lista Sequencial.

# Funcionalidades
A implementação da lista sequencial possui as seguintes funcionalidades:

1. `push_front()`: Permite adicionar um elemento no início da lista.

2. `push_back()`: Permite adicionar um elemento no final da lista.

3. `insert()`: Permite adicionar um elemento em uma posição determinada da lista.

4. `pop_front()`: Remove o primeiro elemento da lista.

5. `pop_back()`: Remove o último elemento da lista.

6. `removeAt()`: Remove um elemento em uma posição determinada da lista.

7. `sizeOf()`: Retorna o tamanho atual da lista.

8. `find()`: Procura por um elemento na lista e retorna o seu índice.

9. `Delete()`: Remove todos os elementos da lista.

10. `sort()`: Ordena os elementos da lista em ordem crescente.

11. `reverse()`: Ordena os elementos da lista em ordem decrescente.

# Utilização
A lista sequencial pode ser utilizada da seguinte forma:
### 1. Inicialize a lista com uma capacidade máxima:
```
Lista lista;
int max;
cout << "Qual é a capacidade máxima da sua lista?" << endl;
cin >> max;
lista.inicializaVetor(max);
```
### 2. Insira elementos na lista:
```
int elemento;
cout << "Quantos elementos deseja inserir?" << endl;
cin >> n;

for (int i = 0; i < n; i++) {
  int elemento = 0;
  cout << "Adicione o " << i+1 << "º elemento: ";
  cin >> elemento;
  lista.push_back(elemento);
}
```
### 3. Realize operações na lista conforme desejado:
```
int op;
while (true) {
  cout << "=======================================\n";
  cout << "Informe qual operação deseja fazer: \n";
  cin >> op;
  cout << endl;

  if (op == -1) break;

  switch (op) {
    case 1: 
    ....
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
```

# Observações
- A implementação da lista sequencial neste exemplo utiliza int como tipo de dado. Você pode modificar o tipo de dado da lista sequencial de acordo com as suas necessidades, alterando a declaração da estrutura Lista e adaptando as operações de acordo.

- Este exemplo é uma implementação básica da lista sequencial. Para aplicações mais complexas ou que exigem um desempenho melhor, pode ser necessário realizar otimizações adicionais ou utilizar outras estruturas de dados mais adequadas.

- Certifique-se de gerenciar corretamente a memória alocada ao utilizar a lista sequencial. Utilize a função Delete() para liberar a memória alocada pela lista quando não for mais necessária.
