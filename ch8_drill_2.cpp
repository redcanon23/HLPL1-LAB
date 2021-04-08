#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/* doesnt compile because we cannot assign values to constants */
/*swap_cr(const int& a, const int& b) 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
} */

int main()
{
	int x = 7;
	int y = 9;
	//swap_v(x, y);	// compiles but does not swap because the function uses copies of the argument
	swap_r(x, y);	// compiles and swaps values 
	//swap_v(7, 9);	// compiles but does not swap because function cannot reference original arguments or store value/result of function 
	//swap_r(7, 9);	// doesnt compile because cannot bind non const lvalue reference of type 'int &' to an rvalue of type 'int' */	
	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy);	//compiles but does not swap values because function is working with copies 
	//swap_r(cx, cy);	//doesnt compile because you cannot bind a non const reference to a const object 
	swap_v(7.7, 9.9);	//compiles but does not swap because function cannot reference original arguments or store value/result of function 
	//swap_r(7.7, 9.9);	//doesnt compile because you cannot bind a non const reference to a const object 
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);	//compiles but no swap parameters are copies of x and y so no swap
	//swap_r(dx, dy);	//doesnt compile because of conversion of the double to int the swap function has no values to reference.
	swap_v(7.7, 9.9);	//compiles but no swap because function cannot reference original arguments or store value/result of function
	//swap_r(7.7, 9.9);	//doesnt compile because of conversion of the double to int the swap function has no values to reference.

	cout << "x is now " << x << " and y is now " << y << '\n';
	cout << "cx is now " << cx << " and cy is now " << cy << '\n';
	cout << "dx is now " << dx << " and dy is now " << dy << '\n';
} 
