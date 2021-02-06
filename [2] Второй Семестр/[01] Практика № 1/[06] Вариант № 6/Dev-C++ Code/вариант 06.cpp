#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[12], name2[12], name3[12];
	char type1, type2, type3;
	int area1, area2, area3;
	unsigned short yield1, yield2, yield3;
	
	cout << "Программа: Сельскохозяйственные культуры\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите наименование: ";
	cin.getline(name1, 12);
    cin.clear();
	_flushall();
	cout << "Введите тип: ";
	while(!(cin>>type1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите посевную площадь (га): ";
	while(!(cin>>area1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите урожайность (ц/га): ";
	while(!(cin>>yield1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите наименование: ";
	cin.getline(name2, 12);
    cin.clear();
	_flushall();
	cout << "Введите тип: ";
	while(!(cin>>type2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите посевную площадь (га): ";
	while(!(cin>>area2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите урожайность (ц/га): ";
	while(!(cin>>yield2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите наименование: ";
	cin.getline(name3, 12);
    cin.clear();
	_flushall();
	cout << "Введите тип: ";
	while(!(cin>>type3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите посевную площадь (га): ";
	while(!(cin>>area3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите урожайность (ц/га): ";
	while(!(cin>>yield3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "-------------------------------------------------------------------\n";
	cout << "| Сельскохозяйственные культуры                                   |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| Наименование | Тип | Посевная площадь (га) | Урожайность (ц/га) |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| " << setw(12) << name1 << " | " << setw(3) << type1 << " | " << setw(21) << area1 << " | " << setw(18) << yield1 << " |\n";
	cout << "| " << setw(12) << name2 << " | " << setw(3) << type2 << " | " << setw(21) << area2 << " | " << setw(18) << yield2 << " |\n";
	cout << "| " << setw(12) << name3 << " | " << setw(3) << type3 << " | " << setw(21) << area3 << " | " << setw(18) << yield3 << " |\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "| Примечание: З - зерновые, Б - бобовые                           |\n";
	cout << "-------------------------------------------------------------------\n";
}
