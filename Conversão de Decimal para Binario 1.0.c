#include <stdio.h>
#include <string.h>
#include <math.h>

main(){

   char entrada[30],teste[100];
   char *ptr;
   int i,j,k,z,tam_entrada, valor_int, valor_real, res_int[1000], mod_int[1000],res_real[1000];   
   float valorreal;
   printf("Este programa e para converte numeros Decimal em binarios.\n\n");
   printf("Digite um numero Decimal: ");
   scanf("%s",&entrada);   
   tam_entrada = strlen(entrada);
   if(ptr = strchr(entrada,',')){
      j = ptr-entrada;
   }
   if(ptr = strchr(entrada,'.')){
      j = ptr-entrada;
   }
   char valor_temp[j];
   for(i=0;i<j;i++){
    valor_temp[i]=entrada[i];             
   }
   valor_int = atoi(valor_temp);
   k=0;
   for(i=j+1;i<=tam_entrada;i++){
    valor_temp[k]=entrada[i];
     k++;
   }                   
   valor_real = atoi(valor_temp);                                          
   valorreal = valor_real*pow(10,-(tam_entrada-(j+1))); 
   i=0;
   res_int[i]=valor_int;                            
   for(;;){
   mod_int[i+1]=res_int[i]%2;
   res_int[i+1]=res_int[i]/2;
   i++;
         if(res_int[i]==1){
             break;
         }
   }
   
   /*Nota: o meu modo de fazer o calculo está certo, mas não estou conseguindo 
   fazer que ele coloque no vetor da forma que eu quero. Mas um erro de "bios". 
   Erro de "bios" é foda. Pode está em qualquer lugar o erro. Um dias ainda vou 
   para de pedir para Marcone fazer esse programas para mim. Ele emrola de mais 
   para fazer um coisa simples. Eu ainda só deixo ele fazer isso para só porque
   ele é meu amigo e eu não quero perde a amizade dele, mas tem horas que ele 
   enrolado demais. pqp. Um dia eu aprendo a programar e deixo de pedir para ele
   ficar fazendo essa merdas para mim. */
   
   printf("\n\nValor em Binario: %i",res_int[i]);   
   for(z=i;z>=1;z--){
   printf("%i",mod_int[z]);
   }
   printf(",");
   
   i=0;
   for(;;){
     valorreal = (valorreal*2); 
       res_real[i] = valorreal;     
         if(valorreal>=1){
           valorreal = (valorreal-1.00);                   
          }else if (valorreal<0.1){
                break;
                }
          
               i++; 
      }
     
      for(z=0;z<i;z++){
       printf("%i",res_real[z]);
                  }
     
   printf("\n\nPosicao da Virgula: %i\n",j);
   printf("Valor temporario em texto: %s\n",valor_temp);
   printf("Valor Armazenado em inteiro: %i\n",valor_int);
   printf("Valor Armazenado em real: %i\n",valor_real);
   printf("Valor Armazenado em real: %f\n",valorreal);
   printf("\n\nAizen e um galado\n\n");
   system("pause");
   
}
