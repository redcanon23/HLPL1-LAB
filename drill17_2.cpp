#include "std_lib_facilities.h"

int main()
{
	int n = 7;
	int* p1 = &n;
	
	cout << "n: " << n << "\np1: " << p1 << endl; 
	
	int Array1[7] = { 1, 2, 4, 8, 16, 32, 64 };
	int* p2 = Array1;
	
	cout << "p2: " << p2 << "\nArray1= ";
	for (int i = 0; i < 7; ++i)
		cout <<  i << ' ';
	cout << endl;	
	
	int* p3 = p2;
	
	p2 = p1;
	
	p2 = p3;


	return 0;
}
