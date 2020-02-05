#include <iostream>
#include <fstream>
using namespace std;

double* readData(string filename, int& days);
double minTemp(double* array, int days, int startday, int stopday);
double hotWeek(double* array, int days, int startday, int stopday, int& hotday);
int main (){
  cout << "Welcome to MIDN Alam's temp calculator (alpha 150084)" << endl;
  int days = 0; char input = 'y';
  int startday, stopday;  int hotday = 0;
  double* array = readData("temps1995.txt", days);
  cout << "Hi we're back in main." << endl;
  cout << "First temp in array: " << array[0]<< endl;
  cout << "Last temp in array: " << array[days-1]<< endl;
  while(input != 'n')
  {
    cout << "Enter start day (use 0 for first day): " ;
    cin >> startday;
    cout << "Enter stop day (use 0 for first day): " ;
    cin >> stopday;

    double mintemp =  minTemp(array, days, startday, stopday);
    cout << "Min temp over that period was: " << mintemp << endl;

    double aVg = hotWeek(array, days, startday, stopday, hotday);
    cout << "For that period hottest week started on day " << hotday << endl;
    cout << "   Average for that week: " << aVg << endl;



    cout << "Try again (y/n)? " ;
    cin >> input;  

  }

  return 0;
}

double* readData(string filename, int& days)
{
  string junk;
  ifstream fin;
  fin .open(filename.c_str());
  fin >> days;
  double* array = new double [days];
  for (int i=0; i < days; i++)
  {
    fin >> junk >> junk >> junk >> array[i];
  }  

  return array;
}


double minTemp(double* array, int days, int startday, int stopday)
{
  double min = array[startday];
  
  for(int i=startday; i<=stopday; i++)
  {
    if(array[i] < min)
      min= array[i];
  }

  return min;
}

double hotWeek(double* array, int days, int startday, int stopday, int& hotday)
{
  double average=0, temp=0, tempavg = 0;
 

  int count =1;
  for (int i = startday; i <= stopday; i++ )
  {
    for (int j = i; j<7; j++ )
    {
      temp = temp + array[j];
    }
    tempavg = temp/7;
    cout << tempavg;
      
    if (tempavg > average )
    {
      average = tempavg;
	
    }
    
    temp =0;
  }

  return average;
}
