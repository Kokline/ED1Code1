#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	dadoSimples *listaSimples = NULL;
	int i;

	for (i = 0; i < 5; i++) {
		//listaSimples = inserirInicio(listaSimples);
		listaSimples = inserirFim(listaSimples);
	}
	imprimirLista(listaSimples);

	listaSimples = excluir(listaSimples, 467);
	printf("\n-------------------------\n");
	imprimirLista(listaSimples);


	return EXIT_SUCCESS;
}
