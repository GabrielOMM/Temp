// Aluno: Gabriel Oliveira Mota Machado 
// Matrícula: UC21101274

//

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


main ()
{

	setlocale(LC_ALL, "Portuguese");

	// Declaração da variável e do ponteiro
	float real;
	float *ponteiro1 = &real;
	
	// Leitura do número real
	printf("Digite um número real: ");
	scanf("%f", &real);
	
	// Impressão do valor da variável por meio do ponteiro
	printf("\n\n");
	printf("O valor da variável acessado pelo ponteiro é %.2f", *ponteiro1 );

	
}
