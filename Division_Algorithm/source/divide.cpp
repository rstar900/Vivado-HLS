void divide (unsigned char N, unsigned char D, unsigned char* Q, unsigned char* R)
{
	// Valid output should only be given when denominator is not 0
	if (D != 0)
	{
		// Initial values for Quotient and Remainder
		*Q = 0;
		*R = 0;

		// Repeat for 8 digits of numerator starting from leftmost digit and going right in each iteration
		for (int i = 7; i >= 0; i--)
		{
			// Shifting R by 1 bit to the left
			*R <<= 1;

			// Extracting the ith bit of N and setting the LSB of R to the same
			*R |= (N & (1 << i)) >> i;

			if (*R >= D)
			{
				*R -= D;

				// Setting the ith bit of Q to 1
				*Q |= (1 << i);
			}
		}
	}
}
