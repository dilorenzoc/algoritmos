#include <iostream>
#include <conio.h>

main(){
	float  C, F;  
	char opcao;

      puts("Entre com a opcao");
      printf("(F) Fahrenheit e (C) Celsius \n");
      scanf("%c",&opcao);
  	if ((opcao == 'C')||(opcao == 'c'))
	  {
        printf("Entre com a temperatura em Celsius \n");
        scanf("%f",&C);
        F =(9 * C + 160) / 5;
        printf("%.2fC = %.2fF",C,F);
	  }
	  
	else
		if ((opcao == 'f') || (opcao== 'F'))
        {
			printf("Entre com a temperatura em Fahrenheit");
	        scanf ("%f",&F);
	        C=(F-32)*5/9;
	        printf("%.2fF = %.2fC",F,C);
    	}
		else
		printf("Opcao incorreta!");
		
}
