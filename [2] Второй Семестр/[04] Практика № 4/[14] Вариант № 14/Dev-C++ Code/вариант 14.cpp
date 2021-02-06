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

	int *min_A = new int;
	int *min_B = new int;

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

	*min_A = *array_A;
	*min_B = *array_B;

	for (int i = 0; i < 5; i++) {
		if ( *(array_A + i) < *min_A ) {
			*min_A  = *(array_A + i);
		}
		if ( *(array_B + i) < *min_B ) {
			*min_B  = *(array_B + i);
		}
	}

	for (int i = 0; i < 5; i++) {
		*(array_AA + i) = (*(array_A + i)) * (*(min_A));
		*(array_BB + i) = (*(array_B + i)) * (*(min_B));
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
	delete min_A;
	delete min_B;
}
