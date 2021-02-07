```c++
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
	int *k = new int(0);
	int *l = new int(0);
	int *temp = new int;

	cout << "N : ";
	*N = protection_arr();

	cout << "k : ";
	while(!(cin >> *k && *k >= 0 && *k <= *N-1)) {
		cout<<"Не верные данные! Пожалуйста вводите k еще раз! \n";
		cin.clear();
		_flushall();
	}
	
	cout << "l : ";
	while(!(cin >> *l && *l >= 0 && *l <= *N-1)) {
		cout<<"Не верные данные! Пожалуйста вводите l еще раз! \n";
		cin.clear();
		_flushall();
	}

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

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*temp = *(*(array_A + *k) + j);
			*(*(array_A + *k) + j) = *(*(array_A + i) + j);
			*(*(array_A + i) + j) = *temp;
		}
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			*temp = *(*(array_A + i) + *l);
			*(*(array_A + i) + *l) = *(*(array_A + i) + j);
			*(*(array_A + i) + j) = *temp;
		}
	}

	cout << "\nМассив array_A \n";
	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < *N; j++) {
			cout << *(*(array_A + i) + j) << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < *N; i++) {
		delete *(array_A + i);
	}
	delete[] array_A;
	delete temp;
	delete k;
	delete l;
	delete N;
}

```
