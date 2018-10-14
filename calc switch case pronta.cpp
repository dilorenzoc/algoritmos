#include <stdio.h>
#include <conio.h>
int main ()
{
int op;
float n1,n2,result; /* Declaracao de Variaveis */

printf ("Entre com: \n 1 para soma \n 2 para subtracao \n 3 para multiplicacao \n 4 para divisao \n"); /* Entrada de Dados*/
scanf ("%d",&op);
printf ("Entre com o 1 numero: ");
scanf ("%f",&n1);
printf ("Entre com o 2 numero: ");
scanf ("%f",&n2);
	switch(op)
	{
		case 1:      
  			result=n1+n2;
  			//printf ("%f",&result);
  			break;
  		case 2:
  			result=n1-n2;
  			//printf ("%f",&result);
  			break;
  		case 3: 
  			result=n1*n2;
  			//printf ("%f",&result);
  			break;
  		case 4:
  			result=n1/n2;
  			//printf ("%f",&result);
  			break;
  		default:
  			puts("Opcao invalida!");		
		
	}
printf ("O resultado e' %f", result);

}

