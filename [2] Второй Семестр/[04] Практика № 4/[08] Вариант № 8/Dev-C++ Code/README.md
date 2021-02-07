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

	int *counter_A = new int(0);
	int *counter_B = new int(0);

	int *array_A = new int[5];
	int *array_B = new int[5];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
	}

	for (int i = 0; i < 5; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
	}

	for (int i = 0; i < 5; i++) {
		if ( *(array_A + i) >= 0 ) {
			(*counter_A)++;
		}
		if ( *(array_B + i) >= 0 ) {
			(*counter_B)++;
		}
	}

	if (*counter_A < *counter_B) {
		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_B + i) << " \t";
		}
	} else if (*counter_A > *counter_B) {
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_B + i) << " \t";
		}
		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
	} else {
		cout << "Количество положительных элементов в массивах ОДИНАКОВО \n";

		cout << "\nМассив array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\nМассив array_B \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_B + i) << " \t";
		}
	}

	delete[] array_A;
	delete[] array_B;
	delete counter_A;
	delete counter_B;
}

```
