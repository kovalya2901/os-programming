#include iostream>
#include cmath>
using namespace std;

struct Point {
double x, y;
};

double areaOfPolygon(Point vertices[], int n) {
double area = 0.0;
int j = n - 1;
for (int i = 0; i < n; i++) {
area += (vertices[j].x + vertices[i].x) * (vertices[j].y - vertices[i].y);
j = i;
}
return abs(area / 2.0);
}

int main() {
int n;
cout << "Enter the number of vertices: ";
cin >> n;
Point vertices[n];
for (int i = 0; i < n; i++) {
cout << "Enter the coordinates of vertex " << i+1 << ": ";
cin >> vertices[i].x >> vertices[i].y;
}
double area = areaOfPolygon(vertices, n);
cout << "The area of the polygon is " << area << endl;
return 0;
}
