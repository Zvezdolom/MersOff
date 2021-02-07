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

	cout << "N : ";
	*N = protection_arr();

	int **array_A = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_A + i) = new int[*N];
	}

	int **array_B = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_B + i) = new int[*N];
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << "array_A[" << i << "][" << j << "] : ";
			*(*(array_A + i) + j) = protection_n();
		}
	}

	for (int i = *N-1, k = 0; i >= 0; i--, k++) {
		for (int j = 0, l = 0; j <= *N-1; j++, l++) {
			*(*(array_B + j) + i) = *(*(array_A + k) + l);
		}
	}
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*(*(array_A + i) + j) = *(*(array_B + i) + j);
		}
	}
	for (int i = *N-1, k = 0; i >= 0; i--, k++) {
		for (int j = 0, l = 0; j <= *N-1; j++, l++) {
			*(*(array_B + j) + i) = *(*(array_A + k) + l);
		}
	}
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*(*(array_A + i) + j) = *(*(array_B + i) + j);
		}
	}
	for (int i = *N-1, k = 0; i >= 0; i--, k++) {
		for (int j = 0, l = 0; j <= *N-1; j++, l++) {
			*(*(array_B + j) + i) = *(*(array_A + k) + l);
		}
	}

	cout << "\nМассив \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << *(*(array_B + i) + j) << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < *N; i++) {
		delete *(array_B + i);
	}
	delete[] array_B;
	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete N;
}

```
