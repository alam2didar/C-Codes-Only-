#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
  cout << "Welcome to MIDN Alam's(150084) Program"<< endl;
  cout << "Enter Filename: ";
  double avg, navg,a1,a2;
  int a ,b,point,pt,salary,sal;
  salary=0;
  point=0;
  string filename, s,t,name,mvp;
  char ch;
  cin >> filename;  
  ifstream fin(filename.c_str());
  while (fin>> a )
  { fin >> s >>  b >> t;
    cout << "Number of games in season:"<<b<< endl;  
  
    while (fin>> name)
    { point=0;
      fin >> ch >>sal;
      for (int i=0; i<b;i++)
      {
	
	fin >> pt;
	point= point+ pt;
        
      }
      salary = salary+sal;
      double avg= double(point)/b;
      a2 = avg;

  
   
      cout<<  "Player "<< name<<" had "<< (double(point)/b) << " average per game."<< endl;
     
}
  }
   double avg1= double(point)/b;
a1 = avg1; 
      if (a2>a1)
      {
	mvp = name;
	navg =a2;
      } 
 
 cout << "Total salary for team: " << salary << endl;
 cout<<  "MVP player was "<< mvp << " with " << navg <<" average."<< endl;
 return 0;
}
