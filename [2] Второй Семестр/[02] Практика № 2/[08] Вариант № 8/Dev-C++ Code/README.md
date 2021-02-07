```c++
#include <iostream>
#include <windows.h>

using namespace std;

struct Student {
	int math;
	int physics;
	int plotting;
	int sopromat;
	int chemistry;
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

int protection_s () {
	int value;
	while(!(cin>>value && (value >= 2 && value <= 5) )) {
		cout<<"Не верные данные! Пожалуйста вводите только цифры от 2 до 5! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int N;
	cout << "Введите количество студентов: ";
	N = protection_n();
	cin.clear();
	_flushall();
	Student students[N];
	float average[5];
	for (int i = 0; i < N; i++) {
		cout << "[Студент номер " << i+1 << "]\n";

		cout << "Фамилия: ";
		cin.getline(students[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "Имя: ";
		cin.getline(students[i].name, 20);
		cin.clear();
		_flushall();

		cout << "Отчество: ";
		cin.getline(students[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по математике: ";
		students[i].math = protection_s();
		cin.clear();
		_flushall();
		average[0] = students[i].math;

		cout << "Оценка по физике: ";
		students[i].physics = protection_s();
		cin.clear();
		_flushall();
		average[1] = students[i].physics;

		cout << "Оценка по черчению: ";
		students[i].plotting = protection_s();
		cin.clear();
		_flushall();
		average[2] = students[i].plotting;

		cout << "Оценка по сопромату: ";
		students[i].sopromat = protection_s();
		cin.clear();
		_flushall();
		average[3] = students[i].sopromat;

		cout << "Оценка по химии: ";
		students[i].chemistry = protection_s();
		cin.clear();
		_flushall();
		average[4] = students[i].chemistry;

		cout << "\n";
	}

	int max_value_index = 0;
	int max = average[0];
	for (int i = 1; i < N; i++) {
		if (max < average[i]) {
			max_value_index = i;
			max = average[i];
		}
	}

	switch(max_value_index) {
		case 0:
			cout << "Лучше всего группа сдала математику";
			break;
		case 1:
			cout << "Лучше всего группа сдала физику";
			break;
		case 2:
			cout << "Лучше всего группа сдала черчение";
			break;
		case 3:
			cout << "Лучше всего группа сдала сопромат";
			break;
		case 4:
			cout << "Лучше всего группа сдала химию";
			break;
	}
}

```
