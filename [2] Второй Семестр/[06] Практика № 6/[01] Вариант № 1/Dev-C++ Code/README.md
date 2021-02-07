```
#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	char val[11];
};

struct List {
	Data data;
	List* next;
};

List* _start = NULL;
List* _last = NULL;

int enter_int();
void CreateHead1SElement(List** start, List** last, char value[11]);
void AddAtEnd1SElement(List** last, char value[11]);
void Print1S(List** start);
bool Search1S(List** start, char value[11]);
void DeleteByValue1S(List** start, List** last, char value[11]);
bool char_array_comparison (char *s1, char *s2);
void ClearAll1S(List** start);

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
				char data1[11]; cin.getline(data1, 11); cin.clear(); _flushall();
				CreateHead1SElement(&_start, &_last, data1);
			} else {
				char data2[11]; cin.getline(data2, 11); cin.clear(); _flushall();
				AddAtEnd1SElement(&_last, data2);
			}
		} else if (answer == 0) {
			break;
		}
	}
	cout << "Вы ввели: \n";
	Print1S(&_start);
	cout << "Введите строку, которую хотите удалить: \n";
	char data3[11]; cin.getline(data3, 11); cin.clear(); _flushall();
	while (Search1S(&_start, data3)) {
		DeleteByValue1S(&_start, &_last, data3);
	}
	cout << "Данные которые остались в списке: \n";
	Print1S(&_start);
	ClearAll1S(&_start);
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

void CreateHead1SElement(List** start, List** last, char value[11]) {
	*start = (List*)new List;
	(*start)->next = NULL;
	for (int i = 0; i < 11; i++) {
		(*start)->data.val[i] = value[i];
	}
	*last = *start;
}

void AddAtEnd1SElement(List** last, char value[11]) {
	List* q;
	q = (List*)new List;
	for (int i = 0; i < 11; i++) {
		q->data.val[i] = value[i];
	}
	q->next = NULL;
	(*last)->next = q;
	*last = q;
}

void Print1S(List** start) {
	List* p = *start;
	cout << "Список: " << endl;
	while (p) {
		cout << " | " << p->data.val << endl;
		p = p->next;
	}
}

bool Search1S(List** start, char value[11]) {
	List* p = *start;
	while (p) {		
		if (char_array_comparison(p->data.val, value)) {
			return true;
		}
		p = p->next;
	}
	return false;
}

void DeleteByValue1S(List** start, List** last, char value[11]) {
	for (List* p = *start; p != NULL; p = p->next) {
		if (char_array_comparison(p->data.val, value)) {
			if (p == *start) {
				_start = (p->next);
				delete p;
				return;
			} else if (p == *last) {
				List* t = *start;
				List* t1 = t->next;
				while (t1) {
					if (char_array_comparison(t1->data.val, value)) {
						t->next = t1->next;
						delete t1;
						return;
					}
					t = t1;
					t1 = t1->next;
				}
				return;
			} else {
				List* t = *start;
				List* t1 = t->next;
				while (t1) {
					if (char_array_comparison(t1->data.val, value)) {
						t->next = t1->next;
						delete t1;
						return;
					}
					t = t1;
					t1 = t1->next;
				}
				return;
			}
		}
	}
}

bool char_array_comparison (char *s1, char *s2) {
	int n1, n2;
	for (n1 = 0; s1[n1] != '\0'; n1++) { }
	for (n2 = 0; s2[n2] != '\0'; n2++) { }
	if (n1 != n2) {
		return false;
	} else {
		for (int i = 0; i < n1; i++) {
			if (s1[i] != s2[i]) {
				return false;
			}
		}
		return true;
	}
}

void ClearAll1S(List** start) {
	if (*start == 0)
		return;
	List* p = *start;
	List* t;
	while (p) {
		t = p;
		p = p->next;
		delete t;
	}
	_start = NULL;
	_last = NULL;
}

```
