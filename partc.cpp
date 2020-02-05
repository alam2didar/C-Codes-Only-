#include <iostream>
using namespace std;

int main () 
{
cout << "Welcom to MIDN Alam's (150084) program." << endl;
cout << "Enter room dimensions: " << endl;
char f;
double a, b, area;
cin >> f;

while (f != 'X')
{ 
   cin >> a >> b;

   
  

  if ( f == 'I')
  {
   area = a*b/144;
  cout << "Found a room with area " << area << endl;
  }


else { 
    area = a*b;
   cout << "Found a room with area " << area << endl;
   }

  cin >> f;

}

cout << "Bye!" << endl;
 
 return 0;
}
