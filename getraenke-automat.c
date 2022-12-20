#include <stdio.h>

int main() {
	int sorte, menge, rest, ergebnis;
	float preis;
	printf("Waehlen Sie ihr Getraenk aus:\n1) Wasser (0,50 Euro)\n2) Limonade (1,00 Euro)\n3) Bier (2,00 Euro)\nGeben sie 1, 2 oder 3 ein: ");
	scanf("%d", &sorte);
	if (sorte==1) {
		preis=0,50;
	} else if (sorte==2) {
		preis=1,00;
 	} else if (sorte==3) {
		preis=2,00;
 	}
	printf("Geben sie die gewuenschte Menge ein: ");
	scanf("%d", &menge);
	rest=preis*menge;
	printf("\n--- Bezahlvorgang ---\n");
	while (rest!=0) {
		printf("Es fehlen noch %d Euro.\n", rest);
		scanf("%d", &ergebnis);
		rest=rest-ergebnis;
	}
	printf("Vielen Dank, bitte entnehmen sie ihre Getraenke.\n");
}
