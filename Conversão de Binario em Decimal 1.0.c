/*14/03/09 18:22
Conversão de Números Binários para Números Decimais.

Iniciando a criação de um programa para converte números binários em decimais.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

main(){
/*Inicio da declaração das primeiras variáveis*/       
   char entrada[30];
   char *ptr;
   int i,j,k,x,w,z,tam_entrada;   
/*Fim da declaração*/  

/*Iniciando a obtenção dos dados*/
   printf("Este programa e para converte numeros binarios em decimais.\n\n");
   printf("Digite um numero binario: ");
   scanf("%s",&entrada);   
/*Fim da obtenção dos dados*/ 

/*A parti daqui o programa irá encontra onde está localizada a vírgula, que é o 
que separa os números inteirios dos fracionários.*/
   tam_entrada = strlen(entrada);
   if(ptr = strchr(entrada,',')){
      j = ptr-entrada;
   }
   if(ptr = strchr(entrada,'.')){
      j = ptr-entrada;
   }
/*Fim da localização*/
   
/*Inicio da declaração das segundas variáveis*/ 
   char valor_int[0], valor_real[0];
   int valorint[j-1],valorreal[tam_entrada-j], res_int[j-1]; 
   float res_real[tam_entrada-j], total;
/*Fim da declaração*/    

/*Feito isso ele irá armazenar os valores inteiros e decimais em outros dois 
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
    
/*Iniciando os Cálculos*/
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
/*Fim dos Cálculos*/

/*Apresentação dos resultados na tela*/
printf("\nValor em Binario: %s", entrada);
printf("\nValor em Decimal(Inteiro): %d", res_int[x-1]);
printf("\nValor em Decimal(Real):    %f",res_real[z-1]);
printf("\nValor em Decimal(Total):   %f",total);
/*Esta parte da apresentação é só para consultar os valores calculados*/
printf("\n\nTamanho da Entrada: %i",tam_entrada);
printf("\nj: %i",j);
printf("\nj+1: %i",j+1);
printf("\nValor inteiro: %i",valorint[1]);
printf("\nValor real: %f",valorreal[0]);
printf("\nValor real(char): %s\n\n",valor_real);
/*Fim da apresentação*/

  system("pause");
}

/*Espaço para notas:

1ª nota: As variáveis estão dividas em duas partes, pois algumas delas são
dependente de outras. Então elas não podem ser declaradas no mesmo "bloco". 

2ª nota: Não sei o que está acontecendo já que a função "atoi" ela converte o 
valor em texto para inteiro corretamente, mas a função "atof" não está. O que é 
mas estranho pois a sintaxe das duas funções são as mesmas. Devo está errando em
alguma coisa e não estou vendo. Espero que não seja um daquele erros do Dev 
que só Jesus salva.

3ª nota: Agora eu consegui fazer que o valor fosse apresentado da formar correta, 
mas tive que mudar a função de "atof" para a "atoi" para calcular o número 
decimal, só espero que depois esse Dev não invente mais alguma frescura.

4º nota: Eu estou modificando o "bloco de cálculos" para que eu possa converter 
números binários reais para decimais reais.

5º nota: Não estou conseguindo fazer que o valor real seja apresentado. O que 
eu não entendo é que os valores estão sendo armazenados. Resumindo: isso é uma 
porra.

6º nota: A parte de conversão de binário para decimal está pronta. Agora só 
falta o pé de cobra de fazer o decimal virá binário.
   
7º nota: Não sei o porquê de não está aparecendo o valor decimal. Simplesmente 
deixou de ser apresentado na tela. O dev é foda. Se um dia eu acha a pessoa
que desenvolveu esse compilador eu vou ter o maior prazer de o mandar ele tomar 
no cú. O que é estranho é que calcula o valor da forma correta mas não apresenta. 
Como é foi dito antes, o dev é foda com ph e dois dedos de "toddy".

8º nota: Bem essa nota é para retificar a nota anterior na qual eu falei que o 
dev era foda, bem eu consegui fazer que o valor fosse apresentado corretamente. 
Mas também descobri que o erro não foi ocasionado pelo dev e sim por erro meu. 
No printf que era para apresenta o valor decimal real, eu mandei apresenta o 
valor decimal inteiro então não tinha como o dev apresentar o valor da forma
correta por esse motivo estou pedindo desculpas pelo o que eu falei do dev na  
nota anterior.
   
Fim para Notas*/

/*
___________________________
 Marcone Oliveira da Costa
  RG :  2.009.758
  CPF: 065.815.684-74
  Mat: 200725041*/
