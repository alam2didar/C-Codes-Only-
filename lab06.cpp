#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int d);

int main ()
{    
  srand(time(0));
  int dice, roll;
  dice =  rollDice(roll);
  
  while(dice!=7&&dice!=11&&dice!=2&&dice!=3&&dice!=12&&dice!=4&&dice!=5&&dice!=6&&dice!=8&&dice!=10)
  {
          
  dice =  rollDice(roll);
  }
  if (dice == 7||dice == 11)
    cout << "The sum is " << dice << "     You win!\n";  
  else if (dice == 2||dice==3||dice==12)
    cout << "The sum is " << dice << "     You loose\n";  
  else
  {
    cout << "The sum is " << dice<< endl;
    cout << "No winner.  ";    

    cout << "Your set point is " << dice << endl;
  
    
    int setpoint = dice;
    dice = rollDice(roll);
    while (dice!=setpoint&&dice!=7&&dice!=2&&dice!=3&&dice!=12)
    {
      cout << "The sum is " << dice << "    No winner--Rollagain\n";
      dice = rollDice(roll);
      }	   
      if (dice == setpoint)
	cout << "The sum is " << setpoint << "   You win!\n";
      else if (dice==2||dice==3||dice==7||dice==12)
	cout << "The sum is " << dice << "    You loose!\n";
  }

  cout <<  "Do you want to play again?(Y/N)\n";
  cin >> char c ;
  if (c== 'Y')
 
return 0;
}


int rollDice(int d)

{
  int sum;
  int r1, r2, rand_1, rand_2;    
      r1 = rand()%6+1;
      r2 = rand()%6+1;
      return r1+r2;
}
