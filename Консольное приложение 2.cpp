#include <iostream> 
using namespace std;

int main()
{
    ;
    setlocale(0, "");
    int a;
    cout << "Введите порядковый дня по которому вы хотите увидеть расписание (от 1 до 7):" << "\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << " Понедельник:\n" << "1. Покататься на аттракционах";
        break;
    case 2:
        cout << " Вторник:\n" << "2. Учеба в колледже";
        break;
    case 3:
        cout << " Среда:\n" << "3. Поездка на природу";
        break;
    case 4:
        cout << " Четверг:\n" << "4. Поездка на природу";
        break;
    case 5:
        cout << " Пятница:\n" << "5. Прогулка в парке";
        break;
    case 6:
        cout << " Суббота:\n" << "6. Полет на воздушном шаре";
        break;
    case 7:
        cout << " Воскресенье:\n" << "7. Отдых от рутинной работы";
        break;
    
    }
    return 0;
}