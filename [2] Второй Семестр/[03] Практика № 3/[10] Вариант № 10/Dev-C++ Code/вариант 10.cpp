#include <iostream>
#include <windows.h>

using namespace std;

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	FILE *in;
	FILE *out;
	in=fopen("file10a.txt","r");
	out=fopen("file10b.txt","w+");
	char c;
	while (!feof(in)) {
		fread(&c, 1, 1, in);
		if (c >= 48 && c <= 57) {
			fwrite(&c, 1, 1, out);
		}
	}
	fclose(in);
	in=fopen("z9a.txt","r");
	fread(&c, 1, 1, in);
	while (!feof(in)) {
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			fwrite(&c, 1, 1, out);
		}
		fread(&c, 1, 1, in);
	}
	fclose(in);
	fclose(out);
}
