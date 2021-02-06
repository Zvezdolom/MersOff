#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	char c;
	int count = 1;
	in=fopen("file05.txt","r");
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c == '\n') {
			count++;
		}
		fread(&c, 1, 1, in);
	}
	cout << count << "\n";
	fclose(in);
}
