#include<stdio.h>
int main() {
	int x, y;
	printf("Gib die erste Zahl ein.\n");
	scanf("%d", &x);
	printf("Gib die zweite Zahl ein.\n");
	scanf("%d", &y);
	while (x!=y) {
		if(x>y) {
			x=x-y;
		} else {
			y=y-x;
		}
	}
printf("Der GGT ist %d.\n", x);
printf("oder %d.\n", y);
return 0;
}
