#include <iostream>
using namespace std;

template <class T>
T maximum(T x, T y)
{
  return x > y ? x : y;
}

int main()
{
  cout << maximum(1, 2) << endl;
  cout << maximum(1.1, 2.2) << endl;
  return 0;
}