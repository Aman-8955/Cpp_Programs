#include <iostream>
using namespace std;
class sample
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void setVal()
    {
        x = 1;
        y = 2;
        z = 3;
    }
};
class A : private sample
{
public:
    void showVal()
    {
        setVal();
        cout << endl
             << "In A values:- " << y << "  " << z;
    }
};
class B : protected sample
{
public:
    void showVal()
    {
        setVal();
        cout << endl
             << "In B values:- " << y << "  " << z;
    }
};
class C : public sample
{
public:
    void showVal()
    {
        cout << endl
             << "In C values:- " << y << "  " << z;
    }
};
int main()
{
    sample ob;
    A oba;
    B obb;
    C obc;
    ob.setVal();
    // oba.setVal();
    // obb.setVal();
    obc.setVal();
    oba.showVal();
    obb.showVal();
    obc.showVal();
    return 0;
}