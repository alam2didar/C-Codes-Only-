#include <iostream>
using namespace std;

int main () 
{
  cout << "Welcom to MIDN Alam's (150084) program." << endl;
  cout << "Enter room dimensions: " << endl;
  char f;
  double a, b, area1, area2, tarea;
  cin >> f;
  tarea =0;
while (f != 'X')
  { 
   cin >> a >> b;
   if ( f == 'I')
   {
    area1 = a*b/144;
    cout << "Found a room with area " << area1 << endl;
    tarea = tarea +area1;
   }


else 
   { 
    area2 = a*b;
    cout << "Found a room with area " << area2 << endl;
    tarea = tarea +area2; 
   }

   cin >> f;

}


cout << "Total Square feet is: " << tarea << endl;
cout << "Bye!" << endl;
 
 return 0;
}
