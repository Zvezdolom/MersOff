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
	int *max = new int;

	cout << "N : ";
	*N = protection_arr();

	int **array_A = new int*[*N];

	for (int i = 0; i < *N; i++) {
		*(array_A + i) = new int[*N];
	}

	int *array_B = new int[*N];

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << "array_A[" << i << "][" << j << "] : ";
			*(*(array_A + i) + j) = protection_n();
		}
	}

	for (int i = 0; i < *N; i++) {
		*(array_B + i) = 0;
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*(array_B + i) += *(*(array_A + i) + j);
		}
	}

	*max = *array_B;

	for (int i = 0; i < *N; i++) {
		if ( *max < *(array_B + i) ) {
			*max = *(array_B + i);
		}
	}

	cout << "вторая норма матрицы определяемая как максимальная сумма из сумм элементов по строкам : " << *max;

	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete[] array_B;
	delete max;
	delete N;
}
