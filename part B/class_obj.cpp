#include <iostream>

using namespace std;

class person
{
public:
    string name;
    int number;
};

int main()
{
    person obj;
    cout << "Enter the Name :";
    cin >> obj.name;

    cout << "Enter the Number :";
    cin >> obj.number;
    cout << obj.name << ": " << obj.number << endl;
    return 0;
}