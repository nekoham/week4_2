#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n, m = 1;
	printf("Enter the number : ");
	scanf("%d", &n);
	int amount = n;

	for (int i = 1; i <= 2 * n; i++) {
		int x = n, y = 1;
		
		if (i != n) {
			while (x > abs(amount - 1)) {
				printf(" ");
				x -= 1;
			}

			//the pattern will be one space off when i < n so putting this here fix it
			if (i < n) {
				printf("\b");
			}

			while (y <= abs(2 * amount - 1)) {
				printf("*");
				y += 1;
			}
			printf("\n");
		}
		//do nothing
		else {}
		
		amount -= 1;
	}
	
}

