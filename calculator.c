#include <stdio.h>

int main()

{

	char op;
	double first, second;
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &op);
	printf("Enter two operands: ");
	scanf("%lf %lf", &first, &second);

// logic

	switch (op)

{
	case '+':
		printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
		break;

	case '-':
		printf("%.1lf - %1lf = %1lf", first, second, first - second);
		break;

	case '*':
		printf("%1lf * %1lf = %1lf", first, second, first * second);
		break;

	case '/':
		printf("%1lf / %1lf = %1lf", first, second, first / second);
		break;

// if operator doesn't match any case constant

	default:
		printf("Error! Operator is not valid!");

}
\n;
}
