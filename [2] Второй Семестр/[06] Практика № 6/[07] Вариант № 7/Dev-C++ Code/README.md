```c++
#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	int val;
};

struct List {
	Data data;
	List* next;
};

List* _start = NULL;
List* _last = NULL;

int enter_int();
void CreateHead1LElement(List** start, List** last, int value);
void AddAtEnd1LElement(List** start, List** last, int value);
void Print1L(List** start, List** last);
bool Search1L(List** start, List** last, int value);
void AddAfterValue1LElement(List** start, List** last, int after_value, int value);
void ClearAll1L(List** start, List** last);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool isFirst = true;
	while (true) {
		cout << "Хотите ввести данные? 1-ДА 0-НЕТ : ";
		int answer = enter_int();
		if (answer == 1) {
			if (isFirst) {
				isFirst = false;
				int data1 = enter_int();
				CreateHead1LElement(&_start, &_last, data1);
			} else {
				int data2 = enter_int();
				AddAtEnd1LElement(&_start, &_last, data2);
			}
		} else if (answer == 0) {
			break;
		}
	}
	cout << "Вы ввели: \n";
	Print1L(&_start, &_last);
	cout << "Введите число, после которого нужно добавить новое значение: \n";
	int data3 = enter_int();
	cout << "Введите число, которое нужно добавить: \n";
	int data4 = enter_int();
	AddAfterValue1LElement(&_start, &_last, data3, data4);
	cout << "Данные которые остались в списке: \n";
	Print1L(&_start, &_last);
	ClearAll1L(&_start, &_last);
}

int enter_int () {
	int value;
	while(!(cin>>value)) {
		cout << "Не верные данные! Пожалуйста вводите только цифры! \n";
		cout << "Хотите ввести данные? 1-ДА 0-НЕТ : ";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	return value;
}

void CreateHead1LElement(List** start, List** last, int value) {
	*start = (List*)new List;
	(*start)->next = *start;
	(*start)->data.val = value;
	*last = *start;
}

void AddAtEnd1LElement(List** start, List** last, int value) {
	List* q;
	q = (List*)new List;
	q->data.val = value;
	q->next = *start;
	(*last)->next = q;
	*last = q;
}

void Print1L(List** start, List** last) {
	List* p = *start;
	cout << "Список: " << endl;
	if (p == NULL) {
		return;
	}
	while (1) {
		cout << " | " << p->data.val << endl;
		if (p == *last) {
			break;
		}
		p = p->next;
	}
}

bool Search1L(List** start, List** last, int value) {
	List* p = *start;
	while (1) {
		if (p->data.val == value) {
			return true;
		}
		if (p == *last) {
			break;
		}
		p = p->next;
	}
	return false;
}

void AddAfterValue1LElement(List** start, List** last, int after_value, int value) {
	List* p = *start;
	while (1) {
		if (p->data.val == after_value) {
			if (p == *last) {
				List* q;
				q = (List*)new List;
				q->data.val = value;
				q->next = p->next;
				_last = q;
				p->next = q;
			} else {
				List* q;
				q = (List*)new List;
				q->data.val = value;
				q->next = p->next;
				p->next = q;
			}
		}
		if (p == *last) {
			break;
		}
		p = p->next;
	}
	return;
}

void ClearAll1L(List** start, List** last) {
	if (*start == 0)
		return;
	List* p = *start;
	List* t;
	while (1) {
		t = p;
		if (p == *last) {
			break;
		}
		p = p->next;
		delete t;
	}
	_start = NULL;
	_last = NULL;
}

```
