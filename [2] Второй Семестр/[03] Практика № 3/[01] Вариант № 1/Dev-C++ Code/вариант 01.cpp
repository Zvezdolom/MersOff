#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	char c;
	in=fopen("file01.txt","r");
	int letter[52];
	for (int i = 0; i < 52; i++) {
		letter[i] = 0;
	}
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c >= 65 && c <= 90) {
			letter[c-65]++;
		}
		if (c >= 97 && c <= 122) {
			letter[c-97+26]++;
		}
		fread(&c, 1, 1, in);
	}
	int max = 0;
	int pos;
	for (int i = 0; i < 52; i++) {
		if (letter[i] > max) {
			max = letter[i];
			pos = i;
		}
	}
	if (pos >= 26) {
		pos = pos + 6;
	}
	c = pos+65;
	cout << c << "\t";
	fclose(in);
}
