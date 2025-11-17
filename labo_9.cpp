#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>

int main() {

	int i, quantity, enter_value;
	std::vector <float> a;
	std::vector <float> b;
	std::vector <float> a_sorted;
	std::vector <float> b_sorted;

	printf("Enter the quantity of massive a[]: ");
	scanf("%i", &quantity);

	for (i = 0; i <= quantity - 1; i++) {
		printf("Enter element a[%i]: ", i);
		scanf("%f", &enter_value);
		a.push_back(enter_value);
	}

	printf("Enter the quantity of massive b[]: ");
	scanf("%i", &quantity);

	for (i = 0; i <= quantity - 1; i++) {
		printf("Enter element b[%i]: ", i);
		scanf("%f", &enter_value);
		b.push_back(enter_value);
	}
}