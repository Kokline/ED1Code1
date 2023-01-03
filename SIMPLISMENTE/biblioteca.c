#include "biblioteca.h"
#include <stdlib.h>
#include <stdio.h>

dadoSimples* inserirInicio(dadoSimples *lista){
	dadoSimples *novo = (dadoSimples*) malloc (sizeof(dadoSimples));
	novo->codigo = rand() % 1000;
	novo->proximo = lista;
	return novo;
}

dadoSimples* inserirFim(dadoSimples *lista){
	dadoSimples *novo = (dadoSimples*) malloc (sizeof(dadoSimples));
	novo->codigo = rand() % 1000;
	novo->proximo = NULL;

	if (lista == NULL){
		return novo;
	} else {
		dadoSimples *tmp = lista;

		while (tmp->proximo != NULL){
			tmp = tmp->proximo;
		}
		tmp->proximo = novo;
		return lista;
	}
}

void imprimirLista(dadoSimples *tmp){
	if (tmp == NULL){
		return;
	}

	printf("\n%p - Código %d - Próximo %p\n",
			tmp, tmp->codigo, tmp->proximo);
	imprimirLista(tmp->proximo);
}

dadoSimples* excluir(dadoSimples *lista, int codigo){
	dadoSimples *anterior = NULL,
				*atual = lista;

	if (anterior == NULL && codigo == atual->codigo){
		lista = lista->proximo;
		free(atual);
		return lista;
	} else {
		while (atual != NULL){
			if (codigo == atual->codigo){
				anterior->proximo = atual->proximo;
				free(atual);
				return lista;
			} else {
				anterior = atual;
				atual = atual->proximo;
			}
		}
	}
	printf("\nRegistro não encontrado.\n");
	return lista;
}









