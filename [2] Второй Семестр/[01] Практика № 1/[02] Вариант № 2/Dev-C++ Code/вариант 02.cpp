#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char firm1[15], firm2[15], firm3[15];
	unsigned short amount1, amount2, amount3;
	unsigned long int value1, value2, value3;
	float part1, part2, part3;
	
	cout << "Программа: Фирмы - производители СКБ\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите фирму: ";
	cin.getline(firm1, 15);
    cin.clear();
	_flushall();
	cout << "Введите количество продуктов: ";
	while(!(cin>>amount1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите годовой объем продажи ($): ";
	while(!(cin>>value1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите часть рынка (%): ";
	while(!(cin>>part1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите фирму: ";
	cin.getline(firm2, 15);
    cin.clear();
	_flushall();
	cout << "Введите количество продуктов: ";
	while(!(cin>>amount2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите годовой объем продажи ($): ";
	while(!(cin>>value2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите часть рынка (%): ";
	while(!(cin>>part2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите фирму: ";
	cin.getline(firm3, 15);
    cin.clear();
	_flushall();
	cout << "Введите количество продуктов: ";
	while(!(cin>>amount3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите годовой объем продажи ($): ";
	while(!(cin>>value3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите часть рынка (%): ";
	while(!(cin>>part3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| Фирмы - производители СКБ                                                            |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "|      Фирма      | Количество продуктов | Годовой объем продажи ($) | Часть рынка (%) |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| " << setw(15) << firm1 << " | " << setw(20) << amount1 << " | " << setw(25) << value1 << " | " << setw(15) << setprecision(1) << fixed << part1 << " |\n";
	cout << "| " << setw(15) << firm2 << " | " << setw(20) << amount2 << " | " << setw(25) << value2 << " | " << setw(15) << setprecision(1) << fixed << part2 << " |\n";
	cout << "| " << setw(15) << firm3 << " | " << setw(20) << amount3 << " | " << setw(25) << value3 << " | " << setw(15) << setprecision(1) << fixed << part3 << " |\n";
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "| Примечание: по данным Gartner Group за 1999г                                         |\n";
	cout << "----------------------------------------------------------------------------------------\n";
}
