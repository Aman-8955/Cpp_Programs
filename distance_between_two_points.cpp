#include <iostream>
#include <cmath>
using namespace std;
class Points
{
    int x, y;

public:
    Points()
    {
    }
    Points(int a, int b)
    {
        x = a;
        y = b;
    }
    void distance(Points &aob1, Points &aob2)
    {
        int temp;
        temp = pow(aob2.x - aob1.x, 2) + pow(aob2.y - aob1.y, 2);
        cout << endl
             << "Distance=" << sqrt(temp);
    }
};
int main()
{
    Points point1(3, 0);
    Points point2(8, 0);
    // Points Resultob;
    point1.distance(point1, point2);
    return 0;
}