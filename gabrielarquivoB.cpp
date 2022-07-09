// Gabriel Oliveira Mota Machado
// Matrícula: UC21101274

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main() {

	// Declaração das Variáveis
    FILE *arquivo;
    int i, j, num = 0;
    char texto[51], maiuscula[51];
    char nomeArquivo[9] = {'a','r','q','0','2','.','t','x','t'};

    // Abrir arquivo
    arquivo = fopen( nomeArquivo, "w" );

    for (i = 1; i <= 5; i++) {

		// Erro
        if (arquivo == NULL) {
            fprintf( stderr, "Não foi possível abrir o arquivo!\n");
            exit(EXIT_FAILURE);
          
		// Sucesso  
        } else {

			// Lê as frases
            printf("Digite a %da frase: ", i);
            fgets( texto, 50, stdin );
            texto[strlen(texto)-1] = '\0';
            
            

			//Converte os caracteres em maiúsculas
            j = 0;
            while ( texto[j] != '\0') {
                maiuscula[j] = toupper(texto[j]);
                j++;
            }
            maiuscula[j] = '\0';


            if ( i != 1 ) {
                fprintf( arquivo, "\n" );
            }
            fprintf( arquivo, "%s", maiuscula );

        }

    }

    // Fecha arquivo
    fclose(arquivo);

	// Reabre arquivo
    arquivo = fopen( nomeArquivo, "r" );

    if (arquivo == NULL) {
        fprintf(stderr, "Não foi possível abrir o arquivo!\n");
        exit(EXIT_FAILURE);
    }
    
    else{
	
		// Mostra texto lido na tela
	    while ( !feof(arquivo) ) {
	        fgets( texto, 50, arquivo );
	        printf( "Texto Lido: %s", texto );
	    }
	
	    fclose(arquivo);
    
	}

}
