#include "stdafx.h"
#include "DivideTwoIntegers.h"

using namespace std;

int DivideTwoIntegers::divide(int dividend, int divisor)
{
	if (dividend == -2147483647 - 1 ) {
		if (divisor == -1)
			return 2147483647; // overflow and return 2^31 - 1
		else if (divisor == -2147483647 - 1)
			return 1;
	}

	unsigned int u_dividend = abs(dividend), u_divisor = abs(divisor), divisor_val = u_divisor;

	int result = 0, multiple = 1;
	while (u_divisor <= u_dividend) {
		u_divisor <<= 1;
		multiple <<= 1;
		if (u_divisor == 2147483648u) {
			if (u_dividend < 2147483648u) {
				u_divisor >>= 1;
				multiple >>= 1;
				multiple = abs(multiple);
			}
			u_dividend -= u_divisor;
			result += multiple;
			break;
		}
	}

	while (divisor_val <= u_dividend) {
		u_divisor >>= 1;
		multiple >>= 1;
		if (u_divisor <= u_dividend) {
			u_dividend -= u_divisor;
			result += multiple;
		}
	}

	int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
	return sign*result;
}
