#include <iostream>

using namespace std;

void writeReverse(istream& cin, ostream& cout);


int main()
{
  writeReverse(cin, cout);

  return 0;
}

void writeReverse(istream& in, ostream& out)
{
  string junk;
  in >> junk;
  if(junk == "end")
  { out << endl;    
    return;
  }
  else 
  { 
    writeReverse(in,out);
    out << junk << " " ;
      
  }
}
