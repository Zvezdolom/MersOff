```c++
#include <iostream>
#include <windows.h>

using namespace std;

struct Data {
	float val;
};

struct List_2 {
	Data data;
	List_2* next;
	List_2* previous;
};

List_2* _start_2 = NULL;
List_2* _last_2 = NULL;

int enter_int ();
float enter_float ();
void CreateHead2SElement(List_2** start, List_2** last, float value);
void AddAtEnd2SElement(List_2** last, float value);
void Print2S(List_2** start);
bool Search2S (List_2** start, float value);
void DeleteByValue2S(List_2** start, List_2** last, float value);
void ClearAll2S(List_2** start);

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
				float data1 = enter_float();
				CreateHead2SElement(&_start_2, &_last_2, data1);
			} else {
				float data2 = enter_float();
				AddAtEnd2SElement(&_last_2, data2);
			}
		} else if (answer == 0) {
			break;
		}
	}
	cout << "Вы ввели: \n";
	Print2S(&_start_2);
	cout << "Введите число, которое хотите удалить: \n";
	float data3 = enter_float();
	while (Search2S(&_start_2, data3)) {
		DeleteByValue2S(&_start_2, &_last_2, data3);
	}
	cout << "Данные которые остались в списке: \n";
	Print2S(&_start_2);
	ClearAll2S(&_start_2);
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

float enter_float () {
	float value;
	while(!(cin>>value)) {
		cout << "Не верные данные! Пожалуйста вводите только float числа! \n";
		cin.clear();
		_flushall();
	}
	cin.clear();
	_flushall();
	return value;
}

void CreateHead2SElement(List_2** start, List_2** last, float value) {
	*start = (List_2*)new List_2;
	(*start)->next = NULL;
	(*start)->previous = NULL;
	(*start)->data.val = value;
	*last = *start;
}

void AddAtEnd2SElement(List_2** last, float value) {
	List_2* q;
	q = (List_2*)new List_2;
	q->data.val = value;
	q->next = NULL;
	q->previous = *last;
	(*last)->next = q;
	*last = q;
}

void Print2S(List_2** start) {
	List_2* p = *start;
	cout << "Список: " << endl;
	while (p) {
		cout << " | " << p->data.val << endl;
		p = p->next;
	}
}

bool Search2S (List_2** start, float value) {
	List_2* p = *start;
	while (p) {
		if (p->data.val == value) {
			return true;
		}
		p = p->next;
	}
	return false;
}

void DeleteByValue2S(List_2** start, List_2** last, float value) {
	for (List_2* p = *start; p != NULL; p = p->next) {
		if (p->data.val == value) {
			if (p == *start) {
				_start_2 = (p->next);
				List_2* q = p->next;
				q->previous = NULL;
				delete p;
				return;
			} else if (p == *last) {
				List_2* t = *start;
				List_2* t1 = t->next;
				while (t1) {
					if (t1->data.val == value) {
						t->next = t1->next;
						delete t1;
						return;
					}
					_last_2 = t1;
					t = t1;
					t1 = t1->next;
				}
			} else {
				List_2* t = *start;
				List_2* t1 = t->next;
				List_2* t2 = t1->next;

				while (t1) {
					if (t1->data.val == value) {
						t->next = t1->next;
						t2->previous = t1->previous;
						delete t1;
						return;
					}
					t = t1;
					t1 = t2;
					t2 = t2->next;
				}
				return;
			}
		}
	}
}

void ClearAll2S(List_2** start) {
	if (*start == 0)
		return;
	List_2* p = *start;
	List_2* t;
	while (p) {
		t = p;
		p = p->next;
		delete t;
	}
	_start_2 = NULL;
	_last_2 = NULL;
}


```
