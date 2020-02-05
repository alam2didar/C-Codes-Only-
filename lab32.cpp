#include <iostream>
using namespace std;

int main () {

	cout << "Convert amount currency_1 to currency_2" << endl;
	cout << "Type your desired amount and currency in the given format: " << endl;
 

double amount;
char cr, cr2;
string str1, str2, a, b, e, d, p, c, z1, z2, u;
e = "Euros";
d = "Dollars";
u = "US";
p = "Pounds";
c = "Canadian";
cin >> str1 >>  amount >> a >> str2 >> b;

	if ((a == (d)(u))  && (b == e)) {
		cout << amount* 0.73346 << " Euros" << endl;
	}	
	if ((a == e) && (b == d)) {
		cout << amount/ 0.73346 << " Dollars" << endl;
	}
  	if ((a == d) && (b == p)) {
		cout << amount* 0.49566 << " Pounds" << endl;
	}
	if ((a == p) && (b == d)){
		cout << amount/ 0.49566 << " Dollars" << endl;
	}
	if ((a == e) && (b == p)){
		cout << amount* 0.7925 << " Pounds" << endl;
	}
	if ((a == p) && (b == e)){
		cout << amount/ 0.7925 << " Euros" << endl;
	}
	if (( a == d) && ( b == c)){
		cout << amount*1.0534 << " Canadian Dollars" << endl;
	}
      	if ((a == c) && (b == d)){
		cout << amount/1.0534 << " Canadian Dollars" << endl;
	}
 	if ((a == c) && (b == e)){
		cout << amount* 0.8008 << " Euros" << endl;
	}
    	if ((a == e) && (b == c)){
		cout << amount/ 0.8008 << " Canadian Dollars" << endl;
	}
     	if ((a == c) && (b == p)){
		cout << amount*0.6346 << " Pounds" << endl;
	}
      	if ((a == p) && (b == c)){
		cout << amount/0.6346 << " Canadian Dollars" << endl;
	}



return 0;
}
