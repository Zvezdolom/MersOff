#include <iostream>
#include <windows.h>

using namespace std;

int protection_n () {
	int value;
	while(!(cin>>value)) {
		cout<<"�� ������ ������! ���������� ������� ������ �����! \n";
		cin.clear();
		_flushall();
	}
	return value;
}

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int *multiply_A = new int (1);
	int *multiply_B = new int (1);

	int *array_A = new int[5];
	int *array_B = new int[4];

	for (int i = 0; i < 5; i++) {
		cout << "A[" << i << "] : ";
		*(array_A + i) = protection_n();
		*multiply_A += *(array_A + i);
	}

	for (int i = 0; i < 4; i++) {
		cout << "B[" << i << "] : ";
		*(array_B + i) = protection_n();
		*multiply_B += *(array_B + i);
	}

	if (*multiply_A < *multiply_B) {
		cout << "\n������ array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\n������ array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
	} else if (*multiply_B < *multiply_A) {
		cout << "\n������ array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
		cout << "\n������ array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
	} else {
		cout << "����� �������� ��������� � �������� ��������� \n";

		cout << "\n������ array_A \n";
		for (int i = 0; i < 5; i++) {
			cout << *(array_A + i) << " \t";
		}
		cout << "\n������ array_B \n";
		for (int i = 0; i < 4; i++) {
			cout << *(array_B + i) << " \t";
		}
	}

	delete[] array_A;
	delete[] array_B;
	delete multiply_A;
	delete multiply_B;
}
