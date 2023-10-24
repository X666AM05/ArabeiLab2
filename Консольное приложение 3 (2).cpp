

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	char naznach;
	cout << "Программа расчета времени в пути \n" << endl;
	cout << "Выберите пункт назначения: \n" << endl;
	cout << "------------------------------------- \n";
	cout << " А \n B \n C\n D \n E\n" << endl;
	cin >> naznach;
	switch (naznach) {
	case 'a':
	case 'A':
		cout << "До сюда ехать примерно 24 минуты! \n";
			break;

	case 'b':
	case 'B':
		cout << "До сюда ехать примерно 28 минут! \n";
		break;
	case 'c':
	case 'C':
		cout << "До сюда ехать примерно 31 минуту! \n";
		break;
	case 'd':
	case 'D':
		cout << "До сюда ехать примерно 33 минут! \n";
		break;
	case 'e':
	case 'E':
		cout << "До сюда ехать примерно 28 минут! \n";
		break;
	}
	


}

