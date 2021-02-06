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
	float *average = new float(0.0);

	cout << "N : ";
	*N = protection_arr();

	int *array_A = new int[*N];

	for (int i = 0; i < *N; i++) {
		cout << "array_A[" << i << "] : ";
		*(array_A + i) = protection_n();
		*average += *(array_A + i);

	}

	*average /= (*N);

	float *array_B = new float[*N];

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*(array_B + i) = (float)(*(array_A + i)) / *average;
		}
	}

	cout << "\nМассив array_A \n";
	for (int i = 0; i < *N; i++) {
		cout << *(array_A + i) << "\t";
	}

	cout << "\nМассив array_B \n";
	for (int i = 0; i < *N; i++) {
		cout << *(array_B + i) << "\t";
	}

	delete average;
	delete[] array_A;
	delete[] array_B;
	delete N;
}
