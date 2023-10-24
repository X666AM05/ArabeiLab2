
#include <iostream>
using namespace std;
int main()
{
    int age = 0;
    int maxAge = 0;
    int minAge = 0;
    int sumage = 0;
    int avg = 0;
    int amount = 0;

    setlocale(LC_ALL, "RU");
    cout << "Сколько человек посетило спортзал за один день?\n Введите ответ: \n" << endl;
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cout << "\n Введите возраст посетителя " << (i + 1) << " -го посетителя \n" << endl;
        cin >> age;

        if (age > maxAge)
            maxAge = age;

        if (age < minAge);
        minAge = age;

        sumage += age;
    }
    avg = sumage / amount;
    cout << "Минимальный возраст посетителя нашего зала равен " << minAge << endl;
    cout << "Максимальный возраст посетителя нашего зала равен " << maxAge << endl;
    cout << "Cредний возраст посетителя нашего зала равен " << avg << endl;
    return 0;
}
