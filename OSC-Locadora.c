#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*definições de cores asci para o console*/
#define VERMELHO     "\x1b[31m"
#define VERDE "\x1b[92m"
#define AZUL	 "\x1b[94m"
#define RESET   "\x1b[0m"
#define AMARELO "\x1b[33m"

/*função que importa a data atual do sistema*/

void getCurrentDate(int *day, int *month, int *year) {
    time_t now = time(NULL);
    struct tm *localTime = localtime(&now);
    *day = localTime->tm_mday;
    *month = localTime->tm_mon + 1;
    *year = localTime->tm_year + 1900;
}

/*função que verificar se a data guardada na variavel é uma data valida ou nao*/

bool isDateValid(int day, int month, int year) {
    if (year < 2023)
        return false;

    if (month < 1 || month > 12)
        return false;

    if (day < 1)
        return false;

    int daysInMonth;

    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    if (day > daysInMonth)
        return false;

    return true;
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system ("color 04");
	
	int currentDay, currentMonth, currentYear;

    getCurrentDate(&currentDay, &currentMonth, &currentYear);
	
	setlocale(LC_ALL, "Portuguese");
	


	char nome[5][550],sobrenome[5][550],RG[5][550],telefone[5][550],email[5][550],cpf[5][550];
	/*variaveis que guardarão os dados dos clientes.*/
	
/*todas as variaveis nesse sistema serão tratadas desta forma sendo p para paulista e a para alphavile - 1 sala de reuniao 2 treinamento 3 coworking*/	
	
	int ctap[5] /*contrato de aluguel ativo*/,ctaa[5], ctap1[5]={0}, ctap2[5]={0}, ctap3[5]={0},ctaa1[5]={0}, ctaa2[5]={0}, ctaa3[5]={0};	
	int opcao1,opcao2,opcao3,opcao4,opcao5,i,m3=0,mi=1,ic=0,uv=0/*unidade de visita*/,as1=0;
	int dap1[5]={0},dap2[5]={0},dap3[5]={0},daa1[5]={0},daa2[5]={0},daa3[5]={0} /*duração do aluguel*/,vap1[5],vap2[5],vap3[5],vaa1[5],vaa2[5],vaa3[5]/*valor do aluguel 1,2,3*/;
	int vta[5]/*valor total do aluguel*/;
	int v_ap[5]={0},v_aa[5]={0},av=0,asp=0,ai=0,as=0,ai1=0;
	int sap1[5]={0},sap2[5]={0},sap3[5]={0},saa1[5]={0},saa2[5]={0},saa3[5]={0};
	char usuario[30];
	int senha=0,aut=0;
	int aj/*menu de ajuda*/,aal=0;
	
	
	int datavp[4][3];
	int datava[4][3];
	int dataap1[4][3];
	int dataap2[4][3];
	int dataap3[4][3];
	int dataaa1[4][3];
	int dataaa2[4][3];
	int dataaa3[4][3];
	
/*variaveis para armazenamento de datas*/	
	
	
/*loop que repetira o processo de login caso negado*/	
	while (aut=1){
	printf ("\n");
	printf (AZUL"\t\t\t _¦¦¦¦¦¦_     _¦¦¦¦¦¦¦¦  _¦¦¦¦¦¦¦¦ \n"RESET);
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦ \n"RESET);
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦   ¦¦¦    ¦¯  ¦¦¦    ¦¯  \n"RESET);
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦   ¦¦¦        ¦¦¦       \n"RESET); 
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦        \n"RESET);
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦          ¦¦¦ ¦¦¦    ¦_  \n"RESET);
	printf (AZUL"\t\t\t¦¦¦    ¦¦¦    _¦    ¦¦¦ ¦¦¦    ¦¦¦ \n"RESET);
	printf (AZUL"\t\t\t ¯¦¦¦¦¦¦¯   _¦¦¦¦¦¦¦¦¯  ¦¦¦¦¦¦¦¦¯  \n\n"RESET);
	
	printf(AZUL "\n\n\n\n\t\t\tBem-vindo ao OfficeSpaceControl\n"RESET);
	printf ("\t\t\t--------------------------------------\n");
    printf("\t\t\tInforme suas credenciais para iniciar:\n\n");
    printf("\t\t\tUsuário: ");
    scanf("%s", usuario);
    printf("\t\t\tSenha: ");
    scanf("%d", &senha);
	
	
	
	if (senha==1234){
	printf (VERDE"\n\nLogin Efetuado com sucesso\n\n"RESET);
	printf ("Iniciando...\n\n");
	system("pause");
	
	
/*loop que quando verdadeiro retorna ao menu inicial do sistema*/
	while(mi==1) {
	system("cls");	
	


	printf ("\n");
	printf (AZUL"\t\t _______\n"RESET);
	printf (AZUL"\t        |xxxxxxx|  ______ \t\t _¦¦¦¦¦¦_     _¦¦¦¦¦¦¦¦  _¦¦¦¦¦¦¦¦\n"RESET);
	printf (AZUL"\t        |xxxxxxx| | [][] |\t\t¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦\n"RESET);
	printf (AZUL"\t     ___|_xxxxxx| |[][][]|\t\t¦¦¦    ¦¦¦   ¦¦¦    ¦¯  ¦¦¦    ¦¯\n"RESET);
	printf (AZUL"\t    |++++++|xxxx| |[][][]|\t\t¦¦¦    ¦¦¦   ¦¦¦        ¦¦¦\n"RESET);
	printf (AZUL"\t    |++++++|xxxx| |[][][]|\t\t¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦\n"RESET);
	printf (AZUL"\t    |++++++|_________[][]|\t\t¦¦¦    ¦¦¦          ¦¦¦ ¦¦¦\n"RESET);
	printf (AZUL"\t    |++++++|=|=|=|=|=|[] |\t\t¦¦¦    ¦¦¦    _¦    ¦¦¦ ¦¦¦    ¦¦¦\n"RESET);
	printf (AZUL"	    |++++++|=|=|=|=|=|[][]|\t\t ¯¦¦¦¦¦¦¯   _¦¦¦¦¦¦¦¦¯  ¦¦¦¦¦¦¦¦¯ \n"RESET);
	printf (AZUL"\t____|++HH++| _HHHH__| ______\t\t\n"RESET);
	printf (AZUL"\t_______________ ______________\t\t\n\n"RESET);
	
	
	
	
		
	
	
	
	printf ("------------------------------------------");	
	printf ("------"AZUL"Bem-Vindo ao OfficeSpaceControl"RESET"-----------");
	printf ("---------------------------\n\n\n");
	printf ("------------------------\n");
	printf ("Usuário: %s\n",usuario);
	printf ("------------------------\n\n");		
	printf ("\t\t\t\t------------------"AZUL"Escolha uma opção abaixo"RESET"--------------------------\n\n");
	printf ("\t\t\t\t| 1 - Cadastrar clientes");
	printf ("\t 2 - Exibir clientes cadastrados   |\n");
	printf ("\t\t\t\t| 3 - Agendar uma visita");
	printf ("\t 4 - Alugar Salas\t\t   |\n");
	printf ("\t\t\t\t| 5 - Adicionar serviços\t 6 - Exibir contratos\t           |\n");
	printf ("\t\t\t\t| 7 - Abrir arquivo de contrato  8 - Sobre                         |\n");
	printf ("\t\t\t\t| 9 - Ajuda\t\t\t"AMARELO"10 - Sair da aplicação   	  "RESET" |\n\n");
	scanf ("%d",&opcao1);
	

/*switch principal para acesso as 9 funções do sistema*/
	switch (opcao1){
	
	
	
		case 1:
			system("cls");
			printf ("---------------------------------------------\n");
			
			printf (AZUL"             CADASTRO DE CLIENTES            \n"RESET);
			printf ("---------------------------------------------\n\n");
			printf ("Quantos clientes gostaria de cadastrar?:    \n");
			
			
			scanf ("%d",&ic);

/*em ic"contador de clientes" compararemos com o valor de colunas do vetor para armazenamos no maximo a quantidade correta de clientes. esse contador será "lembrado" em diversos momentos*/
			
			if (ic < 6 || ic % 1 != 0){
			system("cls");
			for (i=0;i<ic;i++){
			printf ("-----------------------\n");
			printf (VERDE"CADASTRANDO CLIENTE [%d]\n"RESET,i+1);
			printf ("-----------------------\n\n");
			printf ("Digite o primeiro nome no cliente: ");
			scanf ("%s",nome[i]);
			printf ("Digite o sobrenome no cliente: ");
			scanf ("%s",sobrenome[i]);
			printf ("Digite o RG do cliente: ");
			scanf ("%s",RG[i]);
			printf ("Digite o CPF do cliente: ");
			scanf ("%s",cpf[i]);
			printf ("Digite o telefone do cliente: ");
			scanf ("%s",telefone[i]);
			printf ("Digite o email do cliente: ");
			scanf ("%s",email[i]);
			
			system("cls");
			
			printf ("---------------------------------\n");
			printf (VERDE"Cliente %d cadastrado com sucesso!\n"RESET,i+1);
			printf ("---------------------------------\n");
			printf ("\nInformações do cliente: \n\n");
			printf("Nome: %s %s\n\n" ,nome[i], sobrenome[i]);
			printf ("RG: %s",RG[i]);
			printf ("\t\t\t\t\t\tCPF: %s\n",cpf[i]);
			printf ("Telefone: %s",telefone[i]);
			printf ("\t\t\t\t        E-mail: %s\n\n",email[i]);
			system("pause");
			system("cls");
			
							}
					
				
			m3=1;
			system("cls");
			break;
			}
			
			else {
				printf ("Valor invalido. Máximo de 5 cadastros\n");
				system("pause");
			m3=1;
			system("cls");
			break;	
			}
			
		case 2:
			system ("cls");
				
				for (i=0;i<ic;i++){
				printf ("---------------------------------------------\n");
				printf (AZUL"              CLIENTES CADASTRADOS           \n"RESET);
				printf ("---------------------------------------------\n\n");
				printf (VERDE"Informações do cliente [%d] \n\n"RESET,i+1);
				printf("Nome: %s %s\n\n" ,nome[i], sobrenome[i]);
				printf ("RG: %s",RG[i]);
				printf ("\t\t\t\tCPF: %s\n",cpf[i]);
				printf ("Telefone: %s",telefone[i]);
				printf ("\t\t        E-mail: %s\n\n",email[i]);
				system("pause");
				system("cls");
				
				}
					
				m3=1;
				system("cls");
				break;
				
		case 3:
		
    	system("cls");
    	printf ("---------------------------------------------\n");
		printf (AZUL"              AGENDAMENTO DE VISITA           \n"RESET);
		printf ("---------------------------------------------\n\n");
    	printf(VERDE"Escolha uma localidade para visitar: \n\n"RESET);
    	printf("1 - Unidade Paulista\t\t Rua Consolação N°25 Centro SP\n");
    	printf("2 - Unidade Alphavile\t\t Alamerada Araguaia n°30 Barueri SP\n\n\n");
    	printf(AMARELO"3 - voltar\n"RESET);
    	scanf("%d", &opcao2);

/*ao entrar no case 3 teremos um switch para navegar nesse submenu*/

    			switch (opcao2) {
        			case 1:
        				 system("cls");
        				 printf ("---------------------------------------------\n");
						 printf (AZUL"              UNIDADE PAULISTA               \n"RESET);
						 printf ("---------------------------------------------\n\n");
           				 printf("A unidade Paulista conta com diversas opções de salas para se realizar reuniões, treinamentos e cooworking!\n\n"VERDE"Deseja agendar uma visita?\n\n"RESET);          				 
           				 printf ("1 - Sim\n2 - Não \n\n");
           				 
           				 
           				 
           				 scanf ("%d",&uv);
           				 
/*este loop exibira os clientes cadastrados*/   
        				 
           				 if (uv==1){
           				 	system("cls");
           				 	printf ("Para qual cliente deseja agendar a visita?\n\n");
           				 	printf ("Informe o numero do cliente desejado: \n\n");
           				 	
           				 for (i=0;i<ic;i++){
							
							printf("[%d] - %s %s\n" ,i+1,nome[i], sobrenome[i]);
							
											}
							printf (AMARELO"\n0 para voltar\n"RESET);
									
							scanf ("%d",&av);
							
/*quando exibo o cliente, invoco contador+1 de forma que sera exibido "1-cliente, 2-cliente". nos ifs abaixo quando "av=" atenderá a determinado cliente*/							
							
										if (av==1){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[0][1], &datavp[0][2], &datavp[0][3]);

   												 if (datavp[0][3] > currentYear || (datavp[0][3] == currentYear && datavp[0][2] > currentMonth) || (datavp[0][3] == currentYear && datavp[0][2] == currentMonth && datavp[0][1] > currentDay)) {
       										 		if (isDateValid(datavp[0][1], datavp[0][2], datavp[0][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n"RESET, nome[0], sobrenome[0], datavp[0][1], datavp[0][2], datavp[0][3]);
            										v_ap[0] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
											
/*apartir de agora cada if atende a uma posição do vetor cliente e quando guardo as informações do mesmo é na posição referida*/												
												
										else if (av==2){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[1][1], &datavp[1][2], &datavp[1][3]);

   												 if (datavp[1][3] > currentYear || (datavp[1][3] == currentYear && datavp[1][2] > currentMonth) || (datavp[1][3] == currentYear && datavp[1][2] == currentMonth && datavp[1][1] > currentDay)) {
       										 		if (isDateValid(datavp[1][1], datavp[1][2], datavp[1][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n"RESET, nome[1], sobrenome[1], datavp[1][1], datavp[1][2], datavp[1][3]);
            										v_ap[1] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
/*nesses ifs teremos a validação da data utilizando as funções que importam a data do sistema e a isdatevalid que a valida. ou a data será aceita, negada por sert inferior a atual ou negada por ser invalida*/
												
										else if (av==3){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[2][1], &datavp[2][2], &datavp[2][3]);

   												 if (datavp[2][3] > currentYear || (datavp[2][3] == currentYear && datavp[2][2] > currentMonth) || (datavp[2][3] == currentYear && datavp[2][2] == currentMonth && datavp[2][1] > currentDay)) {
       										 		if (isDateValid(datavp[2][1], datavp[2][2], datavp[2][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n"RESET, nome[2], sobrenome[2], datavp[2][1], datavp[2][2], datavp[2][3]);
            										v_ap[2] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
											else if (av==4){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[3][1], &datavp[3][2], &datavp[3][3]);

   												 if (datavp[3][3] > currentYear || (datavp[3][3] == currentYear && datavp[3][2] > currentMonth) || (datavp[3][3] == currentYear && datavp[3][2] == currentMonth && datavp[3][1] > currentDay)) {
       										 		if (isDateValid(datavp[3][1], datavp[3][2], datavp[3][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n"RESET, nome[3], sobrenome[3], datavp[3][1], datavp[3][2], datavp[3][3]);
            										v_ap[3] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
										else if (av==5){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[4][1], &datavp[4][2], &datavp[4][3]);

   												 if (datavp[4][3] > currentYear || (datavp[4][3] == currentYear && datavp[4][2] > currentMonth) || (datavp[4][3] == currentYear && datavp[4][2] == currentMonth && datavp[4][1] > currentDay)) {
       										 		if (isDateValid(datavp[4][1], datavp[4][2], datavp[4][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n"RESET, nome[4], sobrenome[4], datavp[4][1], datavp[4][2], datavp[4][3]);
            										v_ap[4] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
																	
														
										else {
												m3=1;
										}
							
           				 }
           				 
           				 
           				 else{
           				 	m3=1;
           				 }
           			
           				 
           				
           				system("cls");
           			 break;

/*case 2 do submenu 2*/

        				case 2:
        					system("cls");
        				 printf ("---------------------------------------------\n");
						 printf (AZUL"              UNIDADE ALPHAVILLE               \n"RESET);
						 printf ("---------------------------------------------\n\n");
           				 printf("A unidade Alphaville conta com diversas opções de salas para se realizar reuniões, treinamentos e cooworking!\n\n"VERDE"Deseja agendar uma visita?\n\n"RESET);          				 
           				 printf ("1 - Sim\n2 - Não \n\n");
           				 
           				 
           				 
           				 scanf ("%d",&uv);
           				 
           				 if (uv==1){
           				 	system("cls");
           				 	printf ("Para qual cliente deseja agendar a visita?\n\n");
           				 	printf ("Informe o numero do cliente desejado: \n\n");
           				 	
           				 for (i=0;i<ic;i++){
							
							printf("[%d] - %s %s\n" ,i+1,nome[i], sobrenome[i]);
							
											}
							printf (AMARELO"\n0 para voltar\n"RESET);
									
							scanf ("%d",&av);
							
/*esses ifs possuem as memas propriedades explicadas acima, porem agora aplicados a 2 unidade*/
							
									if (av==1){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datava[0][1], &datava[0][2], &datava[0][3]);

   												 if (datava[0][3] > currentYear || (datava[0][3] == currentYear && datava[0][2] > currentMonth) || (datava[0][3] == currentYear && datava[0][2] == currentMonth && datava[0][1] > currentDay)) {
       										 		if (isDateValid(datava[0][1], datava[0][2], datava[0][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Alphaville na data %d/%d/%d!\n\n"RESET, nome[0], sobrenome[0], datava[0][1], datava[0][2], datava[0][3]);
            										v_aa[0] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
																											
									else if (av==2){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datava[1][1], &datava[1][2], &datava[1][3]);

   												 if (datava[1][3] > currentYear || (datava[1][3] == currentYear && datava[1][2] > currentMonth) || (datava[1][3] == currentYear && datava[1][2] == currentMonth && datava[1][1] > currentDay)) {
       										 		if (isDateValid(datava[1][1], datava[1][2], datava[1][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Alphaville na data %d/%d/%d!\n\n"RESET, nome[1], sobrenome[1], datava[1][1], datava[1][2], datava[1][3]);
            										v_aa[1] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
									else if (av==3){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datava[2][1], &datava[2][2], &datava[2][3]);

   												 if (datava[2][3] > currentYear || (datava[2][3] == currentYear && datava[2][2] > currentMonth) || (datava[2][3] == currentYear && datava[2][2] == currentMonth && datava[2][1] > currentDay)) {
       										 		if (isDateValid(datava[2][1], datava[2][2], datava[2][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Alphaville na data %d/%d/%d!\n\n"RESET, nome[2], sobrenome[2], datava[2][1], datava[2][2], datava[2][3]);
            										v_aa[2] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
									else if (av==4){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datava[3][1], &datava[3][2], &datava[3][3]);

   												 if (datava[3][3] > currentYear || (datava[3][3] == currentYear && datava[3][2] > currentMonth) || (datava[3][3] == currentYear && datava[3][2] == currentMonth && datava[3][1] > currentDay)) {
       										 		if (isDateValid(datava[3][1], datava[3][2], datava[3][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Alphaville na data %d/%d/%d!\n\n"RESET, nome[3], sobrenome[3], datava[3][1], datava[3][2], datava[3][3]);
            										v_aa[3] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
												
									else if (av==5){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datava[4][1], &datava[4][2], &datava[4][3]);

   												 if (datava[4][3] > currentYear || (datava[4][3] == currentYear && datava[4][2] > currentMonth) || (datava[4][3] == currentYear && datava[4][2] == currentMonth && datava[4][1] > currentDay)) {
       										 		if (isDateValid(datava[4][1], datava[4][2], datava[4][3])) {
           											printf(VERDE"\nVisita agendada para o cliente %s %s na unidade Alphaville na data %d/%d/%d!\n\n"RESET, nome[4], sobrenome[4], datava[4][1], datava[4][2], datava[4][3]);
            										v_aa[4] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}
															
														
														
										else {
												m3=1;
										}
							
           				 }
           				 
           				 
           				 else{
           				 	m3=1;
           				 }
           			
           				 
           				
           				system("cls");
           			 break;

       					 case 3:
          			  mi = 1;
          			  system("cls");
          			  
          			  break;
    
								}
					break;
					mi=1;

			
/*case 4 tratara do agendamento de aluguel, aqui teremos um submenu para cada unidade*/			
			case 4:
				system("cls");
    			printf ("---------------------------------------------\n");
				printf (AZUL"              AGENDAMENTO DE ALUGUEL           \n"RESET);
				printf ("---------------------------------------------\n\n");
				
    			printf(VERDE"Escolha uma localidade para Alugar: \n\n"RESET);
    			printf("1 - UNIDADE PAULISTA\t Rua Consolação N°25 Centro SP\n\n");
    			printf("2 - UNIDADE ALPHAVILLE\t Alamerada Araguaia n°30 Barueri SP\n\n");
    			printf(AMARELO"3 - Voltar\n"RESET);
    			scanf("%d", &opcao3);
			
							switch(opcao3) {
								
/*todos os comentarios acima são validos para os trechos abaixo*/
								
								case 1:
									
								system("cls");
    							printf ("----------------------------------------------------------------\n");
								printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE PAULISTA          \n"RESET);
								printf ("-----------------------------------------------------------------\n\n");
									printf (VERDE"1 - Sala de reunião"RESET" \t\t 25m² - Diaria R$250\n\n");
									printf ("- Internet de alta velocidade, Wifi e cabo\nSalas climatizadas com TV, café expresso, água e chá, sem custo adicional\nServiço de impressão e digitalização\n\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (VERDE"2 - Sala de treinamento"RESET" \t 100m² - Diaria R$450\n\n");
									printf ("-Internet de alta velocidade, Wifi e cabo\nInfraestrutura para apresentações e workshops\nControle de entrada e saida de participantes\n\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (VERDE"3 - Coworking"RESET" \t\t\t 20m² - Diaria R$100\n\n");
									printf ("- Salas climatizadas para no máximo 4 usuarios\nWifi e internet gratuitos\nAmbiente profissional\n\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (AMARELO"4 - Voltar\n"RESET);
												
									scanf ("%d",&asp);
									
										switch (asp){
										
										
											case 1:
												if (asp==1){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE PAULISTA          \n"RESET);
												printf ("----------------------------------------------------------------\n\n");
												printf(VERDE"1 - Sala de reuniões\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Informe o numero do cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
												/*
												if (av==1){
												printf("Informe a data desejada no formato dd mm ano: \n");
   												 scanf("%d %d %d", &datavp[0][1], &datavp[0][2], &datavp[0][3]);

   												 if (datavp[0][3] > currentYear || (datavp[0][3] == currentYear && datavp[0][2] > currentMonth) || (datavp[0][3] == currentYear && datavp[0][2] == currentMonth && datavp[0][1] > currentDay)) {
       										 		if (isDateValid(datavp[0][1], datavp[0][2], datavp[0][3])) {
           											printf("\nVisita agendada para o cliente %s %s na unidade Paulista na data %d/%d/%d!\n\n", nome[0], sobrenome[0], datavp[0][1], datavp[0][2], datavp[0][3]);
            										v_ap[0] = 1;
           											 system("pause");
       											 	}
														 else {
           											 		printf("\nData inválida!\n\n");
            												system("pause");
       														 }
   												 																																																}
												 else {
      										  		printf("\nData inválida! Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
    																																																												
																																																																
												}*/
												
/*como teremos 3 opções de sala por unidade , teremos um submenu após a unidade para selecionar o tipo de sala*/
												
												if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap1[0][1],&dataap1[0][2],&dataap1[0][3]);
													
													if (dataap1[0][3] > currentYear || (dataap1[0][3] == currentYear && dataap1[0][2] > currentMonth) || (dataap1[0][3] == currentYear && dataap1[0][2] == currentMonth && dataap1[0][1] > currentDay)) {
       										 		if (isDateValid(dataap1[0][1], dataap1[0][2], dataap1[0][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap1[0]);
													vap1[0]=250*dap1[0];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vap1[0],dataap1[0][1],dataap1[0][2],dataap1[0][3],dap1[0]);
													vta[0]+=vap1[0];
													
													ctap[0]=1;
													ctap1[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
													
/*note que ctap1 significa "contrato de aluguel ativo paulista sala de reuniao"*/
/*todas as variaveis nesse sistema serão tratadas desta forma sendo p para paulista e a para alphavile - 1 sala de reuniao 2 treinamento 3 coworking*/					
														
												
											if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap1[1][1],&dataap1[1][2],&dataap1[1][3]);
													
													if (dataap1[1][3] > currentYear || (dataap1[1][3] == currentYear && dataap1[1][2] > currentMonth) || (dataap1[1][3] == currentYear && dataap1[1][2] == currentMonth && dataap1[1][1] > currentDay)) {
       										 		if (isDateValid(dataap1[1][1], dataap1[1][2], dataap1[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap1[1]);
													vap1[1]=250*dap1[1];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vap1[1],dataap1[1][1],dataap1[1][2],dataap1[1][3],dap1[1]);
													vta[1]+=vap1[1];
													
													ctap[1]=1;
													ctap1[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap1[2][1],&dataap1[2][2],&dataap1[2][3]);
													
													if (dataap1[2][3] > currentYear || (dataap1[2][3] == currentYear && dataap1[2][2] > currentMonth) || (dataap1[2][3] == currentYear && dataap1[2][2] == currentMonth && dataap1[2][1] > currentDay)) {
       										 		if (isDateValid(dataap1[2][1], dataap1[2][2], dataap1[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap1[2]);
													vap1[2]=250*dap1[2];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vap1[2],dataap1[2][1],dataap1[2][2],dataap1[2][3],dap1[2]);
													vta[2]+=vap1[2];
													
													ctap[2]=1;
													ctap1[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
													
												if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap1[3][1],&dataap1[3][2],&dataap1[3][3]);
													
													if (dataap1[3][3] > currentYear || (dataap1[3][3] == currentYear && dataap1[3][2] > currentMonth) || (dataap1[3][3] == currentYear && dataap1[3][2] == currentMonth && dataap1[3][1] > currentDay)) {
       										 		if (isDateValid(dataap1[3][1], dataap1[3][2], dataap1[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap1[3]);
													vap1[3]=250*dap1[3];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vap1[3],dataap1[3][1],dataap1[3][2],dataap1[3][3],dap1[3]);
													vta[3]+=vap1[3];
													
													ctap[3]=1;
													ctap1[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap1[4][1],&dataap1[4][2],&dataap1[4][3]);
													
													if (dataap1[4][3] > currentYear || (dataap1[4][3] == currentYear && dataap1[4][2] > currentMonth) || (dataap1[4][3] == currentYear && dataap1[4][2] == currentMonth && dataap1[4][1] > currentDay)) {
       										 		if (isDateValid(dataap1[4][1], dataap1[4][2], dataap1[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap1[4]);
													vap1[4]=250*dap1[4];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vap1[4],dataap1[4][1],dataap1[4][2],dataap1[4][3],dap1[4]);
													vta[4]+=vap1[4];
													
													ctap[4]=1;
													ctap1[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
											
							
												
												
												
									
									
									
									
												}
												
												else{
												mi=1;
												}
									system("cls");
           			 				break;	
           			 				
								case 2:
									
									if (asp==2){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE PAULISTA          \n"RESET);
												printf ("----------------------------------------------------------------\n\n");
												printf(VERDE"2 - Sala de Treinamento\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Digite o cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
												
												
												
												if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap2[0][1],&dataap2[0][2],&dataap2[0][3]);
													
													if (dataap2[0][3] > currentYear || (dataap2[0][3] == currentYear && dataap2[0][2] > currentMonth) || (dataap2[0][3] == currentYear && dataap2[0][2] == currentMonth && dataap2[0][1] > currentDay)) {
       										 		if (isDateValid(dataap2[0][1], dataap2[0][2], dataap2[0][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap2[0]);
													vap2[0]=450*dap2[0];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vap2[0],dataap2[0][1],dataap2[0][2],dataap2[0][3],dap2[0]);
													vta[0]+=vap2[0];
													
													ctap[0]=1;
													ctap2[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
														
												if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap2[1][1],&dataap2[1][2],&dataap2[1][3]);
													
													if (dataap2[1][3] > currentYear || (dataap2[1][3] == currentYear && dataap2[1][2] > currentMonth) || (dataap2[1][3] == currentYear && dataap2[1][2] == currentMonth && dataap2[1][1] > currentDay)) {
       										 		if (isDateValid(dataap2[1][1], dataap2[1][2], dataap2[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap2[1]);
													vap2[1]=450*dap2[1];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vap2[1],dataap2[1][1],dataap2[1][2],dataap2[1][3],dap2[1]);
													vta[1]+=vap2[1];
													
													ctap[1]=1;
													ctap2[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
														
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap2[2][1],&dataap2[2][2],&dataap2[2][3]);
													
													if (dataap2[2][3] > currentYear || (dataap2[2][3] == currentYear && dataap2[2][2] > currentMonth) || (dataap2[2][3] == currentYear && dataap2[2][2] == currentMonth && dataap2[2][1] > currentDay)) {
       										 		if (isDateValid(dataap2[2][1], dataap2[2][2], dataap2[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap2[2]);
													vap2[2]=450*dap2[2];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vap2[2],dataap2[2][1],dataap2[2][2],dataap2[2][3],dap2[2]);
													vta[2]+=vap2[2];
													
													ctap[2]=1;
													ctap2[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
														
												if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap2[3][1],&dataap2[3][2],&dataap2[3][3]);
													
													if (dataap2[3][3] > currentYear || (dataap2[3][3] == currentYear && dataap2[3][2] > currentMonth) || (dataap2[3][3] == currentYear && dataap2[3][2] == currentMonth && dataap2[3][1] > currentDay)) {
       										 		if (isDateValid(dataap2[3][1], dataap2[3][2], dataap2[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap2[3]);
													vap2[3]=450*dap2[3];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vap2[3],dataap2[3][1],dataap2[3][2],dataap2[3][3],dap2[3]);
													vta[3]+=vap2[3];
													
													ctap[3]=1;
													ctap2[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
														
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap2[4][1],&dataap2[4][2],&dataap2[4][3]);
													
													if (dataap2[4][3] > currentYear || (dataap2[4][3] == currentYear && dataap2[4][2] > currentMonth) || (dataap2[4][3] == currentYear && dataap2[4][2] == currentMonth && dataap2[4][1] > currentDay)) {
       										 		if (isDateValid(dataap2[4][1], dataap2[4][2], dataap2[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap2[4]);
													vap2[4]=450*dap2[4];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vap2[4],dataap2[4][1],dataap2[4][2],dataap2[4][3],dap2[4]);
													vta[4]+=vap2[4];
													
													ctap[4]=1;
													ctap2[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
											
									}
								
										else{
											mi=1;
											}
									system("cls");
           			 				break;	
								

								case 3:
												if (asp==3){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE PAULISTA          \n"RESET);
												printf ("-----------------------------------------------------------------\n\n");
												printf(VERDE"3 - Coworking\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Digite o cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
												
												
												
													if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap3[0][1],&dataap3[0][2],&dataap3[0][3]);
													
													if (dataap3[0][3] > currentYear || (dataap3[0][3] == currentYear && dataap3[0][2] > currentMonth) || (dataap3[0][3] == currentYear && dataap3[0][2] == currentMonth && dataap3[0][1] > currentDay)) {
       										 		if (isDateValid(dataap3[0][1], dataap3[0][2], dataap3[0][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap3[0]);
													vap3[0]=100*dap3[0];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vap3[0],dataap3[0][1],dataap3[0][2],dataap3[0][3],dap3[0]);
													vta[0]+=vap3[0];
													
													ctap[0]=1;
													ctap3[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap3[1][1],&dataap3[1][2],&dataap3[1][3]);
													
													if (dataap3[1][3] > currentYear || (dataap3[1][3] == currentYear && dataap3[1][2] > currentMonth) || (dataap3[1][3] == currentYear && dataap3[1][2] == currentMonth && dataap3[1][1] > currentDay)) {
       										 		if (isDateValid(dataap3[1][1], dataap3[1][2], dataap3[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap3[1]);
													vap3[1]=100*dap3[1];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vap3[1],dataap3[1][1],dataap3[1][2],dataap3[1][3],dap3[1]);
													vta[1]+=vap3[1];
													
													ctap[1]=1;
													ctap3[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap3[2][1],&dataap3[2][2],&dataap3[2][3]);
													
													if (dataap3[2][3] > currentYear || (dataap3[2][3] == currentYear && dataap3[2][2] > currentMonth) || (dataap3[2][3] == currentYear && dataap3[2][2] == currentMonth && dataap3[2][1] > currentDay)) {
       										 		if (isDateValid(dataap3[2][1], dataap3[2][2], dataap3[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap3[2]);
													vap3[2]=100*dap3[2];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vap3[2],dataap3[2][1],dataap3[2][2],dataap3[2][3],dap3[2]);
													vta[2]+=vap3[2];
													
													ctap[2]=1;
													ctap3[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
											if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap3[3][1],&dataap3[3][2],&dataap3[3][3]);
													
													if (dataap3[3][3] > currentYear || (dataap3[3][3] == currentYear && dataap3[3][2] > currentMonth) || (dataap3[3][3] == currentYear && dataap3[3][2] == currentMonth && dataap3[3][1] > currentDay)) {
       										 		if (isDateValid(dataap3[3][1], dataap3[3][2], dataap3[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap3[3]);
													vap3[3]=100*dap3[3];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vap3[3],dataap3[3][1],dataap3[3][2],dataap3[3][3],dap3[3]);
													vta[3]+=vap3[3];
													
													ctap[3]=1;
													ctap3[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataap3[4][1],&dataap3[4][2],&dataap3[4][3]);
													
													if (dataap3[4][3] > currentYear || (dataap3[4][3] == currentYear && dataap3[4][2] > currentMonth) || (dataap3[4][3] == currentYear && dataap3[4][2] == currentMonth && dataap3[4][1] > currentDay)) {
       										 		if (isDateValid(dataap3[4][1], dataap3[4][2], dataap3[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&dap3[4]);
													vap3[4]=100*dap3[4];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vap3[4],dataap3[4][1],dataap3[4][2],dataap3[4][3],dap3[4]);
													vta[4]+=vap3[4];
													
													ctap[4]=1;
													ctap3[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
													
												}
									
											else{
											mi=1;
											}
											system("cls");
           			 						break;
								
								
								case 4:
									mi = 1;
          			 				 system("cls");          			  
          			 				 break;
								

																								
							}
							break;
			
			
						case 2:
								
								system("cls");
    							printf ("----------------------------------------------------------------\n");
								printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE ALPHAVILE          \n"RESET);
								printf ("-----------------------------------------------------------------\n\n");
									printf (VERDE"1 - Sala de reunião"RESET" \t\t 20m² - Diaria R$200\n\n");
									printf ("- Internet de alta velocidade, Wifi e cabo\nSalas climatizadas com TV, café expresso, água e chá, sem custo adicional\nServiço de impressão e digitalização\n\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (VERDE"2 - Sala de treinamento"RESET" \t 80m² - Diaria R$350\n\n");
									printf ("-Internet de alta velocidade, Wifi e cabo\nInfraestrutura para apresentações e workshops\nControle de entrada e saida de participantes\n\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (VERDE"3 - Coworking"RESET" \t\t 20m² - Diaria R$70\n\n");
									printf ("- Salas climatizadas para no máximo 4 usuarios\nWifi e internet gratuitos\nAmbiente profissional\n");
									printf ("------------------------------------------------------------------------------------------------------------------------\n");
									printf (AMARELO"4 - Voltar\n"RESET);
												
									scanf ("%d",&asp);
									
										switch (asp){
										
										
											case 1:
												if (asp==1){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE ALPHAVILLE          \n"RESET);
												printf ("-----------------------------------------------------------------\n\n");
												printf(VERDE"1 - Sala de reuniões\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Digite o cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
																																					
												if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa1[0][1],&dataaa1[0][2],&dataaa1[0][3]);
													
													if (dataaa1[0][3] > currentYear || (dataaa1[0][3] == currentYear && dataaa1[0][2] > currentMonth) || (dataaa1[0][3] == currentYear && dataaa1[0][2] == currentMonth && dataaa1[0][1] > currentDay)) {
       										 		if (isDateValid(dataaa1[0][1], dataaa1[0][2], dataaa1[0][3])) {
													printf ("\nQual a duração do aluguel em dias? \n");
													scanf ("%d",&daa1[0]);
													vaa1[0]=200*daa1[0];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vaa1[0],dataaa1[0][1],dataaa1[0][2],dataaa1[0][3],daa1[0]);
													vta[0]+=vaa1[0];
													
													ctaa[0]=1;
													ctaa1[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa1[1][1],&dataaa1[1][2],&dataaa1[1][3]);
													
													if (dataaa1[1][3] > currentYear || (dataaa1[1][3] == currentYear && dataaa1[1][2] > currentMonth) || (dataaa1[1][3] == currentYear && dataaa1[1][2] == currentMonth && dataaa1[1][1] > currentDay)) {
       										 		if (isDateValid(dataaa1[1][1], dataaa1[1][2], dataaa1[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa1[1]);
													vaa1[1]=200*daa1[1];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vaa1[1],dataaa1[1][1],dataaa1[1][2],dataaa1[1][3],daa1[1]);
													vta[1]+=vaa1[1];
													
													ctaa[1]=1;
													ctaa1[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa1[2][1],&dataaa1[2][2],&dataaa1[2][3]);
													
													if (dataaa1[2][3] > currentYear || (dataaa1[2][3] == currentYear && dataaa1[2][2] > currentMonth) || (dataaa1[2][3] == currentYear && dataaa1[2][2] == currentMonth && dataaa1[2][1] > currentDay)) {
       										 		if (isDateValid(dataaa1[2][1], dataaa1[2][2], dataaa1[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa1[2]);
													vaa1[2]=200*daa1[2];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vaa1[2],dataaa1[2][1],dataaa1[2][2],dataaa1[2][3],daa1[2]);
													vta[2]+=vaa1[2];
													
													ctaa[2]=1;
													ctaa1[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa1[3][1],&dataaa1[3][2],&dataaa1[3][3]);
													
													if (dataaa1[3][3] > currentYear || (dataaa1[3][3] == currentYear && dataaa1[3][2] > currentMonth) || (dataaa1[3][3] == currentYear && dataaa1[3][2] == currentMonth && dataaa1[3][1] > currentDay)) {
       										 		if (isDateValid(dataaa1[3][1], dataaa1[3][2], dataaa1[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa1[3]);
													vaa1[3]=200*daa1[3];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vaa1[3],dataaa1[3][1],dataaa1[3][2],dataaa1[3][3],daa1[3]);
													vta[3]+=vaa1[3];
													
													ctaa[3]=1;
													ctaa1[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa1[4][1],&dataaa1[4][2],&dataaa1[4][3]);
													
													if (dataaa1[4][3] > currentYear || (dataaa1[4][3] == currentYear && dataaa1[4][2] > currentMonth) || (dataaa1[4][3] == currentYear && dataaa1[4][2] == currentMonth && dataaa1[4][1] > currentDay)) {
       										 		if (isDateValid(dataaa1[4][1], dataaa1[4][2], dataaa1[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa1[4]);
													vaa1[4]=200*daa1[4];
												
													printf (VERDE"Aluguel da sala de reunião realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vaa1[4],dataaa1[4][1],dataaa1[4][2],dataaa1[4][3],daa1[4]);
													vta[4]+=vaa1[4];
													
													ctaa[4]=1;
													ctaa1[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
							
												
												
												
									
									
									
									
												}
												
												else{
												mi=1;
												}
									system("cls");
           			 				break;	
           			 				
           			 				
           			 				
								case 2:
									
									if (asp==2){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE ALPHAVILE          \n"RESET);
												printf ("-----------------------------------------------------------------\n\n");
												printf(VERDE"2 - Sala de Treinamento\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Digite o cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
												
												
												
												if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa2[0][1],&dataaa2[0][2],&dataaa2[0][3]);
													
													if (dataaa2[0][3] > currentYear || (dataaa2[0][3] == currentYear && dataaa2[0][2] > currentMonth) || (dataaa2[0][3] == currentYear && dataaa2[0][2] == currentMonth && dataaa2[0][1] > currentDay)) {
       										 		if (isDateValid(dataaa2[0][1], dataaa2[0][2], dataaa2[0][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa2[0]);
													vaa2[0]=350*daa2[0];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vaa2[0],dataaa2[0][1],dataaa2[0][2],dataaa2[0][3],daa2[0]);
													vta[0]+=vaa2[0];
													
													ctaa[0]=1;
													ctaa2[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa2[1][1],&dataaa2[1][2],&dataaa2[1][3]);
													
													if (dataaa2[1][3] > currentYear || (dataaa2[1][3] == currentYear && dataaa2[1][2] > currentMonth) || (dataaa2[1][3] == currentYear && dataaa2[1][2] == currentMonth && dataaa2[1][1] > currentDay)) {
       										 		if (isDateValid(dataaa2[1][1], dataaa2[1][2], dataaa2[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa2[1]);
													vaa2[1]=350*daa2[1];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vaa2[1],dataaa2[1][1],dataaa2[1][2],dataaa2[1][3],daa2[1]);
													vta[1]+=vaa2[1];
													
													ctaa[1]=1;
													ctaa2[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa2[2][1],&dataaa2[2][2],&dataaa2[2][3]);
													
													if (dataaa2[2][3] > currentYear || (dataaa2[2][3] == currentYear && dataaa2[2][2] > currentMonth) || (dataaa2[2][3] == currentYear && dataaa2[2][2] == currentMonth && dataaa2[2][1] > currentDay)) {
       										 		if (isDateValid(dataaa2[2][1], dataaa2[2][2], dataaa2[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa2[2]);
													vaa2[2]=350*daa2[2];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vaa2[2],dataaa2[2][1],dataaa2[2][2],dataaa2[2][3],daa2[2]);
													vta[2]+=vaa2[2];
													
													ctaa[2]=1;
													ctaa2[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa2[3][1],&dataaa2[3][2],&dataaa2[3][3]);
													
													if (dataaa2[3][3] > currentYear || (dataaa2[3][3] == currentYear && dataaa2[3][2] > currentMonth) || (dataaa2[3][3] == currentYear && dataaa2[3][2] == currentMonth && dataaa2[3][1] > currentDay)) {
       										 		if (isDateValid(dataaa2[3][1], dataaa2[3][2], dataaa2[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa2[3]);
													vaa2[3]=350*daa2[3];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vaa2[3],dataaa2[3][1],dataaa2[3][2],dataaa2[3][3],daa2[3]);
													vta[3]+=vaa2[3];
													
													ctaa[3]=1;
													ctaa2[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa2[4][1],&dataaa2[4][2],&dataaa2[4][3]);
													
													if (dataaa2[4][3] > currentYear || (dataaa2[4][3] == currentYear && dataaa2[4][2] > currentMonth) || (dataaa2[4][3] == currentYear && dataaa2[4][2] == currentMonth && dataaa2[4][1] > currentDay)) {
       										 		if (isDateValid(dataaa2[4][1], dataaa2[4][2], dataaa2[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa2[4]);
													vaa2[4]=350*daa2[4];
												
													printf (VERDE"Aluguel da sala de treinamento realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vaa2[4],dataaa2[4][1],dataaa2[4][2],dataaa2[4][3],daa2[4]);
													vta[4]+=vaa2[4];
													
													ctaa[4]=1;
													ctaa2[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}		
											
									}
								
										else{
											mi=1;
											}
									system("cls");
           			 				break;	
								

								case 3:
												if (asp==3){
												system("cls");
												printf ("----------------------------------------------------------------\n");
												printf (AZUL"              AGENDAMENTO DE ALUGUEL - UNIDADE ALPHAVILLE          \n"RESET);
												printf ("-----------------------------------------------------------------\n\n");
												printf(VERDE"3 - Coworking\n\n"RESET);
           				 						printf ("Para qual cliente deseja alugar a sala?\n\n");
           				 						printf ("Digite o cliente desejado\n\n");
           				 	
           				 						for (i=0;i<ic;i++){
							
												printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
																	}
																	
												printf (AMARELO"OU 0 para voltar\n\n"RESET);
									
												scanf ("%d",&ai);
												
												
												
												if (ai==1){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa3[0][1],&dataaa3[0][2],&dataaa3[0][3]);
													
													if (dataaa3[0][3] > currentYear || (dataaa3[0][3] == currentYear && dataaa3[0][2] > currentMonth) || (dataaa3[0][3] == currentYear && dataaa3[0][2] == currentMonth && dataaa3[0][1] > currentDay)) {
       										 		if (isDateValid(dataaa3[0][1], dataaa3[0][2], dataaa3[0][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa3[0]);
													vaa3[0]=70*daa3[0];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[0],sobrenome[0],vaa3[0],dataaa3[0][1],dataaa3[0][2],dataaa3[0][3],daa3[0]);
													vta[0]+=vaa3[0];
													
													ctaa[0]=1;
													ctaa3[0]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==2){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa3[1][1],&dataaa3[1][2],&dataaa3[1][3]);
													
													if (dataaa3[1][3] > currentYear || (dataaa3[1][3] == currentYear && dataaa3[1][2] > currentMonth) || (dataaa3[1][3] == currentYear && dataaa3[1][2] == currentMonth && dataaa3[1][1] > currentDay)) {
       										 		if (isDateValid(dataaa3[1][1], dataaa3[1][2], dataaa3[1][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa3[1]);
													vaa3[1]=70*daa3[1];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[1],sobrenome[1],vaa3[1],dataaa3[1][1],dataaa3[1][2],dataaa3[1][3],daa3[1]);
													vta[1]+=vaa3[1];
													
													ctaa[1]=1;
													ctaa3[1]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
														
												if (ai==3){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa3[2][1],&dataaa3[2][2],&dataaa3[2][3]);
													
													if (dataaa3[2][3] > currentYear || (dataaa3[2][3] == currentYear && dataaa3[2][2] > currentMonth) || (dataaa3[2][3] == currentYear && dataaa3[2][2] == currentMonth && dataaa3[2][1] > currentDay)) {
       										 		if (isDateValid(dataaa3[2][1], dataaa3[2][2], dataaa3[2][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa3[2]);
													vaa3[2]=70*daa3[2];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[2],sobrenome[2],vaa3[2],dataaa3[2][1],dataaa3[2][2],dataaa3[2][3],daa3[2]);
													vta[2]+=vaa3[2];
													
													ctaa[2]=1;
													ctaa3[2]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==4){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa3[3][1],&dataaa3[3][2],&dataaa3[3][3]);
													
													if (dataaa3[3][3] > currentYear || (dataaa3[3][3] == currentYear && dataaa3[3][2] > currentMonth) || (dataaa3[3][3] == currentYear && dataaa3[3][2] == currentMonth && dataaa3[3][1] > currentDay)) {
       										 		if (isDateValid(dataaa3[3][1], dataaa3[3][2], dataaa3[3][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa3[3]);
													vaa3[3]=70*daa3[3];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[3],sobrenome[3],vaa3[3],dataaa3[3][1],dataaa3[3][2],dataaa3[3][3],daa3[3]);
													vta[3]+=vaa3[3];
													
													ctaa[3]=1;
													ctaa3[3]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}
												
												if (ai==5){
													system("cls");
													printf ("Qual a data de inicio do aluguel da sala? Informe a data desejada no formato dd mm ano: \n");
													scanf ("%d %d %d",&dataaa3[4][1],&dataaa3[4][2],&dataaa3[4][3]);
													
													if (dataaa3[4][3] > currentYear || (dataaa3[4][3] == currentYear && dataaa3[4][2] > currentMonth) || (dataaa3[4][3] == currentYear && dataaa3[4][2] == currentMonth && dataaa3[4][1] > currentDay)) {
       										 		if (isDateValid(dataaa3[4][1], dataaa3[4][2], dataaa3[4][3])) {
													printf ("Qual a duração do aluguel em dias? \n");
													scanf ("%d",&daa3[4]);
													vaa3[4]=70*daa3[4];
												
													printf (VERDE"Aluguel da sala de coworking realizado com sucesso para o cliente %s %s"RESET"\nValor: R$ %d\nInicio em: %d/%d/%d\nDuração: %d dias\n\n",nome[4],sobrenome[4],vaa3[4],dataaa3[4][1],dataaa3[4][2],dataaa3[4][3],daa3[4]);
													vta[4]+=vaa3[4];
													
													ctaa[4]=1;
													ctaa3[4]=1;
													system("pause");
														system("cls");
													break;
													mi=1;
       											 	}
														 else {
           											 		printf(VERMELHO"\nData inválida!\n\n"RESET);
            												system("pause");
            												
       														 }
   												 																																																}
												 else {
      										  		printf(VERMELHO"\nData inválida!"RESET" Por favor, insira uma data posterior à data atual.\n\n");
     										   		system("pause");
   													 }
   													 
												
													}	
												}
									
											else{
											mi=1;
											}
											system("cls");
           			 						break;
								
								
								case 4:
									mi = 1;
          			 				 system("cls");          			  
          			 				 break;
								

																								
							}
							break;
			
			
			
			
			
			
						}
						break;
			
		case 5:
			system("cls");
			printf ("----------------------------------------------------------------\n");
			printf (AZUL"              AGENDAMENTO DE SERVIÇOS          \n"RESET);
			printf ("----------------------------------------------------------------\n\n");
			printf("Aqui voce poderá adicionar serviços ao seu aluguel\n");
			
			printf("Os serviços estão disponiveis apenas para clientes com contrato de aluguel ativo.\n\n");
			printf (VERDE"Para qual localidade desejar agendar serviços?\n\n"RESET);
			printf ("1 - Paulista\n");
			printf ("2 - Alphaville\n\n");
			printf (AMARELO"3 - Voltar\n"RESET);
			scanf ("%d",&opcao4);


/*agendamento de serviço segue a mesma logica. um case para cada unidade. cada unidade terá 3 opções de serviço. um novo case para o serviço escolhido. entao teremos os ifs como os anteriores.note que o loop exibira apenas os clientes cadastrados com 
cta* ativo ou seja com contrato de aluguel ativo. isso e verificado. ent um if para cada cliente. cada if recebe e guarda informações referente a posição do mesmo no vetor.*/
			
					switch(opcao4){
						
					if (opcao4==1){
						
						case 1:
							system("cls");
							printf ("----------------------------------------------------------------\n");
							printf (AZUL"              UNIDADE PAULISTA - SERVIÇOS          \n"RESET);
							printf ("-----------------------------------------------------------------\n\n");							
							printf (VERDE"1 - Secretariado"RESET"      Diaria R$70\n\n");
							printf ("-  Organização do ambiente de trabalho, arquivamento de documentos, redige ofícios e comunicados.\nPrimeiro atendimento dos clientes, presta informações e atende o telefone.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (VERDE"2 - Suporte Técnico"RESET"   Diaria R$70\n\n");
							printf ("- Auxilia a infraestrutura para realização do trabalho do cliente.\n Oferece suporte e soluções em situações de erros e falhas.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (VERDE"3 - Intérprete"RESET"        Diaria R$70\n\n");
							printf ("- Tradução Simultanea em situações de reuniões e palestras.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (AMARELO"4 - Voltar\n"RESET);
							scanf ("%d",&as1);
							
											switch (as1){
												
												case 1: 
												system("cls");
												if (as1==1) {
													printf ("Para qual cliente deseja agendar o serviço de secretarido ? \n\n");
													
													for (i=0;i<ic;i++){
															if (ctap[i]==1){
															printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
																			}
															else {
																printf (VERMELHO"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
																
															}
													
													
																}								
													printf (AMARELO"0 para voltar\n\n"RESET);
													scanf ("%d",&ai1);
													
													
													if (ai1==1){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													sap1[0]=1;
													system("pause");
													
														}
														
													if (ai1==2){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													sap1[1]=1;
													system("pause");
														}
														
													if (ai1==3){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													sap1[2]=1;
													system("pause");
														}
														
													if (ai1==4){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													sap1[3]=1;
													system("pause");
														}
														
													if (ai1==5){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													sap1[4]=1;
													system("pause");
														}
														
														mi = 1;
          			 				 system("cls");          			  
          			 				 break;	
													}
													
												
												
												
												case 2:
												system("cls");
												if (as1==2) {
												printf ("Para qual cliente deseja agendar o serviço de suporte técnico ? \n\n");
													
													for (i=0;i<ic;i++){
														if (ctap[i]==1){
														printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
																		}
														else {
																printf (VERMELHO"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
																	mi=1;
																
															
															}
													
																}								
													printf (AMARELO"0 para voltar\n\n"RESET);
													scanf ("%d",&ai1);
													
													
													if (ai1==1){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													sap2[0]=1;
													system("pause");
														}
														
													if (ai1==2){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													sap2[1]=1;
													system("pause");
														}
														
													if (ai1==3){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													sap2[2]=1;
													system("pause");
														}
														
													if (ai1==4){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													sap2[3]=1;
													system("pause");
														}
														
													if (ai1==5){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													sap2[4]=1;
													system("pause");
														}
										mi=1;
          			 				 system("cls");          			  
          			 				 break;		
													}
													
												case 3:
												system("cls");	
												if (as1==3) {
													printf ("Para qual cliente deseja agendar o serviço de Intérprete ? \n");
													
													for (i=0;i<ic;i++){
														if (ctap[i]==1){
														printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
																		}
														else {
																printf (VERMELHO"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
															}
													
																}								
													printf (AMARELO"OU 0 para voltar\n\n"RESET);
													scanf ("%d",&ai1);
													
													
													if (ai1==1){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													sap2[0]=1;
													system("pause");
														}
														
													if (ai1==2){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													sap2[1]=1;
													system("pause");
														}
														
													if (ai1==3){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													sap2[2]=1;
													system("pause");
														}
														
													if (ai1==4){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													sap2[3]=1;
													system("pause");
														}
														
													if (ai1==5){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													sap2[4]=1;
													system("pause");
														}
														mi = 1;
          			 				 system("cls");          			  
          			 				 break;		
														}
											case 4:
											if (as==4) {
												mi = 1;
          			 				 system("cls");          			  
          			 			
												break;
											}
										
								break;
								
								
														}/*fim do switch*/
							
							
								
							
							
							
							
							
					}
					
					
					else {
							mi = 1;
          			 				 system("cls");          			  
          			 				 break;
						}
				
					if (as==2){
						
						case 2:
							
							system("cls");
							printf ("----------------------------------------------------------------\n");
							printf (AZUL"              UNIDADE ALPHAVILLE - SERVIÇOS          \n"RESET);
							printf ("-----------------------------------------------------------------\n\n");							
							printf (VERDE"1 - Secretariado"RESET" 	  Diaria R$60\n\n");
							printf ("-  Organização do ambiente de trabalho, arquivamento de documentos, redige ofícios e comunicados.\nPrimeiro atendimento dos clientes, presta informações e atende o telefone.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (VERDE"2 - Suporte Técnico"RESET"  	  Diaria R$60\n\n");
							printf ("- Auxilia a infraestrutura para realização do trabalho do cliente.\n Oferece suporte e soluções em situações de erros e falhas.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (VERDE"3 - Intérprete"RESET"		Diaria R$60\n\n");
							printf ("- Tradução Simultanea em situações de reuniões e palestras.\n\n");
							printf ("------------------------------------------------------------------------------------------------------------------------\n");
							printf (AMARELO"4 - Voltar\n"RESET);
							scanf ("%d",&as1);
							
											switch (as1){
												
												case 1: 
												system("cls");
												if (as1==1) {
													printf ("Para qual cliente deseja agendar o serviço de secretarido ? \n");
													
													for (i=0;i<ic;i++){
														if (ctaa[i]==1){
														printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
																		}
														else {
																printf (VERMELHO"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
															}
													
																}								
													printf (AMARELO"OU 0 para voltar\n\n"RESET);
													scanf ("%d",&ai);
													
													
													if (ai==1){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													saa1[0]=1;
													system("pause");
													
														}
														
													if (ai==2){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													saa1[1]=1;
													system("pause");
														}
														
													if (ai==3){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													saa1[2]=1;
													system("pause");
														}
														
													if (ai==4){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													saa1[3]=1;
													system("pause");
														}
														
													if (ai==5){
													printf (VERDE"Serviço de secretariado agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													saa1[4]=1;
													system("pause");
														}
														
														mi = 1;
          			 				 system("cls");          			  
          			 				 break;	
													}
													
												
												
												
												case 2:
												system("cls");
												if (as1==2) {
												printf ("Para qual cliente deseja agendar o serviço de suporte técnico ? \n");
													
													for (i=0;i<ic;i++){
														if (ctaa[i]==1){
														printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
																	}
														else {
																printf (VERDE"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
															}
													
																}								
													printf (AMARELO"OU 0 para voltar\n\n"RESET);
													scanf ("%d",&ai);
													
													
													if (ai==1){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													saa2[0]=1;
													system("pause");
														}
														
													if (ai==2){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													saa2[1]=1;
													system("pause");
														}
														
													if (ai==3){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													saa2[2]=1;
													system("pause");
														}
														
													if (ai==4){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													saa2[3]=1;
													system("pause");
														}
														
													if (ai==5){
													printf (VERDE"Serviço de suporte técnico agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													saa2[4]=1;
													system("pause");
														}
														mi = 1;
          			 				 system("cls");          			  
          			 				 break;		
													}
								
												case 3:
												system("cls");	
												if (as1==3) {
													
													printf ("Para qual cliente deseja agendar o serviço de Intérprete ? \n");
													
													for (i=0;i<ic;i++){
														if (ctaa[i]==1){
														printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
														
																	}
														else {
																printf (VERMELHO"Não há clientes com contratos de aluguel ativo para esta unidade.\n\n"RESET);
															}
													
																}								
													printf (AMARELO"OU 0 para voltar\n\n"RESET);
													scanf ("%d",&ai);
													
												
													if (ai==1){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[0],sobrenome[0]);
													saa3[0]=1;
													system("pause");
														}
														
													if (ai==2){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[1],sobrenome[1]);
													saa3[1]=1;
													system("pause");
														}
														
													if (ai==3){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[2],sobrenome[2]);
													saa3[2]=1;
													system("pause");
														}
														
													if (ai==4){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[3],sobrenome[3]);
													saa3[3]=1;
													system("pause");
														}
														
													if (ai==5){
													printf (VERDE"Serviço de Intérprete agendado com sucesso para o cliente %s %s.\n\n"RESET,nome[4],sobrenome[4]);
													saa3[4]=1;
												
														}
														mi = 1;
          			 				 system("cls");          			  
          			 				 break;		
														}
											case 4: 
											if (as==4){
												mi = 1;
          			 				 system("cls");          			  
          			 			
												break;
											}
										
								
								
								
														}
							
							
								
							
							
							
							
							
					}
					
					
					else {
							mi = 1;
          			 				 system("cls");          			  
          			 				 break;
						}
									
					
					if (as==3){
						case 3:
							mi = 1;
          			 				 system("cls");          			  
          			 				 break;
					}
					
					
					
					
							
					}/*fim do switch DE UNIDADES DE SERVIÇOas*/
			
			
			
			mi = 1;
          			 							 	system("cls");          			  
          			 								 break;
			
			
			
		case 6:
			system("cls");
		
/*em exibir contratos nao é exibido nada caso nao haja  clientes cadastrados. quando cadastrados eles são exibidos. em primeiro momento apenas com suas informções pessoais. e conforme as variaveis responsaveis 
por saber se a alugueis, contratos, visitas ou serviços ativos, sao testadas,  essas informações serão exibidas aqui assim como a soma de todos os valores de debito do cliente.*/
			
				for (i=0;i<ic;i++){
				printf ("----------------------------------------------------------------\n");
	  			printf (AZUL"              EXIBIR CONTRATOS          \n"RESET);
				printf ("----------------------------------------------------------------\n\n");
				printf (AZUL"Cliente:[%d] \n\n"RESET,i+1);
				printf("Nome: %s %s\n" ,nome[i], sobrenome[i]);
				printf ("RG: %s\n",RG[i]);
				printf ("CPF: %s\n",cpf[i]);
				printf ("Telefone: %s\n",telefone[i]);
				printf ("E-mail: %s\n",email[i]);

/*os dois primeiros if verificam as posições do vetor que guardam as verificações de visitas ativas. ambas unidades, uma para cada cliente. se positivo é exibido a data e a mensagem de visita agendada.*/
				
				if (v_ap[i]>0){
					printf ("-----------------------------------------------------------------\n\n");
					printf ("\nO cliente possui uma visita agendada na unidade paulista\n");
					printf ("\nData: %d/%d/%d \n\n",datavp[i][1],datavp[i][2],datavp[i][3]);
							}
				if (v_aa[i]>0){
					printf ("-----------------------------------------------------------------\n\n");
					printf ("\nO cliente possui uma visita agendada na unidade Alphaville\n");
					printf ("\nData: %d/%d/%d \n\n",datava[i][1],datava[i][2],datava[i][3]);
								}

/* a partir daqui é testado se a contratos ativos para ambas as unidades. se sim é verificado o tipo de sala alugado e se ha serviços agendados tambem.*/			
				if (ctap[i]>0){
					printf ("-----------------------------------------------------------------\n\n");
					printf (VERDE"\nO cliente possui um contrato de aluguel ativo na unidade Paulista\n\n"RESET);
					printf ("-----------------------------------------------------------------\n\n");

				
						if (ctap1[i]==1){
							printf ("\nTipo - Sala de Reunião\n\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n\n",dataap1[i][1],dataap1[i][2],dataap1[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n\n",dap1[i]);
							if (sap1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=70*dap1[i];
							}
							if (sap2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=70*dap1[i];
							}
							if (sap3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=70*dap1[i];
							}
							
						}
						
						else if (ctap2[i]==1){
							printf ("\nTipo - Sala de Treinamento\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n",dataap2[i][1],dataap2[i][2],dataap2[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n",dap2[i]);
							printf ("-----------------------------------------------------------------\n\n");

							if (sap1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=70*dap2[i];
							}
							if (sap2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=70*dap2[i];
							}
							if (sap3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=70*dap2[i];
							}
						}
						
						else if (ctap3[i]==1){
							printf ("\nTipo - Sala de Coworking\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n",dataap3[i][1],dataap3[i][2],dataap3[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n",dap3[i]);
							printf ("-----------------------------------------------------------------\n\n");

							if (sap1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=70*dap3[i];
							}
							if (sap2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=70*dap3[i];
							}
							if (sap3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=70*dap3[i];
							}
						}
						
					
				}
				
				if (ctaa[i]>0){
					printf ("-----------------------------------------------------------------\n\n");
					printf (VERDE"\nO cliente possui um contrato de aluguel ativo na unidade Alphaville\n"RESET);
					printf ("-----------------------------------------------------------------\n\n");
				
						if (ctaa1[i]==1){
							printf ("\nTipo - Sala de Reunião\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n",dataaa1[i][1],dataaa1[i][2],dataaa1[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n",daa1[i]);
							printf ("-----------------------------------------------------------------\n\n");

							if (saa1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=70*daa1[i];
							}
							if (saa2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=70*daa1[i];
							}
							if (saa3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=70*daa1[i];
							}
						}
						
						else if (ctaa2[i]==1){
							printf ("\nTipo - Sala de Treinamento\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n",dataaa2[i][1],dataaa2[i][2],dataaa2[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n",daa2[i]);
							printf ("-----------------------------------------------------------------\n\n");

							if (saa1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=70*daa2[i];
							}
							if (saa2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=70*daa2[i];
							}
							if (saa3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=70*daa2[i];
							}
						}
						
						else if (ctaa3[i]==1){
							printf ("\nTipo - Sala de Coworking\n");
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nData de inicio do aluguel: %d/%d/%d \n",dataaa3[i][1],dataaa3[i][2],dataaa3[i][3]);
							printf ("-----------------------------------------------------------------\n\n");
							printf ("\nDuração do contrato de aluguel: %d dias\n",daa3[i]);
							printf ("-----------------------------------------------------------------\n\n");

							if (saa1[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de secretariado para o perido alugado\n\n");
								vta[i]+=60*daa3[i];
							}
							if (saa2[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de suporte técnico para o perido alugado\n\n");
								vta[i]+=60*daa3[i];
							}
							if (saa3[i]==1){
								printf ("-----------------------------------------------------------------\n\n");
								printf ("\nAgendado serviço de Intérprete para o perido alugado\n\n");
								vta[i]+=60*daa3[i];
							}
						}
						
					
				}

/*todos os serviços e alugeis que possuem valor, são somados e exibidos aqui*/

				
				printf (VERDE"\t\t\t\t\t\t=====================\n"RESET);
				printf (VERDE"\t\t\t\t\t\tValor Total:  R$ %d\n"RESET,vta[i]);
				printf (VERDE"\t\t\t\t\t\t=====================\n\n\n\n\n"RESET);	
							
							
				
				system("pause");
				system("cls");
				
				}
				
				
					
				m3=1;
				system("cls");
				break;
			
	
		case 7:
			
/*em desenvolvimento.. aqui apenas é exibido um arquivo externo*/			
			system ("cls");
			printf ("------------------------------------------\n");
			printf (AZUL"ARQUIVOS DE CONTRATOS\n"RESET);
			printf ("------------------------------------------\n");
			printf ("Para qual cliente deseja abrir o arquivo de contrato?\n\n\n");
			for (i=0;i<ic;i++){
							
			printf("[%d] - Nome: %s %s\n\n\n" ,i+1,nome[i], sobrenome[i]);
							
							}
			scanf ("%d",&ai);
			if (ai==1){
				
				system("start Acrobat.exe contrato1.pdf\"");
				printf (VERDE"Exportando arquivo solicitado...\n\n"RESET);
				system("pause");
				
				
   			 
			}
			
			m3=1;
			
			
			break;
		case 8:
/*exibe a sinformações do software e desenvolvedores*/
			system ("cls");
			printf ("------------------------------------------\n");
			printf (AZUL"Office Space Control\n"RESET);
			printf ("------------------------------------------\n\n");
			printf (VERDE"Versão 1.0\n"RESET);
			printf ("Software de controle e gerenciamento de contratos de aluguéis de salas comerciais.\n");
			printf ("Ultima atualização 23/06/2023\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"Requisitos de sistema"RESET": \nWindows\nDevC++\n\n");
			printf ("------------------------------------------\n");
			printf ("Desenvolvildo por GearTech\n");
			printf ("------------------------------------------\n\n");
			printf (AZUL"Desenvolvedores"RESET": \n\nLazaro\nArthur\nKaio\nDionizio\nYuri\n\n");
			
			system("pause");
			break;
			m3=1;
			
		case 9:
			
			
		
		
			system ("cls");
		
			printf ("------------------------------------------\n");
			printf (AZUL"Ajuda\n"RESET);
			printf ("------------------------------------------\n\n");
			printf ("Bem-vindo a seção de ajuda!\n\n");
			printf (VERDE"1 - Cadastro de clientes\n\n"RESET);
			printf ("Para cadastrar clientes, siga os seguintes passos:\n\n");
			printf ("	1.1 - Informe a quantidade de clientes que deseja cadastrar\n");
			printf ("	1.2 - Informe o primeiro nome do cliente\n");
			printf ("	1.3 - Informe o sobrenome do cliente\n");
			printf ("	1.4 - Informe o restante dos dados do cliente até aparecer a mensagem 'cliente cadastrado com sucesso'\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"2 - Exibir Clientes cadastrados\n\n"RESET);
			printf ("Está opção listará todos os clientes cadastrados com suas informações de contato\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"3 - Agendamentos de visitas\n\n"RESET);
			printf ("Para agendar visitas para clientes, siga os seguintes passos:\n\n");
			printf ("	3.1 - Escolha a unidade aonde o cliente deseja visitar\n");
			printf ("	3.2 - Utilize a opção '1 - sim' para prosseguir com o agendamento\n");
			printf ("	3.3 - Informe para qual cliente será realizado o agendamento\n");
			printf ("	3.4 - Informe a data no formato dd mm aaaa (não é necessario barras, apenas números) (Note que datas inválidas ou anteriores à atual retornaram erro.)\n");
			printf ("	3.5 - Agendamento realizado com sucesso\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"4 - Aluguel de salas\n\n"RESET);
			printf ("Para realizar o aluguel de salas para clientes, siga os seguintes passos:\n\n");
			printf ("	4.1 - Escolha a unidade aonde o cliente deseja alugar\n");
			printf ("	4.2 - Escolha o tipo de sala\n");
			printf ("	4.3 - Informe para qual cliente será realizado o aluguel\n");
			printf ("	4.4 - Informe a data no formato dd mm aaaa (não é necessario barras, apenas números) (Note que datas inválidas ou anteriores à atual retornaram erro.)\n");
			printf ("	4.5 - Informe a duração do aluguel em dias\n");
			printf ("	4.6 - Os valores referentes ao aluguel são adicionados automaticamente ao contrato do cliente\n");
			printf ("	4.7 - Aluguel realizado com sucesso\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"5 - Serviços\n\n"RESET);
			printf ("Para realizar o aluguel de serviços para clientes, siga os seguintes passos:\n\n");
			printf ("	5.1 - Escolha a unidade aonde o cliente deseja utilizar o serviço\n");
			printf ("	5.2 - Escolha o tipo de serviço que o cliente precisa\n");
			printf ("	5.3 - Informe para qual cliente o serviço será adicionado (O sistema listará apenas clientes com contratos de aluguel ativo.)\n");
			printf ("	5.4 - Os valores referentes aos serviços são adicionados automaticamente ao contrato do cliente\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"6 - Contratos\n\n"RESET);
			printf ("A opção Contratos listará todos os clientes cadastrados exibindo seus contratos ativos e valores\n\n");
			printf ("------------------------------------------\n");
			printf (VERDE"7 - Imprimir contratos\n\n"RESET);
			printf ("	7.1 - Informe o cliente que deseja exportar o contrato.\n");
			printf ("	7.2 - Após exportar o documento, aperte qualquer tecla para voltar ao menu inicial\n\n");
			printf ("------------------------------------------\n");
			printf (AMARELO"0 - Voltar\n\n"RESET);
			system ("pause");
			break;
			
			
			
				
				
				
					
					
						
					
					
					
					
		
				
			
						
			
			
		case 10:
			system ("cls");
			printf (AZUL"\n\n\n\t\t\t\t\t Obrigado por utilizar OSC!\n\n"RESET);
			return 0;
		default:
			printf ("Opção inválida");
		}
	}
	}
	else {
		printf (VERMELHO"Acesso negado."RESET"\nSenha Incorreta.\n");
		aut=1;
		printf ("Pressione qualquer tecla para tentar novamente.\n");
		system("pause");
		system("cls");
	}
	}
}

	
	
		
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	


