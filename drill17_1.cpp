#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
	int* tenInts = new int[10];
	
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << " = " << tenInts[i] << endl;
		
	//delete[] tenInts;

	return 0;

}
