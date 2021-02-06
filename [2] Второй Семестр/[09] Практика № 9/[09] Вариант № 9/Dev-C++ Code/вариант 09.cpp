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

class B : public virtual A {
public:
	B() {
		cout << "constructor B" << endl;
	}
	void f() {
		cout << "B";
	}
};

class C : public virtual B {
public:
	C() {
		cout << "constructor C" << endl;
	}
	void f() {
		cout << "C";
	}
};

class E : public virtual A, public virtual B, public virtual C {
public:
	E() {
		cout << "constructor E" << endl;
	}
	void f() {
		cout << "E";
	}
};

class D : public virtual C, public virtual E {
public:
	D() {
		cout << "constructor D" << endl;
	}
	void f() {
		cout << "D";
	}
};

class F : public virtual C, public virtual D {
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

	return 0;
}
