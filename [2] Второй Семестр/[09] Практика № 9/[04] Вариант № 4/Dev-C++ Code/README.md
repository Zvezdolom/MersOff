```c++
#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "constructor A" << endl;
	}
	void f() {
		cout << "A";
	}
};

class C : public virtual A {
public:
	C() {
		cout << "constructor C" << endl;
	}
	void f() {
		cout << "C";
	}
};

class B : public virtual A, public virtual C {
public:
	B() {
		cout << "constructor B" << endl;
	}
	void f() {
		cout << "B";
	}
};

class D : public virtual B{
public:
	D() {
		cout << "constructor D" << endl;
	}
	void f() {
		cout << "D";
	}
};

class E : public virtual C, public virtual D {
public:
	E() {
		cout << "constructor E" << endl;
	}
	void f() {
		cout << "E";
	}
};

class F : public virtual D, public virtual E {
public:
	F() {
		cout << "constructor F" << endl;
	}
	void f() {
		cout << "F";
	}
};

int main() {
	F object;
	object.f();
// ВЫБРАНО НАПРАВЛЕНИЕ E -> D
	return 0;
}

```
