#include<iostream>
using namespace std;
int main()
{
	int C ;
	cout << "Enter Celcius temperature : ";
	cin >> C;
	cout << C << " Celcius " << " is " << ( C*1.8) + 32 << " Fahrenheit " << endl;
	cout << "Now weather on Thailand is " << ((( C*1.8) + 32 > 70)? " HOT! ":" COOL! " ) << endl;
	return(0);
}