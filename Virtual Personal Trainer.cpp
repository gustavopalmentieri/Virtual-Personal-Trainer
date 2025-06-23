#include <stdio.h>
#include <locale.h>

int main () {
	
	char nome[100];
	int opcao, idade;
	float rg, cpf, matricula, codigo, altura, peso;
	
	setlocale(LC_ALL, "portuguese");
	printf (" -------------- > Virtual Personal Trainer < --------------\n");
	
	printf ("\n ---------------------------\n");
	printf ("\n 1 - Cadastro Pessoal\n");
	printf ("\n 2 - Cadastro Peronal Trainer\n");
	printf ("\n 3 - Dados Físicos\n");
	printf ("\n 4 - Sair\n");
	printf ("\n ---------------------------\n");
	
	printf ("Escolha sua entrada: ");
	scanf ("%d", &opcao);
	
	if (opcao == 1){
		
		printf ("\nDigite seu nome completo: ");
		scanf ("%s", &nome[100]);
		
		printf ("\nDigite sua idade: ");
		scanf ("%d", &idade);
		
		printf ("\nDigite seu RG: ");
		scanf ("%f", &rg);
		
		printf ("\nDigite seu CPF: ");
		scanf ("%f", &cpf);
		
		printf ("\nRegistrado!!! Saindo.......\n");
		
	} if (opcao == 2){
		
		printf ("\nDigite seu primeiro nome: ");
		scanf ("%s", &nome[100]);
		
		printf ("\nDigite seu Registro Personal (CREF): ");
		scanf ("%f", &matricula);
		
		printf ("\nDigite o Código da Academia: ");
		scanf ("%f", &codigo);
		
		printf ("\nEsses são seus alunos matrículados: Work.........\n");

	} if (opcao == 3){

		printf (" ---------- > Evolução do seu Físico < -----------\n");

		printf ("\nDigite seu peso atual: ");
		scanf ("%f", &peso);

		printf ("\nDigite sua altura:  ");
		scanf ("%f", &altura);

		printf ("\nPressione qualquer tecla, para um relatório do seu personal!!\n Work.....");

	} if (opcao == 4){

		printf ("Saindo...\n");
	}

}
