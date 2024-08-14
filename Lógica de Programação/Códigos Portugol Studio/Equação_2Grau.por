programa 
{
  inclua biblioteca Matematica --> mat

  //Fun��o para definir o Delta
  funcao real resultadoDelta(real a, real b, real c)
  {
    real delta

    delta = (mat.potencia(b,2)) - 4*a*c

    retorne delta
  }

  //Casos de resultado

  //Caso Positivo
  funcao real resultadoPos(real a, real b, real delta){

    real resultado = (-1*b + mat.raiz(delta,2))/2*a

    retorne resultado
  }

  //Caso Negativo
  funcao real resultadoNeg(real a, real b, real delta){

    real resultado = (-1*b - mat.raiz(delta,2))/2*a

    retorne resultado
  }

  funcao inicio() 
  {
    //Variaveis
    real a,b,c,delta,resultado1,resultado2
    inteiro numresultado

    //Inicio do programa
    escreva("Calculador de Equa��es de Segundo Grau\n")
    escreva("\n")
    escreva("Digite o termo A da equa��o: ")
    leia(a)
    escreva("Digite o termo B da equa��o: ")
    leia(b)
    escreva("Digite o termo C da equa��o: ")
    leia(c)
    escreva("\n")

    //Calculo caso "a" seja diferente de 0
    se(a != 0)
    {

      //Defini��o do Delta
      delta = resultadoDelta(a,b,c)

      //Caso Delta negativo
      se(delta < 0)
      {

        escreva("Esta fun��o n�o possui ra�zes reais.")
        escreva("\n")

        numresultado = 0

      }

      //Caso Delta nulo
      senao se(delta == 0)
      {

        resultado1 = resultadoPos(a,b,delta)

        numresultado = 1

      }

      //Caso Delta positivo
      senao
      {

        resultado1 = resultadoPos(a,b,delta)

        resultado2 = resultadoNeg(a,b,delta)

        numresultado = 2

      }
    }

    //Calculo caso "a" seja 0 e "b" seja diferente de 0
    senao se(a == 0 e b != 0)
    {

      resultado1 = (-1*c)/b

      numresultado = 1

    }

    //Calculo caso apenas "c" seja diferente de 0
    senao
    {

      escreva("N�o foi designada nenhuma inc�gnita para esse calculo ser considerado uma equa��o")
      escreva("\n")

      numresultado = 0

    }

    //Definidor de resultados
    escolha(numresultado){

      //Caso tenha apenas um resultado
      caso 1:
      escreva("Valor da ra�z de sua fun��o: ", resultado1)
      escreva("\n")
      pare

      //Caso tenha dois resultados
      caso 2:
      escreva("Primeira ra�z de sua fun��o: ", resultado1)
      escreva("\n")
      escreva("Segunda ra�z de sua fun��o: ", resultado2)
      escreva("\n")
      pare

    }
  }
}
