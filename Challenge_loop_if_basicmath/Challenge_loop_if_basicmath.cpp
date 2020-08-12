#include<stdio.h>
#include<math.h>
int main()
{
	int num1, num2, re = 0, a, b;
	double av, sd, i = 0, p1, p2, p = 0, re2, sq;
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		a = num1;
		b = num2;
		while (a >= b) {
			printf("%d ", a);-
				i++;
			re += a;
			a--;
		}
		av = re / i;
		printf("\n");
		printf("Average = %.1lf\n", av);
		while (num1 >= num2) {
			p1 = num1 - av;
			p2 = pow(p1, 2);
			p += p2;
			num1--;
		}
		i = i - 1;
		re2 = p / i;
		sq = sqrt(re2);
		printf("S.D. = %.2lf", sq);
	}
	else if (num1 < num2) {
		a = num1;
		b = num2;
		while (a <= b) {
			printf("%d ", a);-
				i++;
			re += a;
			a++;
		}
		av = re / i;
		printf("\n");
		printf("Average = %.1lf\n", av);
		while (num1 <= num2) {
			p1 = num1 - av;
			p2 = pow(p1, 2);
			p += p2;
			num1++;
		}
		i = i - 1;
		re2 = p / i;
		sq = sqrt(re2);
		printf("S.D. = %.2lf", sq);
	}
	else {
		printf("%d\n", num1);
		printf("Average = %d\n", num1);
		printf("S.D. = NaN");
	}
	return 0;
}