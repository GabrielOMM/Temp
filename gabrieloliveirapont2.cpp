// Aluno: Gabriel Oliveira Mota Machado 
// Matr�cula: UC21101274

//

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


main ()
{

	setlocale(LC_ALL, "Portuguese");

	// Declara��o da vari�vel e do ponteiro
	float real;
	float *ponteiro1 = &real;
	
	// Leitura do n�mero real
	printf("Digite um n�mero real: ");
	scanf("%f", &real);
	
	// Impress�o do valor da vari�vel por meio do ponteiro
	printf("\n\n");
	printf("O valor da vari�vel acessado pelo ponteiro � %.2f", *ponteiro1 );

	
}
