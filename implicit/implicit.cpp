#include <iostream>
using std::cout;
using std::endl;

class MyExplicitClass
{
public:
    explicit MyExplicitClass(int par1);
};

MyExplicitClass::MyExplicitClass(int par1)
{
    cout << __PRETTY_FUNCTION__ << " int constructor got " << par1 << endl;
}

class MyClass
{
private:
    /* data */
public:
    MyClass(int par1);
};

MyClass::MyClass(int par1)
{
    cout << __PRETTY_FUNCTION__ << " int constructor got " << par1 << endl;
}

int main(int argc, char const *argv[])
{
    //MyClass myClass = 1; //err
    MyExplicitClass mec2(1);
    MyClass mc1 = 1;
    MyClass mc2(1);
    return 0;
}
