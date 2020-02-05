#include <iostream>
#include <fstream>

using namespace std;

void readPoint (istream& cin, double& x, double& y);
void readPoint (ifstream& fin, double& x, double& y);


int main ()
{
  char c;
  double x=0, y=0;
  
  ifstream fin;
  cout << "(u)ser input or (f)ile?\n";
  cin >> c; 
  if(c=='u')
  {
    cout << "Enter point: ";
    readPoint(cin, x, y);
  } 
  if(c=='f')
  {
    cout << "Filename: " ;
  

    readPoint(fin, x, y);
  }


  cout << "x = " << x << ", ";

  cout << "y = " << y << endl;

  return 0;
}

void readPoint (istream& cin, double& x, double& y)
{
  char ch;
  cin >> ch  >> x >> ch >> y >> ch;

  return;


}

void readPoint (ifstream& fin, double& x, double& y)
{
  char ch;
  string fname;
  cin >> fname;
  fin.open(fname.c_str());
  fin >> ch  >> x >> ch >> y >> ch;

  return;



}
