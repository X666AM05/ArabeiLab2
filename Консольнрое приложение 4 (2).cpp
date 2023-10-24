

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int a, b;
    double sum;

    cout << "Введите 1-е число : \n" << endl;
    cin >> a;
    cout << "Введите 2-е число : \n" << endl;
    cin >> b;
    cout << "Введите конечный ответ \n"; 
    cin >> sum;
    if (a * b == sum) {
        cout << "Вы ответили правильно! \n";
    }
    else {
        cout << "Вы ответили не правильно, правильный ответ -- " << a * b << endl;
    }

    return 0;
}

