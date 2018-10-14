Algoritmo "ord3Num"

Var
num1, num2, num3:real

Inicio
escreval("Insira 3 numeros reais para serem ordenados de forma CRESCENTE:")
leia(num1)
leia(num2)
leia(num3)

          se (num1<num2)entao
             se (num3>=num2)entao
             escreval(num1,",",num2,",",num3)
             senao
                  se (num3>=num1)entao
                  escreval(num1,",",num3,",",num2)
                  senao
                  escreval(num3,",",num1,",",num2)
                  fimse
             fimse
          senao
               se (num3>=num2)entao
                  se (num3>=num1)entao
                  escreval(num2,",",num1,",",num3)
                  senao
                  escreval(num2,",",num3,",",num1)
                  fimse
               senao
                    escreval(num3,",",num2,",",num1)
               fimse
          fimse
Fimalgoritmo