#include <iostream>
#include <fstream>

using namespace std;
void writeTime(int, ostream& cout);
void writeTime(int, ofstream& fout);


int main ()
{
  int seconds;
  int hr, mm, ss;
  char c;
  cout << "Enter time in seconds: ";
  cin >> seconds;
 
  cout << "(s)creen output or (f)ile?\n";
  cin >> c; 
  if(c=='s')
  {
    writeTime(seconds, cout);
    
    
  } 
  if(c=='f')
  {
    cout << "Filename: " ;
  

    
  }


 
  return 0;
}

void writeTime(int seconds, ostream& cout)
{int hr, mm, ss;

  hr=seconds/3600;
  seconds = seconds -(hr*3600);
  mm = seconds/60;
  ss = seconds-(mm*60);
  if (hr>10 && mm>0 && ss>0)
  cout << hr<< ':'<< mm << ':'<< ss<< endl;
  else if 
  return;

}
