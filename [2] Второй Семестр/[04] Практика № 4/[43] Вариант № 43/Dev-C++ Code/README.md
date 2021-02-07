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
	int *temp = new int;

	cout << "N : ";
	*N = protection_arr();

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

	int **array_B = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_B + i) = new int[*N];
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*temp = 0;
			for (int k = 0; k < *N; k++) {
				*temp += *(*(array_A + i) + k) **(*(array_A + k) + j);
			}
			*(*(array_B + i) + j)  = *temp;
		}
	}

	cout << "\nМассив array_A \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << *(*(array_A + i) + j) << "\t";
		}
		cout << endl;
	}

	cout << "\nМассив array_B \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << *(*(array_B + i) + j) << "\t";
		}
		cout << endl;
	}

	delete temp;
	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	for (int i = 0; i < *N; i++) {
		delete *(array_B + i);
	}
	delete[] array_B;
	delete N;
}

```
