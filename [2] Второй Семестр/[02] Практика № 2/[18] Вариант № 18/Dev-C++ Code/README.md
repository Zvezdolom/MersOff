﻿```c++
#include <iostream>
#include <windows.h>

using namespace std;

struct Transport {
	int luggage_items;
	int luggage_weight;
	char surname[20];
	char name[20];
	char second_name[20];
};

int protection_n () {
	int value;
	while(!(cin>>value && value >= 1)) {
		cout<<"Не верные данные! Пожалуйста вводите только положительные цифры больше 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

float protection_t () {
	float value;
	while(!(cin>>value && value > 0)) {
		cout<<"Не верные данные! Пожалуйста вводите только положительные цифры больше 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int N;
	cout << "Введите количество пассажиров: ";
	N = protection_n();
	cin.clear();
	_flushall();
	Transport transports[N];
	float average;
	for (int i = 0; i < N; i++) {
		cout << "[Пассажир номер " << i+1 << "]\n";

		cout << "Фамилия: ";
		cin.getline(transports[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "Имя: ";
		cin.getline(transports[i].name, 20);
		cin.clear();
		_flushall();

		cout << "Отчество: ";
		cin.getline(transports[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "Количество вещей: ";
		transports[i].luggage_items = protection_n();
		cin.clear();
		_flushall();

		cout << "Вес в килограммах: ";
		transports[i].luggage_weight = protection_t();
		cin.clear();
		_flushall();
		average = average + transports[i].luggage_weight;

		cout << "\n";
	}

	average = average / N;

	cout << "Средний вес багажа - " << average;
}

```
