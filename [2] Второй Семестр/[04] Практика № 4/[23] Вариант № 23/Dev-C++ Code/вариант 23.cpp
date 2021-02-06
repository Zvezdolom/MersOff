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

	int *array_A = new int[10];

	int *N = new int(0);

	for (int i = 0; i < 10; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
		if ( *(array_A + i) % 2 == 0 ) {
			(*N)++;
		}
	}

	int *array_B = new int[*N];

	for (int i = 0, j = 0; i < 10; i++) {
		if ( *(array_A + i) % 2 == 0 ) {
			*(array_B + j) = *(array_A + i);
			j++;
		}
	}

	cout << "\nМассив array_A \n";
	for (int i = 0; i < 10; i++) {
		cout << *(array_A + i) << " \t";
	}
	cout << "\nМассив array_B \n";
	for (int i = 0; i < *N; i++) {
		cout << *(array_B + i) << " \t";
	}

	delete[] array_A;
	delete[] array_B;
	delete N;
}
