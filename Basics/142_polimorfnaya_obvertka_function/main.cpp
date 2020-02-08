/*
* std::function | Полиморфная обёртка функции | Изучение С++ для начинающих. Урок #142
+ std::function
* что то похожее на указатель на функцию но из мира ооп
*/

#include <iostream>
#include <functional>

using namespace std;

void Foo()
{
    cout << "Foo()" << endl;
}

int Foo2(int a)
{
    cout << "int Foo2(int)" << endl;
    return a;
}

int Foo3(int a)
{
    cout << "int Foo3(int)" << endl;
    return a;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    function<void()> f;
    function<int(int)> f2;

    f = Foo;
    f2 = Foo2;

    f();
    f2(10);

    f2 = Foo3;

    f2(10);
    
    return 0;
}