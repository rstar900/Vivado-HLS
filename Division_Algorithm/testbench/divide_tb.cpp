#include <stdio.h>

void divide(unsigned char N, unsigned char D, unsigned char* Q, unsigned char* R);

int main()
{
	unsigned char N, D, Q, R;

	N = 8; D = 3;
	divide(N, D, &Q, &R);
	printf("Division of %d by %d is: <Q: %d, %R: %d>\n", N, D, Q, R);

	N = 4; D = 2;
	divide(N, D, &Q, &R);
	printf("Division of %d by %d is: <Q: %d, %R: %d>\n", N, D, Q, R);

	return 0;
}
