#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    int finger;
    cout << "Вы открыли программу для определения названия пальца! \n" << endl;
    cout << "------------------------------------------------------ \n";
    cout << "Введите номер пальца \n";
    cin >> finger;
    switch (finger)
    {
    case 1:
        cout << " Это большой ";
        break;
    case 2:
        cout << " Это указательный ";
        break;
    case 3:
        cout << " Это средний ";
        break;
    case 4:
        cout << " Это безымянный ";
        break;
    case 5:
        cout << " Это мизинец";
        break;
    default:
        cout << "НЕ ВЕРНОЕ ЗНАЧЕНИЕ ";
        break;
    }

}