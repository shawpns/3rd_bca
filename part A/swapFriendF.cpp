#include <iostream>
using namespace std;

class Test
{
private:
    int x, y, temp;

public:
    void input()
    {
        cout << "Enter two numbers:";
        cin >> x >> y;
    }

    friend void swap(Test &t);

    void display()
    {
        cout << "After swap x is:" << x;
        cout << "\nAfter swap y is:" << y;
    }
};

void swap(Test &t)
{
    t.temp = t.x;
    t.x = t.y;
    t.y = t.temp;
}

int main()
{

    Test t;
    t.input();

    swap(t);
    t.display();

    return 0;
}