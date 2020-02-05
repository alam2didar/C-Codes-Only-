#include <iostream>
#include <fstream>

using namespace std;


struct Data
{
  int** acc;
  char s1, s2;
  int a,b;
};

Data readData(Data &mydata, char&, char&, int&);
void print(Data mydata, char row, char col, int count);

  int main()

{
  Data mydata;
  char row,col;
  int count=0;
  // Get file name and open file
  mydata=readData(mydata, row, col, count);
  cout << "Welcome to MIDN Alam's (150084) accident analyzer\n";

  print(mydata, row, col, count);
  return 0;

}


Data readData(Data &mydata, char &row, char &col, int &count){
  string junk;
  char p ,q;
  ifstream fin("accidents.txt");
  fin>>mydata.a>>mydata.b;
  mydata.acc=new int*[mydata.a];
  for(int i = 0; i < mydata.a; i++)
    mydata.acc[i] = new int[mydata.b];
  
  while(fin>>p>>junk>>q>>junk){
      mydata.acc[p-'L'][q-'A']++;
  } 

 
  for(int j =0;j < mydata.a; j++){
    for(int k = 0; k < mydata.b; k++){
      if(mydata.acc[j][k]>count){
	count=mydata.acc[j][k] ;
	row=char('L'+j);
	col=char('A'+k);
      }
    }
  }
  return mydata;
}

void print(Data mydata, char row, char col, int count){

  for(int j =0;j < mydata.a; j++){
    cout<<char('L'+j)<<" ";
    for(int k = 0; k < mydata.b; k++){
      cout<<mydata.acc[j][k]<< " " ;
    }
    cout<<endl;
  }
  cout<<"  ";
  for(int p=0; p<mydata.b;p++)
    cout<<char('A'+p)<<" ";
  cout<<endl;

  cout<<"Worst intersection: " <<row<< " & " << col << " Streets ("<<count<< " accidents)\n:";
  return;
}
