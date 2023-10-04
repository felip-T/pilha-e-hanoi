template <class T> class Pilha {
public:
  Pilha(unsigned n) : top(0), max(n) { arr = new T[max]; }
  Pilha(Pilha<T> &p) : top(p.top), max(p.max) {
    arr = new T[max];
    for (unsigned i = 0; i < max; i++)
      arr[i] = p.arr[i];
  }
  ~Pilha() { delete[] arr; }
  void push(T x) {
    if (full())
      throw 2;
    arr[top++] = x;
  }
  T pop() {
    if (empty())
      throw 1;
    return arr[--top];
  }
  void swap() {
    T aux = arr[top - 1];
    arr[top - 1] = arr[top - 2];
    arr[top - 2] = aux;
  }
  T &peak() {
    if (empty())
      throw 1;
    return arr[top - 1];
  }
  bool empty() { return top == 0; }
  bool full() { return top == max; }
  unsigned size() { return top; }
  unsigned capacity() { return max; }

private:
  T *arr;
  unsigned top;
  unsigned max;
};
