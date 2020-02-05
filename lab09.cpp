#include <iostream>
#include<string>

using namespace std;

int main ()
{

  string junk = "0";
  int size;
  cout << "Memory size? ";
  cin >> size;
  string *lastword = new string [size];

cout <<"Enter strings: " ;
 cin >> junk;
 int i = 0;
 while (junk!= "end")
 {
   lastword[i]=junk;
   i = i+1;
   if (i == size )
     i=0;
   cin >> junk; 
}  
 
 
   cout << "Last three words were: ";
   
   for (int j=i+1;j<=size;j++)
     cout << lastword[j]<< " " ;
   for(imt k=0; k<=i;k++)
     cout << lastword[j]<< " "; 
       cout << endl;
 
   return 0;
}
