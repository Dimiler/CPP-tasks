#include "taskf.h"

using namespace std;

int task11(){
	return 0;
}

int task12(){
	return 0;
}

int task13(){

	using namespace std;
	int a, b, sum = 0, z = 0;
	double sredArif;
	cout << "Enter A> "; cin >> a;
	cout << "Enter B> "; cin >> b;
	for (int i = a; i <= b; i++)
	if (i % 10 == 7)
	{
		sum = sum + i;
		z++;
	}
	if (z != 0)
		sredArif = sum / z;
	cout << "Average of " << a << " and " << b << " that end with 7 are " << sredArif << endl;



	return 0;
}

int task14(){
	return 0;
}

int task15(){
	return 0;
}

int task16(){
	return 0;
}

int task17(){
	return 0;
}

int task18(){
	return 0;
}