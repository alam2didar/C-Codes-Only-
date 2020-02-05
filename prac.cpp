//Midnn Alam (150084)
#include <iostream>
#include <fstream>

using namespace std;


struct Data//1st struct
{
  int** acc;
  int a,b;
};

struct foul//2nd struct
{
  char row,col;
  int count;
};

//prototypes
Data readData(Data &mydata, foul& f);
void print(Data mydata, foul f);
ostream& operator<<(ostream& out, foul f);

int main()
{
  Data mydata;
  foul f;
  char row,col;
  //open file
  
  mydata=readData(mydata, f);
  
  cout << "Welcome to MIDN Alam's (150084) accident analyzer\n";

  print(mydata, f);
  
  return 0;

}

//definition for readData
Data readData(Data &mydata, foul& f){
  
  string junk;
  char p ,q;
  f.count=0;
  
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
      if(mydata.acc[j][k]>f.count){
	f.count=mydata.acc[j][k] ;
	f.row=char('L'+j);
	f.col=char('A'+k);
      }
    }
  }
  
  return mydata;
}

//definition for print
void print(Data mydata, foul f){

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

  cout<<f;  
  //cout<<"Worst intersection: " <<row<< " & " << col << " Streets ("<<count<< " accidents)\n:";
  return;
}

//overloading
ostream& operator<<(ostream& out, foul f)

{

  return out<<"Worst intersection: " <<f.row<< " & " << f.col << " Streets ("<<f.count<< " accidents)\n:";

}
