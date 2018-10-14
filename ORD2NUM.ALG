Algoritmo "ord2Num"

Var
num1, num2:real

Inicio
escreval("insira 2 numeros reais para serem ordenados:")
leia(num1)
leia(num2)

          se (num1<num2)entao
             escreval(num1,",",num2)
          senao
               se (num1=num2) entao
               escreval ("Numeros iguais!")
               senao
               escreval(num2,",",num1)
               fimse
          fimse
Fimalgoritmo