/*
* Многопоточность | Потоки | thread | Многопоточное программирование | Уроки | C++ #1
* собирай проект не в wsl !
*/

#include <iostream>
#include <thread>
#include <chrono> // для работы с временем

using namespace std;


int main() 
{
    setlocale(LC_ALL, "ru");

    cout << "START MAIN" << endl;

    // приостанавливает работу текущего потока в (мс)
    this_thread::sleep_for(chrono::microseconds(5000));

    // узнать id текущего потока
    cout << this_thread::get_id() << endl;

    cout << "END MAIN" << endl;
   
    return 0;
}