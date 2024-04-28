#include <iostream>
using namespace std;

int maximum(int a = 0, int b = 0, int c = 0)
{
  return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
  cout << maximum() << endl;
  cout << maximum(1) << endl;
  cout << maximum(1, 2) << endl;
  cout << maximum(1, 2, 3) << endl;
  return 0;
}