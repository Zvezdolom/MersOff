#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	FILE *out;
	in=fopen("file08a.txt","r");
	out=fopen("file08b.txt","w+");
	char c;
	int number = 0;
	int letter = 0;
	int length = -1;
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if (c >= 48 && c <= 57) {
			number++;
		}
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			letter++;
		}
		length++;
		fread(&c, 1, 1, in);
	}
	fclose(in);
	in=fopen("z7a.txt","r");
	if (letter > number) {
		fread(&c, 1, 1, in);
		fwrite(&c, 1, 1, out);
		for (int i = 0; i < length; i++) {
			fread(&c, 1, 1, in);
			if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
				fwrite(&c, 1, 1, out);
			}
		}
	}
	if (letter < number) {
		fread(&c, 1, 1, in);
		fwrite(&c, 1, 1, out);
		for (int i = 0; i < length; i++) {
			fread(&c, 1, 1, in);
			if (c >= 48 && c <= 57) {
				fwrite(&c, 1, 1, out);
			}
		}
	}
	fclose(in);
	fclose(out);
}
