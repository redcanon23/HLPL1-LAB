#include "std_lib_facilities.h"

int main()
{
	int Array1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	
	vector<int> Vector1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	list<int> List1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	int Array2[10];
	
	copy(begin(Array1), end(Array1), begin(Array2));
	
	vector<int> Vector2 = Vector1;
	
	list<int> List2 = List1;

	/*for(auto e : Array2)
		cout << e << ' ';
	cout << endl;*/
	for (int& i : Array1)
		i += 2;	//for each loop
	
	for (int& i : Vector1)
		i += 3;
		
	for (int& i : List1)
		i += 5;	
	
	return 0;

}
