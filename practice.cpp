#include <iostream>

using namespace std;

int glo = 7;
void sum()
{
  int a;
  cout << glo;
}
int main()
{
  int a = 4, b = 2;

  int glo = 67;
  glo = 8 ;
  char c = 'p';
  float pi = 3.14;
  bool t = true;
  sum();
  cout << glo;
  cout<< t ;
  return 0;
}