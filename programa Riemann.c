/* programa Riemann; */
# include "/ambiente.h"
float f(float x)
{
 return(x*x);
};

float Riemann(float a, float b, float soma, float delta)
{
 if (a > b ) return( soma*delta);
 else return( Riemann(a+delta, b, soma+f(a),delta));
};

int main(void)
{
 float a=0, b=1, delta = 0.01;
 a = entrada_float("Inicio do intervalo de integraçao a= ", a);
 b = entrada_float("Fim do intervalo de integraçao b = ",b);
 delta = entrada_float("Precisão no cálculo da integral delta = ", delta);
 printf("o valor da integral, com precisão %2.3f é %2.3f \n",delta,
 Riemann(a,b,0,delta));
 return(0);
}