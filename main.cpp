#include <iostream>
using namespace std;
class Point
{
private:
	int dep;
	int indep;
public:
//	Point() { dep = 0, indep = 0; } //first
//	Point(int x) { dep = x; indep = 0; } //second
//	Point(int x, int y) { dep = x; indep = y; } //third

	Point(int x =0, int y = 0) :dep(x), indep(y) {}
		void print() { cout << " (x,y)axis are " << dep << ' , ' << indep << " respectively "  ; }
};
int main()
{
Point A,B(7),C(-2, -3);
A.print();
cout << endl;

cout << endl;

B.print();
cout << endl;

cout << endl;

C.print();
cout << endl;

cout << endl;

	system("pause");
		return 0;
}