#include <stdio.h>

int main() {
	int einwurf=0;
	printf("Getraenke Automat | Bitte werfen Sie 1 Euro ein: ");
	scanf("%d", &einwurf);
	if (einwurf == 1) {
    		printf("\nVielen Dank, bitte entnehmen Sie ihr Getraenk.\n");
	}else{
    		printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");
	}
}
