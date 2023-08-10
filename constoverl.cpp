#include <iostream>
using namespace std;
class Construct
{
    int a;
    int b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Construct operator+(Construct ob)
    {
        ob.a = a + ob.a;
        ob.b = b + ob.b;
    }
    void printData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Construct c1, c2, c3;
    c1.setData(4, 5);
    c2.setData(1, 4);
    c3 = c1 + c2;
    c3.printData();
    // c1.printData();
    // c2.printData();
    // c1.operator+(c2);
    // c1.printData();

    return 0;
}