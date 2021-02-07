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

	int *max_A = new int;
	int *max_B = new int;

	int *array_A = new int[5];
	int *array_B = new int[5];
	int *array_AA = new int[5];
	int *array_BB = new int[5];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
	}

	for (int i = 0; i < 5; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
	}

	*max_A = *array_A;
	*max_B = *array_B;

	for (int i = 0; i < 5; i++) {
		if ( *(array_A + i) > *max_A ) {
			*max_A  = *(array_A + i);
		}
		if ( *(array_B + i) > *max_B ) {
			*max_B  = *(array_B + i);
		}
	}

	for (int i = 0; i < 5; i++) {
		*(array_AA + i) = (*(array_A + i)) * (*(max_A));
		*(array_BB + i) = (*(array_B + i)) * (*(max_B));
	}

	cout << "\nМассив array_A \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_A + i) << " \t";
	}
	cout << "\nМассив array_AA \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_AA + i) << " \t";
	}
	cout << "\nМассив array_B \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_B + i) << " \t";
	}
	cout << "\nМассив array_BB \n";
	for (int i = 0; i < 5; i++) {
		cout << *(array_BB + i) << " \t";
	}

	delete[] array_A;
	delete[] array_B;
	delete[] array_AA;
	delete[] array_BB;
	delete max_A;
	delete max_B;
}

```
