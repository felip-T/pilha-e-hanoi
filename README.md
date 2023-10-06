# Classe Pilha e resolução da torre de Hanói
O código é composto pelos arquivos hanoi.h, pilha.h, hanoi.cpp e main.cpp. Adicionalmente, um arquivo Makefile com instruções para compilação em linux (GCC) foi implementado. O repositório possuí também um arquivo "exemplo.txt", com um exemplo de saída do programa.

Utilização:
```cpp
    hanoi <número de discos>
```
# pilha.h
Foi implementadas uma classe template "Pilha".
Os métodos implementados são:

- Adicionar na pilha
```cpp
    void push()
```
- Remover da pilha
```cpp
    T pop()
```
- Retornar o primeiro elemento da pilha sem retira-lo
```cpp
    T &peak()
```
- Inverter a posição dos dois primeiros elementos da pilha
```cpp
    void swap()
```
- Ver se a pinha está vazia
```cpp
    bool empty()
```
- Ver se a pilha está cheia
```cpp
    bool full()
```
- Retornar a capacidade da pilha
```cpp
    unsigned capacity()
```
- Retornar o tamanho atual da pilha
```cpp
    unsigned size()
```
Foram implementados também um construtor, destrutor e construtor de cópia.

# hanoi.h
A classe hanoi utiliza da classe pilha para simular e resolver um jogo de hanói. O tamanho do jogo é passado como argumento para o construtor da classe.
O único método público da classe resolve o jogo e imprime passo a passo da resolução.
```cpp
    void solve()
```
O arquivo hanoi.cpp possuí a implementação dos métodos definidos em hanoi.h

# main.cpp
Possuí a função principal do programa, faz uma validação do argumento de linha de comando e resolve a torre de hanói com o número de discos especificado.

