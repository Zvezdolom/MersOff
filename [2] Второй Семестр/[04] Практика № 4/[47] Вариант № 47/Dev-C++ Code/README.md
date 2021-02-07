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
	int *M = new int;
	int *multiply = new int(1);
	int *Z = new int;

	cout << "N : ";
	*N = protection_arr();

	cout << "M : ";
	*M = protection_arr();


	int **array_A = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_A + i) = new int[*M];
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			cout << "array_A[" << i << "][" << j << "] : ";
			*(*(array_A + i) + j) = protection_n();
		}
	}

	if ( *M > *N ) {
		*Z = *N;
	} else if ( *M < *N ) {
		*Z = *M;
	} else {
		*Z = *N;
	}

	for (int i = 0; i < *Z; i++) {
		*multiply *= *(*(array_A + i) + i);
	}

	cout << "Произведение элементов, расположенных на главной диагонали : " << *multiply;

	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete multiply;
	delete N;
	delete M;
}

```
