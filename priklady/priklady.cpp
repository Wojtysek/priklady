#include <stdio.h>

//precist zadany retezec a napsat kolikrat se v nem vyskytuje urcene pismeno pismeno:
int main(void) {

	char vstup[1000], znak;
	int znaky = 0;
	int samohlasky = 0;
	int mezery = 0;
	int souhlasky = 0;
	int cislice = 0;
	int abc = 0;
	int a = 0, b =0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
	printf("vlozte retezec: ");
	//vstup textu i s mezerami o max. velikosti bufferu
	fgets(vstup, sizeof(vstup), stdin);
	printf("vlozte hledane pismeno: ");
	scanf_s("%c", &znak);

	//pocet hledanych pismen
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == znak) znaky++;
	}
	printf("pocet %c je %d\n", znak, znaky);

	//pocet samohlasek
	for (int i = 0; vstup[i] != '\0';i++) {
		if (vstup[i] == 'a'|| vstup[i] == 'e'|| vstup[i] == 'i'|| vstup[i] == 'o'|| vstup[i] == 'u') samohlasky++;
	}
	printf("pocet samohlasek: %d\n", samohlasky);

	//pocet mezer
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == ' ') mezery++;
	}
	printf("pocet mezer v textu: %d\n", mezery);

	//pocet tvrdych souhlasek
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'h' || vstup[i] == 'ch' || vstup[i] == 'k' || vstup[i] == 'r' || vstup[i] == 'd' || vstup[i] == 't' || vstup[i] == 'n') souhlasky++;
	}
	printf("pocet tvrdych souhlasek: %d\n", souhlasky);

	//pocet cislic
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] >= 0 && vstup[i] <= 9) cislice++;
	}
	printf("pocet cislic: %d\n", cislice);

	//pocet pismen z abecedy
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] >= 'a' && vstup[i] <= 'z') abc++;
	}
	printf("pocet pismen abecedy: %d\n", abc);

	//pocet stejnych znaku
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'a') a++;
	}
	if (a > 0) printf("a: %d", a);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'b') b++;
	}
	if (a > 0) printf("b: %d", b);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'c') c++;
	}
	if (a > 0) printf("c: %d", c);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'd') d++;
	}
	if (a > 0) printf("d: %d", d);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'e') e++;
	}
	if (a > 0) printf("e: %d",e);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'f') f++;
	}
	if (a > 0) printf("f: %d", f);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'g') g++;
	}
	if (a > 0) printf("g: %d", g);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'h') h++;
	}
	if (a > 0) printf("h: %d", h);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'i') i++;
	}
	if (a > 0) printf("i: %d", i);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'j') j++;
	}
	if (a > 0) printf("j: %d", j);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'k') k++;
	}
	if (a > 0) printf("k: %d", k);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'l') l++;
	}
	if (a > 0) printf("l: %d", l);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'm') m++;
	}
	if (a > 0) printf("m: %d", m);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'n') n++;
	}
	if (a > 0) printf("n: %d", n);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'o') o++;
	}
	if (a > 0) printf("o: %d", o);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'p') p++;
	}
	if (a > 0) printf("p: %d", p);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'q') q++;
	}
	if (a > 0) printf("q: %d", q);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'r') r++;
	}
	if (a > 0) printf("r: %d", r);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 's') s++;
	}
	if (a > 0) printf("s: %d", s);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 't') t++;
	}
	if (a > 0) printf("t: %d", t);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'u') u++;
	}
	if (a > 0) printf("u: %d", u);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'v') v++;
	}
	if (a > 0) printf("v: %d", v);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'w') w++;
	}
	if (a > 0) printf("w: %d", w);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'x') x++;
	}
	if (a > 0) printf("x: %d", x);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'y') y++;
	}
	if (a > 0) printf("y: %d", y);
	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == 'z') z++;
	}
	if (a > 0) printf("z: %d", z);
}