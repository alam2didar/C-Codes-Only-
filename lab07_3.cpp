#include <iostream>

using namespace std;

//prototype
void arith(int, int, int);


int main()
{
  int a,b,n;
  cout << "Enter a, b and n: " ;
  cin >> a >> b >> n;
  n=n-1;
  arith(a, b, n);//call arith
  cout << endl;
  return 0;
}

//a + b(i-1) for i = 1 to n.
//function definition
void arith(int a, int b, int n)
{
  if (n == 0)//base case
  {
    cout << a << " " ;
    return;
  }
  else
  { 
    arith(a, b, (n-1));//recursive case
    cout << a+n*b << " ";
  }
}
