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
	int *max = new int;

	int *pos_i = new int;
	int *pos_j = new int;
	int *temp = new int;
	
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

	*max = *(*(array_A));

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			if ( *max < *(*(array_A + i) + j) ) {
				*max = *(*(array_A + i) + j);
			}
		}
	}

	*temp = *max;
	*(*(array_A + *pos_i) + *pos_j) = *(*(array_A + (*N) - 1) + (*M) - 1);
	*(*(array_A + (*N) - 1) + (*M) - 1) = *temp;

	cout << "\nМассив array_A \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *M; j++) {
			cout << *(*(array_A + i) + j) << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete N;
	delete M;
	delete pos_i;
	delete pos_j;
	delete temp;
	delete max;
}

```
