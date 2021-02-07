```
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
	int *t = new int;
	int *value = new int(0);

	cout << "N : ";
	*N = protection_arr();

	cout << "t : ";
	*t = protection_n();

	int **array_A = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_A + i) = new int[*N];
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << "array_A[" << i << "][" << j << "] : ";
			*(*(array_A + i) + j) = protection_n();
		}
	}

	for (int i = 0; i < *N; i++) {
		if ( *(*(array_A + i) + 0) > *t ) {
			(*value)++;
		}
	}

	int *array_B = new int[*value];

	cout << "\nМассив array_A \n";
	for (int i = 0, j = 0; i < *N; i++) {
		if ( *(*(array_A + i) + 0) > *t ) {
			*(array_B + j) = *(*(array_A + i));
			j++;
		}
	}

	cout << endl;
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << *(*(array_A + i) + j) << "\t";
		}
		cout << endl;
	}

	cout << "\nМассив array_B \n";
	for (int i = 0; i < *value; i++) {
		cout << *(array_B + i) << " \t";
	}

	delete t;
	delete value;
	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete[] array_B;
	delete N;
}

```
