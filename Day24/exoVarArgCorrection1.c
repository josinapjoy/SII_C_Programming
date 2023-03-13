#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
double evaluation_expression(int num, ...);

void	verification_nb_arg(int num);
double	addition(double x, double y);
double	soustraction(double x, double y);
double	operation(double y, double x, char operateur);

void verification_nb_arg(int num) {
	if (num % 2 != 0) {
		printf("Nombre d'argument saisi inconrecte \n");
		exit(EXIT_FAILURE);
	}
	printf("Nombre d'arguement correcte \n");

}

double addition(double x, double y) {
	return x + y;
}
double soustraction(double x, double y) {
	return x - y;
}

double operation(double y, double x, char operateur) {
	switch (operateur) {
	case '+':
		return addition(y, x);
		break;
	case '-':
		return soustraction(y, x);
		break;
	default:
		printf("Opérateur non accepté \n");
		exit(EXIT_FAILURE);

	}
}

double evaluation_expression(int num, ...) {

	va_list arg_ptr;
	double l_operande;
	char l_operateur;


	va_start(arg_ptr, num);

	double total = 0.0;

	for (int count = 0; count <= num; count++) {

		if (count % 2) {

			l_operande = va_arg(arg_ptr, double);
			total = operation(total, l_operande, l_operateur);

		}
		else {
			l_operateur = va_arg(arg_ptr, char);
		}

	}
	va_end(arg_ptr);
	return total;
}


int main() {
	int nb_arg = 4;
	verification_nb_arg(nb_arg);
	double resultat = evaluation_expression(nb_arg, '+', 6.0, '-', 4.0);

	printf("%lf", resultat);
	exit(EXIT_SUCCESS);
}

