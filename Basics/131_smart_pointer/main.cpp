/*
* Умные указатели. Smart pointers. Изучение С++ для начинающих. Урок #131
* 
* auto_ptr
* unique_ptr
* shared_ptr
*/

#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");

    // устарел, не компилится
    //auto_ptr<int> ap1(new int(5));
    //auto_ptr<int> ap2(ap1);

    //unique_ptr<int> ap1(new int(5));
    //unique_ptr<int> ap2(ap1); // не скомпилируется
    //unique_ptr<int> ap2;
    //ap2 = move(ap1);

    // лучший умный указатель
    // удаляет указатель только когда обьект класа остался один
    shared_ptr<int> p1(new int(5));
    shared_ptr<int> p2(p1);

    // weak_ptr
   
    return 0;
}