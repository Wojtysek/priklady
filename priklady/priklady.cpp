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
	
}