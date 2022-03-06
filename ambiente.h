/* 	Biblioteca de funcoes para controle da tela.
		apeteco('duas mensagens'), limpa_tela(vazia)	
      tarcisio praciano pereira - dez licoes para aprender  C   
      Índice das funções: ver a declaração das funções, linha 34
      
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//	 Macros para aentuação em português 
# define aagu 225 // a com acento agudo
# define acir 226 // a com acento circunflexo
# define acra 224 // a craseado
# define atil 227 // a til
# define cedi 231 // c cedilha
# define ecir 234 // e til
# define eagu 233 // e com acento agudo
# define iagu 237 // i com acento agudo
# define oagu 243 // o com acento agudo
# define ocir 244 // o com acento circunflexo
# define otil 245 // o til
# define uagu 250 // u com acento agudo
# define seta 26 // seta para esquerda
 
/*
 ===========================================
 declaração das funções   
 ===========================================
*/


int 		apeteco(char mensagem1[70], char mensagem2[70]);
int 		apeteco2();
int 		apetecof();
int 		apeteco_en(char mensagem1[70], char mensagem2[70]);
int 		apeteco2_en();
int 		apetecof_en();
int 		compara(char primeira[15], char segunda[15]);
int 		copyleft();
int 		limpa_janela(void);
void 		mask(void);
void		marca(void);
int		mensagens(char mensagem1[80], char mensagem2[80],
			char mensagem3[80], char mensagem4[80]);
int 		obrigado();
int		rotulo(char mensagem1[80], char mensagem2[80],
			char mensagem3[80], char mensagem4[80]);
			//  chama apteco2 ao final
int 		translata();
int 		linhaembranco();	// imprime uma linha em branco
int 		quatrolinhas();
int  		sim_nao(void);  // if "sim"  return 1 - ver yes_not(int ingles)
int 		sucesso(void);
float		entrada_float(char msg[80], float x);
int		entrada_inteira(char msg[80], int n);
int		entrada_caracter(char msg[80], char opcao);
int  		yes_not(int ingles);  /* if "sim"  return 1  */
/*
 ===========================================
 implementação das funções declaradas acima  
 ===========================================
*/

// imprime duas mensagens e aguarda 'return'   
// as mensagens são definidas pelo programador.
int apeteco(char mensagem1[70], char mensagem2[70])
{
   char temporario[5]="   ";
   printf("%s%c\n","================================================= ",7);
   printf("%s\n%s", mensagem1,mensagem2);
   fgets(temporario, sizeof(temporario), stdin);
   printf("%c%c%c%c%c",7,7,7,7,7);
   return 0;
}

int apeteco2()
{
   char temporario[5];
   printf("%s","================================================= ");
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   printf(" Aperte <enter> para continuar ");
   fgets(temporario, sizeof(temporario), stdin);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   return 0;
}

int apetecof()
{
   char temporario[5];
   printf("%s%c\n","======================================== ",7);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   printf(" Aperte <enter> para finalizar \n");
   fgets(temporario, sizeof(temporario), stdin);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   return 0;
}


int apeteco2_en(int ingles)
{
   char temporario[5];
   printf("%s","================================================= ");
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   if (ingles)
   	printf(" Press  <enter> to continue ");
   	else
   	printf(" Aperte  <enter> para continuar ... ");
   fgets(temporario, sizeof(temporario), stdin);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   return 0;
}

int apetecof_en(int ingles)
{
   char temporario[5];
   printf("%s%c\n","======================================== ",7);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   if (ingles)
   	printf(" Press  <enter> to finish  ");
   	else
   	printf(" Aperte  <enter> para terminar ... ");
   fgets(temporario, sizeof(temporario), stdin);
   printf("%c%c%c%c%c\n",7,7,7,7,7);
   return 0;
}


// corrige a lógica perversa de strcmp()  sucesso = 1
// strcmp() devolve 0 quando houver sucesso que corresponde ao
// 	falso. compara()  inverte o resultado.
int compara(char primeira[15], char  segunda[15])
	{
		return (!strcmp(primeira, segunda));
	}


int copyleft()
{
	int	ingles = 1;
   limpa_janela();
   printf("Em inglês (sim)  ou em português   (nâo) ? <s,n> \n");
   printf("In English ye(s) or in Portuguese  (n)o  ? <s,n>\n");
   printf("Reposta padrão é \"não\" (n) - Default answer is \"no\" (n)\n");
   ingles = yes_not(ingles);
   if (ingles)
   {
		printf("This software is distributed under any form you like of GPL, the \n");
		printf("Gnu General Public License which may obtained from www.gnu.org.\n");
		printf("The program is distributed as is, without any warranty, in the hope \n");
		printf("that it may used by you to learn something. This is an educational \n");
		printf("software and you may freely use or modify it provided that you\n");
		printf("(1) mention the author and the source code.\n");
		printf("(2) that you comment correctly any alteration you make\n");
		printf("(3) with no cost to those which will receive the program other than \n");
		printf("		which will be necessary to distribute.\n");
		printf("You cannot store this program in the web without written authorization \n");
		printf("of the author, which will warmheartedness give it being asked to.\n");
		printf("This is open source work and everybody which will be interested into\n");
		printf(" joining our work is welcome.  Ask the code if you wish so. \n");
		printf("\t \t copyleft by Tarcisio Praciano-Pereira \n");
		printf("\t \t tarcisio@member.ams.org\n");   

   }
   else
   {
	printf("	\"Copyleft\", um outro tipo de direito autoral, por ele os programas \n");    
   printf("são fornecidos como se encontram, sem garantias de qualquer natureza, mas\n");
   printf("na esperança de que possam ser úteis para o seu aprendizado e desenvovimento\n");
   printf("e podem ser livremente copiados e distruibuidos desde que:  \n");
   printf("(1) seja mencionada a  fonte, \n");
   printf("(2) que os arquivos não sejam alterados,   \n");
   printf("(3) sem nenhum custo, além do que for necessário para distribuição. \n");
   printf("	O espirito do nosso trabalho é o de \"código aberto\" e isto signfica que \n");
   printf("quem desejar participar do nosso trabalho é bem vindo, seja para trazer  \n");
   printf("idéias para melhorá-lo ou arregaçar as mangas e vir se juntar ao grupo. \n");
   printf("	A internet permite se fazer um trabalho comum, mesmo à distância.   \n");
   printf("	A inspiração que nos move é o gigantesco trabalho feito sob o GPL, \n");
   printf("que também abriga o nosso trabalho, e de que LinuX é o exemplo mais conhecido. \n");
   printf("	Mas você estará infringindo os direitos do autor se distribuir \n");
   printf("nosso trabalho em um CD ou colocar os programas ou o livro em uma página  \n");
   printf("da web sem autorização por escrito dos autores. \n");
   printf("%s\n","===  copyleft por Tarcisio Praciano-Pereira  ==="); 
   printf("contacto: 	tarcisio@member.ams.org  \n");
   }
   return 0;
}



int limpa_janela(void)
{
	system("clear");
	return(0);
}


void	marca(void)
	{
	printf("%s\n","=======================================");
	}


// Mask(projeto, programa, local, versao, autor)	
void mask()
	{
		printf("%s\n","==========================================");
		printf("%s%c%s\n", "Dez li",cedi,"oes para aprender C");
		printf(" \n");
		printf("%s\n","Melhoria do Ensino apesar do Desgoverno brasileiro");
		printf(" \n");
		printf("%s\n","Univ. Estadual do Vale do Acarau - Sobral");
		printf("%s%c%s\n","vers",atil,"o 1.0");
		printf("%s\n","Prof. Tarcisio Praciano-Pereira -  tarcisio@member.ams.org");
		printf("%s\n","==========================================");
	}

// não chama apeteco() ao final
int mensagens(char mensagem1[80], char mensagem2[80] ,
		char mensagem3[80], char mensagem4[80])
{
   printf("%s%c\n","================================================= ",7);
   printf("%s\n%s\n", mensagem1,mensagem2);
   printf("%s\n%s\n", mensagem3,mensagem4);
   printf("%s%c\n","================================================= ",7);
   return(0);
}


int obrigado()
{
   translata();  // corre algumas linhas
   printf("%s %s%c%c%s%c%s %s %s %s",
   		"       Obrigado por usar o nosso sistema.  \n",
   		" dirija suas consultas, reclama",cedi,otil,"es ou sugest",otil,"es a\n",
   		"    tarcisio@uvanet.br  dmttpp@super.furg.br           \n",
   		"   ou,(caso extremo), pelo fone  (088) 677 42 46   \n",
   		"     Em nome da equipe, mais uma vez, grato.    \n "
	);
	printf("%c%c%c%c%c\n",7,7,7,7,7); // apita cinco vezes
   return 0;
}

// chama apteco2 ao final
int rotulo(char mensagem1[80], char mensagem2[80] ,
		char mensagem3[80], char mensagem4[80])
{
   printf("%s%c\n","================================================= ",7);
   printf("%s\n%s\n", mensagem1,mensagem2);
   printf("%s\n%s\n", mensagem3,mensagem4);
   return(0);
}



int  sim_nao(void)
	{
	char buffer[80];
	char Resposta='n';
	printf(" Sim ou nao <s,n> - default %c ", Resposta);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%c",&Resposta);
	switch (Resposta)
		{
		case 'S':
			return 1;
		case 's':
			return 1;
		default: 
			return 0;	
		}
	}

int  yes_not(int ingles)
	{
	char buffer[80];
	char Resposta='n';
	if (ingles)
	printf(" Ye(s) ou (n)ot  <s,n> - default %c ", Resposta);
	else
		printf(" Sim ou nao <s,n> - default %c ", Resposta);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%c",&Resposta);
	switch (Resposta)
		{
		case 'S':
			return 1;
		case 's':
			return 1;
		default: 
			return 0;	
		}
	}	
	
	
	
// limpesa parcial da tela...deve ser substituida por quatrolinhas();
int translata()
{
       printf(" \n"); 
		 printf("%c%c%c%c%c",7,7,7,7,7); // apita 5 vezes e passa 5 linhas
       return 0;
}

int	linhaembranco()
{
	printf("   \n");
	return 0;
}

// limpesa parcial da tela...  deve substituir  translata()
int quatrolinhas()
{
       printf(" \n"); 
		 printf("%c%c%c%c%c",7,7,7,7,7); // apita 5 vezes e passa 5 linhas
		 printf("%c\n%c\n%c\n%c\n%c\n",7,7,7,7,7);
       return 0;
}

	
// funcao sucesso - imprime uma mensagem de sucesso escolhida  
// acrescentar em concatena_palavras o complemento de sua mensagem
// de sucesso.
int sucesso(void)
{
	char sucesso[50]="foi um sucesso ";
	strcat(sucesso,"Leitura do arquivo ");
	printf("%s", sucesso);
	return 0;
}
	
float		entrada_float(char msg[80], float x)
{
	char deposito[80]; 
	printf("%s %f  ",msg, x);   
	fgets(deposito, sizeof(deposito), stdin); 
	sscanf(deposito, "%f", &x);  
	return(x);
}

int		entrada_inteira(char msg[80], int n)
{
	char deposito[80];
	printf("%s %d  ",msg, n);    
	fgets(deposito, sizeof(deposito), stdin); 
	sscanf(deposito, "%d", &n);  
	return(n);
}

int		entrada_caracter(char msg[80], char opcao)
{
	char deposito[80];
	printf("%s %c  ",msg, opcao);    
	fgets(deposito, sizeof(deposito), stdin); 
	sscanf(deposito, "%c", &opcao);  
	return(opcao);
}

