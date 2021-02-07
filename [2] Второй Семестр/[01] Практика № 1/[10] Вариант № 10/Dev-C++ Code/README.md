```
#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char name1[19], name2[19], name3[19];
	char type1, type2, type3;
	float price1, price2, price3;
	unsigned short min_amount1, min_amount2, min_amount3;
	
	cout << "Программа: Прайс-лист\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите наименование товара: ";
	cin.getline(name1, 19);
    cin.clear();
	_flushall();
	cout << "Введите тип товара: ";
	while(!(cin>>type1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите цену за 1 шт (грн): ";
	while(!(cin>>price1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите минимальное количество в партии: ";
	while(!(cin>>min_amount1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите наименование товара: ";
	cin.getline(name2, 19);
    cin.clear();
	_flushall();
	cout << "Введите тип товара: ";
	while(!(cin>>type2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите цену за 1 шт (грн): ";
	while(!(cin>>price2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите минимальное количество в партии: ";
	while(!(cin>>min_amount2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите наименование товара: ";
	cin.getline(name3, 19);
    cin.clear();
	_flushall();
	cout << "Введите тип товара: ";
	while(!(cin>>type3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите цену за 1 шт (грн): ";
	while(!(cin>>price3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите минимальное количество в партии: ";
	while(!(cin>>min_amount3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	
	cout << "--------------------------------------------------------------------------------\n";
	cout << "| Прайс-лист                                                                   |\n";
	cout << "--------------------------------------------------------------------------------\n";
	cout << "| Наименование товара | Тип товара | Цена за 1 шт (грн) | Мин. кол-во в партии |\n";
	cout << "--------------------------------------------------------------------------------\n";
	cout << "| " << setw(19) << name1 << " | " << setw(10) << type1 << " | " << setw(18) << setprecision(2) << fixed << price1 << " | " << setw(20) << min_amount1 << " |\n";
	cout << "| " << setw(19) << name2 << " | " << setw(10) << type2 << " | " << setw(18) << setprecision(2) << fixed << price2 << " | " << setw(20) << min_amount2 << " |\n";
	cout << "| " << setw(19) << name3 << " | " << setw(10) << type3 << " | " << setw(18) << setprecision(2) << fixed << price3 << " | " << setw(20) << min_amount3 << " |\n";
	cout << "--------------------------------------------------------------------------------\n";
	cout << "| Примечание: К – канцтовары, О - оргтехника                                   |\n";
	cout << "--------------------------------------------------------------------------------\n";
}

```
