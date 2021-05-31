#include "std_lib_facilities.h"

struct Point
{
	int x;
	int y; 
}

istream& operator >> (istream& is, Point& r)
{
	char ch1;
	if (is>>ch1 && ch1!='(') {                              
            is.unget();
            is.clear(ios_base::failbit);
            return is;
          }
 	char ch2, ch3;
          int x;
          int y;
          is >> x >> ch2 >> y >> ch3;
          if (!is || ch2!=',' || ch3!=')') error("bad reading");      
          r.x = x;
          r.y = y;
          return is;
}



int main()
{
	vector<Point> original_points;
	cout << "Please enter seven points using following format (x,y): \n";
	for (int i= 0; i<7; i++)
	{
		Point p;
		cout << "Enter coordinates of point " << i+1; << "and then press enter:";
		cin >> p;
		original_points.pushback(p);
	} 

}

 string fname = "mydata.txt";
    ofstream ost { fname };
    if (!ost) error("could not open file ", fname);

    for (Point p : original_points)
        ost << p;
    ost.close();

    // 5. Read the file back into a vector
    vector<Point> processed_points;
    fill_from_file(processed_points, fname);

    for (Point p : processed_points)
        cout << p;
    cout << '\n';

    if (original_points.size() != processed_points.size())
        cout << "Something's wrong!\n";
}
catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Something terrible has happened!\n";
    return 2;
}
