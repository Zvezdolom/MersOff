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

	int *sum_A = new int (0);
	int *sum_B = new int (0);
	int *array_A = new int[5];
	int *array_B = new int[4];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
		*sum_A += *(array_A + i);
	}

	for (int i = 0; i < 4; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
		*sum_B += *(array_B + i);
	}

	if (*sum_A < *sum_B) {
		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
	} else if (*sum_B < *sum_A) {
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
	} else {
		cout << "Сумма значений элементов в массивах ОДИНАКОВА \n";

		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
	}

	delete[] array_A;
	delete[] array_B;
	delete sum_A;
	delete sum_B;
}

```
