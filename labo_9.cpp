#define _CRT_SECURE_NO_WARNINGS

#include <algorithm> // it's for std::swap
#include <stdio.h>

int main() {

	int i, j, quantity; float enter_value;
	float a[10], b[10];

	printf("Enter quantity of elements vector a = ");
	scanf("%i", &quantity);

	//puting values in vector a
	for (i = 0; i < quantity; i++) {
		printf("Enter a[%i]=", i);
		scanf("%f", &enter_value);
		a[i] = enter_value;
	}

	//sorting a
	for (j = 0; j < quantity; j++) {      // main cycle
		for (int i = 0; i < quantity - 1; i++) {  // checking next number to current element

			if (a[i] > a[i + 1]) {

				std::swap(a[i], a[i + 1]);

			}
		}
	}

	// print sorted a
	printf("a_sorted = ");
	for (int i = 0; i < quantity; i++) {
		printf("%0.2f ", a[i]);
	}
	printf("\n");

	/* ----------------------------------------------------------------------------------------------------- */

	printf("Enter quantity of elements vector b = ");
	scanf("%i", &quantity);

	//putting values in vector b
	for (i = 0; i < quantity; i++) {
		printf("Enter b[%i]=", i);
		scanf("%f", &enter_value);
		b[i] = enter_value;
	}
	return 0;
}