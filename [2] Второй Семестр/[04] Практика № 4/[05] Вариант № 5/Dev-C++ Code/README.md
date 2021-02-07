```
#include <iostream>
#include <windows.h>

using namespace std;

int protection_n () {
	int value;
	while(!(cin>>value)) {
		cout<<"Не верные данные! Пожалуйста вводите только цифры! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float *average_A = new float(0.0);
	float *average_B = new float(0.0);

	int *array_A = new int[5];
	int *array_B = new int[5];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
		*average_A += *(array_A + i);
	}

	for (int i = 0; i < 5; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
		*average_B += *(array_B + i);
	}

	*average_A = *average_A / 5;
	*average_B = *average_B / 5;

	cout << "\nМассив array_A  среднее арифметическое = " << *average_A << " \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_A + i) << " \t";
	}

	cout << "\nМассив array_B  среднее арифметическое = " << *average_B << " \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_B + i) << " \t";
	}

	delete[] array_A;
	delete[] array_B;
	delete average_A;
	delete average_B;
}

```
