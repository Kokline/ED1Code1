#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

struct simples{
	int codigo;
	struct simples *proximo;
};

typedef struct simples dadoSimples;

dadoSimples* inserirInicio(dadoSimples *lista);
dadoSimples* inserirFim(dadoSimples *lista);
void imprimirLista(dadoSimples *tmp);
dadoSimples* excluir(dadoSimples *lista, int codigo);

#endif
