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
	int *sum = new int(0);

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
			if (*N - 1 > i + j) {
				*sum += *(*(array_A + i) + j);
			}
		}
	}

	cout << "Сумма всех элементов, расположенных выше диагонали, противоположной главной : " << *sum;

	delete sum;
	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete N;
}
