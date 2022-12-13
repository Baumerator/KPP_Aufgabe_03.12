#include<stdio.h>
int main(){
	int n;
	int x=1, y=1;
	printf("Gebe n an.\n");
	scanf("%d", &n);
	while (x<n) {
		y=y*x;
		x++;
	}
	printf("Die Fakultaet ist %d.\n", y);
}

