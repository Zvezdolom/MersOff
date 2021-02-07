```c++
#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char type1[14], type2[14], type3[14];
	char route1[7], route2[7], route3[7];
	float length1, length2, length3;
	unsigned int time1, time2, time3;
	
	cout << "Программа: Ведомость общественного транспорта\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите вид транспорта: ";
	cin.getline(type1, 14);
    cin.clear();
	_flushall();
	cout << "Введите маршрут: ";
	cin.getline(route1, 7);
    cin.clear();
	_flushall();
	cout << "Введите протяженность маршрута (км): ";
	while(!(cin>>length1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите время в дороге (мин): ";
	while(!(cin>>time1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите вид транспорта: ";
	cin.getline(type2, 14);
    cin.clear();
	_flushall();
	cout << "Введите маршрут: ";
	cin.getline(route2, 7);
    cin.clear();
	_flushall();
	cout << "Введите протяженность маршрута (км): ";
	while(!(cin>>length2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите время в дороге (мин): ";
	while(!(cin>>time2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите вид транспорта: ";
	cin.getline(type3, 14);
    cin.clear();
	_flushall();
	cout << "Введите маршрут: ";
	cin.getline(route3, 7);
    cin.clear();
	_flushall();
	cout << "Введите протяженность маршрута (км): ";
	while(!(cin>>length3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите время в дороге (мин): ";
	while(!(cin>>time3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| Ведомость общественного транспорта                                            |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| Вид транспорта | Маршрут | Протяженность маршрута (км) | Время в дороге (мин) |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| " << setw(14) << type1 << " | " << setw(7) << route1 << " | " << setw(27) << length1 << " | " << setw(20) << time1 << " |\n";
	cout << "| " << setw(14) << type2 << " | " << setw(7) << route2 << " | " << setw(27) << length2 << " | " << setw(20) << time2 << " |\n";
	cout << "| " << setw(14) << type3 << " | " << setw(7) << route3 << " | " << setw(27) << length3 << " | " << setw(20) << time3 << " |\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "| Примечание: Тр - трамвай, Тс - троллейбус, А - автобус                        |\n";
	cout << "---------------------------------------------------------------------------------\n";
}

```
