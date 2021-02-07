```c++
#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[12], name2[12], name3[12];
	char type1, type2, type3;
	unsigned short area1, area2, area3;
	unsigned short amount1, amount2, amount3;
	
	cout << "Программа: Сельскохозяйственные предприятия\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите название: ";
	cin.getline(name1, 12);
    cin.clear();
	_flushall();
	cout << "Введите вид собственности: ";
	while(!(cin>>type1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите площадь земли (га): ";
	while(!(cin>>area1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите количество работников: ";
	while(!(cin>>amount1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите название: ";
	cin.getline(name2, 12);
    cin.clear();
	_flushall();
	cout << "Введите вид собственности: ";
	while(!(cin>>type2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите площадь земли (га): ";
	while(!(cin>>area2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите количество работников: ";
	while(!(cin>>amount2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите название: ";
	cin.getline(name3, 12);
    cin.clear();
	_flushall();
	cout << "Введите вид собственности: ";
	while(!(cin>>type3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите площадь земли (га): ";
	while(!(cin>>area3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите количество работников: ";
	while(!(cin>>amount3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "---------------------------------------------------------------------------\n";
	cout << "| Сельскохозяйственные предприятия                                        |\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "|   Название   | Вид собственности | Площадь земли (га) | Кол. работников |\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "| " << setw(12) << name1 << " | " << setw(17) << type1 << " | " << setw(18) << area1 << " | " << setw(15) << amount1 << " |\n";
	cout << "| " << setw(12) << name2 << " | " << setw(17) << type2 << " | " << setw(18) << area2 << " | " << setw(15) << amount2 << " |\n";
	cout << "| " << setw(12) << name3 << " | " << setw(17) << type3 << " | " << setw(18) << area3 << " | " << setw(15) << amount3 << " |\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "| Вид собственности: Д - государственная, Ч - частная, К - кооперативная  |\n";
	cout << "---------------------------------------------------------------------------\n";
}

```
