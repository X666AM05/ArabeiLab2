
#include <iostream>
using namespace std;
int main()
{
    int age;
    int maxAge = 0;
    int minAge = 0;
    double sumage = 0;
    double avg = 0;
    int amount;

    setlocale(LC_ALL, "RU");
    cout << "Сколько человек посетило спортзал за один день?\n Введите ответ: \n" << endl;
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cout << "\n Введите возраст посетителя " << (i + 1) << " -го посетителя \n" << endl;
        cin >> age;

        if (i == 0 || age< minAge) {
            minAge = age;
        }
        if (age > maxAge) {
            maxAge = age;
        }

        avg+=age;
    }
    avg/=amount;
    cout << "Минимальный возраст посетителя нашего зала равен " << minAge << endl;
    cout << "Максимальный возраст посетителя нашего зала равен " << maxAge << endl;
    cout << "Cредний возраст посетителя нашего зала равен " << avg << endl;
    return 0;
}
