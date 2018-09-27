#include <iostream>
using namespace std;

typedef struct sCell
{
	int info;
	struct sCell *prox;
}celula;

typedef struct sHash
{
	celula *tabela_hash[8];
}HASH;

void inicializar(HASH *tabela){
	for (int i = 0; i < 8; i++)
	{
		tabela->tabela_hash[i] = NULL;
	}
}

int posicao_vazia(HASH *tabela, int chave){

	if (tabela->tabela_hash[chave] == NULL)
		return 1;
	return 0;
}

int hashing(int *n, HASH *tabela){
	
	int chave = *n % 8;

	celula *no = (celula*)malloc(sizeof(celula));
	no->info = *n;
	no->prox = NULL;

	if (posicao_vazia(tabela, chave))
	{
		tabela->tabela_hash[chave] = no;
		return 1;
	}
	
	celula *aux = tabela->tabela_hash[chave];
	while(aux->prox != NULL)
	{
		aux = aux->prox;
	}

	aux->prox = no;
	return 1;
}

void imprimir(HASH *tabela){
	for (int i = 0; i < 8; i++)
	{
		if(!posicao_vazia(tabela, i))
		{
			celula *aux = tabela->tabela_hash[i];
			while(aux != NULL)
			{
				cout << "Posicao hash: " << i << " - " <<  aux->info << endl;
				aux = aux->prox;
			}
		}
	}
}

int main(){
	
		int vetor[5]{5, 8, 9, 3, 4};

		HASH tabela;

		inicializar(&tabela);
		for (int i = 0; i < 5; i++)
		{
			hashing(&vetor[i], &tabela);
		}

		imprimir(&tabela);

	return 0;
}
