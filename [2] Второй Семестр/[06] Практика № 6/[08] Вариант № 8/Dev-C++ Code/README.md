```
#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	char val;
};

struct List_2 {
	Data data;
	List_2* next;
	List_2* previous;
};

List_2* _start_2 = NULL;
List_2* _last_2 = NULL;

int enter_int();
char enter_char();
void CreateHead2LElement(List_2** start, List_2** last, char value);
void AddAtEnd2LElement(List_2** start, List_2** last, char value);
void Print2L(List_2** start, List_2** last);
bool Search2L(List_2** start, List_2** last, char value);
void AddAfterValue2LElement(List_2** start, List_2** last, int after_value, int value);
void ClearAll2L(List_2** start, List_2** last);

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
				char data1 = enter_char();
				CreateHead2LElement(&_start_2, &_last_2, data1);
			} else {
				char data2 = enter_char();
				AddAtEnd2LElement(&_start_2, &_last_2, data2);
			}
		} else if (answer == 0) {
			break;
		}
	}
	cout << "Вы ввели: \n";
	Print2L(&_start_2, &_last_2);
	cout << "Введите символ, после которого нужно добавить новое значение: \n";
	char data3 = enter_char();
	cout << "Введите символ, который нужно добавить: \n";
	char data4 = enter_char();
	AddAfterValue2LElement(&_start_2, &_last_2, data3, data4);
	cout << "Данные которые остались в списке: \n";
	Print2L(&_start_2, &_last_2);
	ClearAll2L(&_start_2, &_last_2);
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

char enter_char () {
	char value[2];
	cin.getline(value, 2);
	cin.clear();
	_flushall();
	return value[0];
}

void CreateHead2LElement(List_2** start, List_2** last, char value) {
	*start = (List_2*)new List_2;
	(*start)->next = *start;
	(*start)->previous = *start;
	(*start)->data.val = value;
	*last = *start;
}

void AddAtEnd2LElement(List_2** start, List_2** last, char value) {
	List_2* q;
	q = (List_2*)new List_2;
	q->data.val = value;
	q->next = *start;
	q->previous = *last;
	(*last)->next = q;
	*last = q;
}

void Print2L(List_2** start, List_2** last) {
	List_2* p = *start;
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

bool Search2L(List_2** start, List_2** last, char value) {
	List_2* p = *start;
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

void AddAfterValue2LElement(List_2** start, List_2** last, int after_value, int value) {
	List_2* p = *start;
	while (1) {
		if (p->data.val == after_value) {
			if (p == *last) {
				List_2* q;
				q = (List_2*)new List_2;
				q->data.val = value;
				q->next = p->next;
				q->previous = p;
				_last_2 = q;
				p->next = q;	
			} else {
				List_2* q;
				q = (List_2*)new List_2;
				q->data.val = value;
				q->previous = p;
				q->next = p->next;
				p->next = q;
				p = p->next;
				p = p->next;
				p->previous = q;
			}
		}
		if (p == *last) {
			break;
		}
		p = p->next;
	}
	return;
}

void ClearAll2L(List_2** start, List_2** last) {
	if (*start == 0)
		return;
	List_2* p = *start;
	List_2* t;
	while (1) {
		t = p;
		if (p == *last) {
			break;
		}
		p = p->next;
		delete t;
	}
	_start_2 = NULL;
	_last_2 = NULL;
}

```
