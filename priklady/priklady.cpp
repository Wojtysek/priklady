#include <stdio.h>

//precist zadany retezec a napsat kolikrat se v nem vyskytuje urcene pismeno pismeno:
int main(void) {

	char vstup[1000], znak;
	int pocet = 0;
	printf("vlozte retezec: ");
	//vstup textu i s mezerami o max. velikosti bufferu
	fgets(vstup, sizeof(vstup), stdin);
	printf("vlozte hledane pismeno: ");
	scanf_s("%c", &znak);

	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] == znak) pocet++;
	}
	printf("pocet pismen v %c byl %d\n", znak, pocet);
}