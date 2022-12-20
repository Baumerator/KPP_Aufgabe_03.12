#include <stdio.h>
int main() {
int n;
printf("Wie ist dein Wert für n?\n");
scanf("%d", &n);
int i, x=0, y=1, z;

if (n>1) {
	for(i=2;i<n;i++) {
	z=x+y;
	printf("Ergebnis:%d\n", z);
	x=y;
	y=z;
	}
	}
}
