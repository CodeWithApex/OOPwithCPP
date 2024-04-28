#include <iostream>
using namespace std;

int add(int x, int y)
{
  return x + y;
}

float add(float x, float y)
{
  return x + y;
}

int add(int x, int y, int z)
{
  return x + y + z;
}

string add(string x, string y)
{
  return x + y;
}

string add(string x, string y, string z)
{
  return x + y + z;
}

int main()
{
  cout << add(1, 2) << endl;
  cout << add(1.1f, 2.2f) << endl;
  cout << add(1, 2, 3) << endl;
  cout << add("OOP", "withCPP") << endl;
  cout << add("Object", "-Orineted", "-Programming") << endl;

  return 0;
}