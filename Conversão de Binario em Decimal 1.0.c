/*14/03/09 18:22
Convers�o de N�meros Bin�rios para N�meros Decimais.

Iniciando a cria��o de um programa para converte n�meros bin�rios em decimais.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

main(){
/*Inicio da declara��o das primeiras vari�veis*/       
   char entrada[30];
   char *ptr;
   int i,j,k,x,w,z,tam_entrada;   
/*Fim da declara��o*/  

/*Iniciando a obten��o dos dados*/
   printf("Este programa e para converte numeros binarios em decimais.\n\n");
   printf("Digite um numero binario: ");
   scanf("%s",&entrada);   
/*Fim da obten��o dos dados*/ 

/*A parti daqui o programa ir� encontra onde est� localizada a v�rgula, que � o 
que separa os n�meros inteirios dos fracion�rios.*/
   tam_entrada = strlen(entrada);
   if(ptr = strchr(entrada,',')){
      j = ptr-entrada;
   }
   if(ptr = strchr(entrada,'.')){
      j = ptr-entrada;
   }
/*Fim da localiza��o*/
   
/*Inicio da declara��o das segundas vari�veis*/ 
   char valor_int[0], valor_real[0];
   int valorint[j-1],valorreal[tam_entrada-j], res_int[j-1]; 
   float res_real[tam_entrada-j], total;
/*Fim da declara��o*/    

/*Feito isso ele ir� armazenar os valores inteiros e decimais em outros dois 
vetores*/
   for(i=0;i<j;i++){
     valor_int[0]=entrada[i];
     valorint[i]=atoi(valor_int);   
   }
   k = 0;
   for(i=j+1;i<=tam_entrada;i++){                              
    valor_real[0]=entrada[i];
    valorreal[k]=atoi(valor_real);      
    k++;
   } 
/*Fim da armazenagem*/                         
    
/*Iniciando os C�lculos*/
res_int[0]=valorint[0];
   for(x=1;x<j;x++){
      res_int[x]=valorint[x]+(2*res_int[x-1]);                         
   }
     
res_real[0]=valorreal[0]*pow(2,-1);
w=2;
   for(z=1;z<k;z++){
      res_real[z]=res_real[z-1]+valorreal[z]*pow(2,-w);            
      w++;
    }
total=res_real[z-1]+res_int[x-1];
/*Fim dos C�lculos*/

/*Apresenta��o dos resultados na tela*/
printf("\nValor em Binario: %s", entrada);
printf("\nValor em Decimal(Inteiro): %d", res_int[x-1]);
printf("\nValor em Decimal(Real):    %f",res_real[z-1]);
printf("\nValor em Decimal(Total):   %f",total);
/*Esta parte da apresenta��o � s� para consultar os valores calculados*/
printf("\n\nTamanho da Entrada: %i",tam_entrada);
printf("\nj: %i",j);
printf("\nj+1: %i",j+1);
printf("\nValor inteiro: %i",valorint[1]);
printf("\nValor real: %f",valorreal[0]);
printf("\nValor real(char): %s\n\n",valor_real);
/*Fim da apresenta��o*/

  system("pause");
}

/*Espa�o para notas:

1� nota: As vari�veis est�o dividas em duas partes, pois algumas delas s�o
dependente de outras. Ent�o elas n�o podem ser declaradas no mesmo "bloco". 

2� nota: N�o sei o que est� acontecendo j� que a fun��o "atoi" ela converte o 
valor em texto para inteiro corretamente, mas a fun��o "atof" n�o est�. O que � 
mas estranho pois a sintaxe das duas fun��es s�o as mesmas. Devo est� errando em
alguma coisa e n�o estou vendo. Espero que n�o seja um daquele erros do Dev 
que s� Jesus salva.

3� nota: Agora eu consegui fazer que o valor fosse apresentado da formar correta, 
mas tive que mudar a fun��o de "atof" para a "atoi" para calcular o n�mero 
decimal, s� espero que depois esse Dev n�o invente mais alguma frescura.

4� nota: Eu estou modificando o "bloco de c�lculos" para que eu possa converter 
n�meros bin�rios reais para decimais reais.

5� nota: N�o estou conseguindo fazer que o valor real seja apresentado. O que 
eu n�o entendo � que os valores est�o sendo armazenados. Resumindo: isso � uma 
porra.

6� nota: A parte de convers�o de bin�rio para decimal est� pronta. Agora s� 
falta o p� de cobra de fazer o decimal vir� bin�rio.
   
7� nota: N�o sei o porqu� de n�o est� aparecendo o valor decimal. Simplesmente 
deixou de ser apresentado na tela. O dev � foda. Se um dia eu acha a pessoa
que desenvolveu esse compilador eu vou ter o maior prazer de o mandar ele tomar 
no c�. O que � estranho � que calcula o valor da forma correta mas n�o apresenta. 
Como � foi dito antes, o dev � foda com ph e dois dedos de "toddy".

8� nota: Bem essa nota � para retificar a nota anterior na qual eu falei que o 
dev era foda, bem eu consegui fazer que o valor fosse apresentado corretamente. 
Mas tamb�m descobri que o erro n�o foi ocasionado pelo dev e sim por erro meu. 
No printf que era para apresenta o valor decimal real, eu mandei apresenta o 
valor decimal inteiro ent�o n�o tinha como o dev apresentar o valor da forma
correta por esse motivo estou pedindo desculpas pelo o que eu falei do dev na  
nota anterior.
   
Fim para Notas*/

/*
___________________________
 Marcone Oliveira da Costa
  RG :  2.009.758
  CPF: 065.815.684-74
  Mat: 200725041*/
