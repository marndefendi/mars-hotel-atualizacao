#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30], sobrenome[30], CPF[11];
    char cartao[15], CEP[15], quantidade[10];
    int concluida;
} Hotel;

Hotel hoteis[30];
int numHoteis = 0;

void FazerCheckin();
void ServicodeQuarto();
void FazerPedido();
void finalizaFuncao();

int main() {
    int opcmenu;
    do {
    
    printf("---- Seja bem vindo(a) ao hotel Mars! ----\n");
    printf ("1- Fazer checkin.\n");
    printf ("2- Solitar servico de quarto.\n");
    printf ("3- Fazer pedido.\n");
    printf ("4 -sair\n");
    scanf("%d", &opcmenu);
        getchar(); 
        
        switch (opcmenu){
            case 1:
               FazerCheckin();
                break;
                
            case 2:
                ServicodeQuarto();
                break;
                
            case 3:
                FazerPedido();
                break;
                
            case 4:
                system ("cls");
                printf("Obrigado!\n");
                break;
                
            default:
                system ("cls");
                printf("Opção invalida!, tente novamente\n");
                break;
        }
    } while (opcmenu != 4);

    return 0;
}

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("cls");
}

void FazerCheckin() {
    system("cls");
    printf("---- Complete as informacoes a seguir----\n");
    printf("Nome: ");
    scanf(" %[^\n]", hoteis[numHoteis].nome);
    printf("Sobrenome: ");
    scanf(" %[^\n]", hoteis[numHoteis].sobrenome);
    printf("CPF: ");
    scanf(" %[^\n]", hoteis[numHoteis].CPF);
     printf("Cartao: ");
    scanf(" %[^\n]", hoteis[numHoteis].cartao);
     printf("CEP: ");
    scanf(" %[^\n]", hoteis[numHoteis].CEP);
     printf("Quantas pessoas: ");
    scanf(" %[^\n]", hoteis[numHoteis].quantidade);
    hoteis[numHoteis].concluida = 0;
    numHoteis++;
    finalizaFuncao();
}

void ServicodeQuarto() {
	int nquarto, op2;
           
    system("cls");
    printf("----Selecione as opcoes desejadas----\n");
    	printf("1- Camareira\n");
        printf("2- Comida\n");
        printf("3- Cobertores\n");
        printf("4- Toalhas\n");
        scanf ("%d", &op2);
        printf("Escreva seu numero de quarto:\n");
        scanf("%d", &nquarto);
        printf("Obrigado!");
       
    finalizaFuncao();
}

void FazerPedido() {	 	
    char pedido;
	int nquarto2;
    system("cls");
     printf("Qual pedido deseja fazer?\n");
        scanf("%s", &pedido);
        printf("Escreva o numero do seu quarto:\n");
        scanf("%d", &nquarto2);
        printf("Obrigado!");
        numHoteis++;
        finalizaFuncao();
}