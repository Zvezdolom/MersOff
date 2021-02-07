```c++
#include <iostream>
#include <windows.h>

using namespace std;

int protection_arr () {
	int value;
	while(!(cin>>value && value >= 1)) {
		cout<<"Не верные данные! Пожалуйста вводите только положительные цифры больше 0! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

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
	
	int *N = new int;
	int *value = new int(0);

	cout << "N : ";
	*N = protection_arr();

	int *array_A = new int[*N];

	for (int i = 0; i < *N; i++) {
		cout << "array_A[" << i << "] : ";
		*(array_A + i) = protection_n();
		if ( *(array_A + i) % 3 == 0) {
			(*value)++;
		}
	}

	int *array_B = new int[*value];

	for (int i = 0, k = 0; i < *N; i++) {
		if ( *(array_A + i) % 3 == 0) {
			*(array_B + k) = *(array_A + i);
			k++;
		}
	}

	cout << "Количество элементов массива B : " << *value << endl;

	cout << "\nМассив array_A \n";
	for (int i = 0; i < *N; i++) {
		cout << *(array_A + i) << "\t";
	}

	cout << "\nМассив array_B \n";
	for (int i = 0; i < *value; i++) {
		cout << *(array_B + i) << "\t";
	}

	delete[] array_A;
	delete[] array_B;
	delete N;
}

```
