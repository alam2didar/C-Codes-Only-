#include <iostream>
#include <fstream>


using namespace std;
//prototypes
int maxIndex(string *array, int size);
void swap (string &word1, string &word2);
void selectionSort(string* &arrayIn, int sizeIn);
string *remwords(string* array, int size);

int main ()
{
  string fname,outfname, words;
  int size=0;  
  cout << "Enter input file name: ";
  cin >> fname;
  //read in the file for the size 
  ifstream fin(fname.c_str());
  while (fin >> words)
  {
    size++;
  }
  

  string* array= new string [size];
  //readin the file in the array
  
  ifstream din(fname.c_str());
  for(int i=0;i<size;i++)
    din>>array[i];
  
  //sort the array
  //array = remwords(array, size);
  selectionSort(array, size);
array = remwords(array, size);
//selectionSort(array, size);
//remwords(array, size);
  
  cout<< "Enter output file name (do not include the .txt suffix): ";
  cin>>outfname;  
  //print out array
  ofstream fout(outfname.c_str());
  for(int i=0;i<size;i++)
    fout<< array[i]<<endl;

  return 0;
}

//send max index
int maxIndex(string *array, int size) {
  int maxIndex = 0;
  for (int i=1; i < size; i++) {
    if (array[maxIndex] < array[i]) {
      maxIndex = i;
    }
    
  }
  return maxIndex;
}
//swap
void swap (string &word1, string &word2) {  
 
  string temp = word1;
  word1 = word2;
  word2 = temp;
}
//selectionsort
void selectionSort(string* &arrayIn, int sizeIn) {
  
  for(int size = sizeIn; size > 1; size--) {
    int k = maxIndex(arrayIn,size);
    swap(arrayIn[k], arrayIn[size-1]);
  }
}

string *remwords(string* array, int size)
{
  string* newarray = new string [size];
  string prev;
  for(int k=0, j=0;k<size;k++, j++)
  {  
    if(array[k]!= prev)
    {
      newarray[j]= array[k];
      prev = array[k];
    }
    
  
  }
  return newarray;
}
