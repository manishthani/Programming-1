#include <iostream>
#include <math.h>
using namespace std;

struct Point{
	double x,y;
};

double distance(const Point& A, const Point& B){
	double n  = A.x - B.x;
	double m = A.y - B.y;
	return sqr (n+m);


}
int main(){
	Point a;
	cin >> a.x >> a.y;
	Point b;
	cin >> b.x >> b.y;
	cout << distance(a,b) << endl;
	
}