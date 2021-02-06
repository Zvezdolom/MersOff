#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char cpu1[15], cpu2[15], cpu3[15];
	unsigned short frequency1, frequency2, frequency3;
	int ram1, ram2, ram3;
	char type1, type2, type3;
	
	cout << "Программа: Характеристики ПЭВМ\n";
	
	cout << "\nПервая запись в таблице\n";
	cout << "Введите процессор: ";
	cin.getline(cpu1, 15);
    cin.clear();
	_flushall();
	cout << "Введите частоту (Mgz): ";
	while(!(cin>>frequency1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите RAM (Mb): ";
	while(!(cin>>ram1)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "\nВторая запись в таблице\n";
	cout << "Введите процессор: ";
	cin.getline(cpu2, 15);
    cin.clear();
	_flushall();
	cout << "Введите частоту (Mgz): ";
	while(!(cin>>frequency2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите RAM (Mb): ";
	while(!(cin>>ram2)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "\nТретья запись в таблице\n";
	cout << "Введите процессор: ";
	cin.getline(cpu3, 15);
    cin.clear();
	_flushall();
	cout << "Введите частоту (Mgz): ";
	while(!(cin>>frequency3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	cout << "Введите RAM (Mb): ";
	while(!(cin>>ram3)) {
		cout<<"Не верные данные! Пожалуйста введите еще раз!\n";
		cin.clear();
		_flushall();
	}
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
	
	cout << "------------------------------------------------------\n";
	cout << "| Характеристики ПЭВМ                                |\n";
	cout << "------------------------------------------------------\n";
	cout << "|    Процессор    | Частота (Mgz) |  RAM (Mb)  | Тип |\n";
	cout << "------------------------------------------------------\n";
	cout << "| " << setw(15) << cpu1 << " | " << setw(13) << frequency1 << " | " << setw(10) << ram1 << " | " << setw(3) << type1 << " |\n";
	cout << "| " << setw(15) << cpu2 << " | " << setw(13) << frequency2 << " | " << setw(10) << ram2 << " | " << setw(3) << type2 << " |\n";
	cout << "| " << setw(15) << cpu3 << " | " << setw(13) << frequency3 << " | " << setw(10) << ram3 << " | " << setw(3) << type3 << " |\n";
	cout << "------------------------------------------------------\n";
	cout << "| Тип: C - CISC-процессор, R - RISC-процессор        |\n";
	cout << "------------------------------------------------------\n";
}
