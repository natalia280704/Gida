/**
   Título: Programa que multiplica un número entero por 10
   Autora : Natalia Velázquez Rosas
   Fecha de creación: 21 de Septimebre del 2022
   Fecha de última modificación: 22 Septiembre de 2022

*/


#include <stdio.h>
void mostrarInstrucciones(char autor[], char instrucciones[]);
int ingresarNumero(void);
int ingresarNumero2(void);

int suma(int numero);
int resta(int numero);
int multi(int numero);
int divi(int numero);
void mostrarResultados(int resultado);



int main (void)

{

  int num1;
  int num2;
  int res1;
  int res2;
  int res3;
  int res4;

  //Sumar un número
  num1 = ingresarNumero();
  num2 = ingresarNumero2();
  res1 = suma(numeros);
  mostrarResultados(res1);

  /**
  //Restar número2                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  
  //Multiplicar número3                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  
  //Multiplicar número4                                                                                                                                                                                    
  num = ingresarNumero();
  res = multiplicarPorDiez(num);
  mostrarResultados(res);

  */
  return 0;
  
}
/** Procedimiento que muestra las instrucciones del programa     */




void mostrarInstrucciones(char autor[], char instrucciones[])
  
{
  printf("Instrucciones:\n\t%s\n",instrucciones);
  printf("Autor:\n\t%s\n",autor);

  return;
}

/**
   Funciones que solicita ingresar los números enteros */

int ingresarNumero(void)
{
  int numero1;

  printf("\n\nIngresa un número entero:  ");
  scanf (" %d", &numero1);

  return numero1;

}


int ingresarNumero2(void)
{
  int numero2;

  printf("\n\nIngresa un número entero:  ");
  scanf (" %d", &numero2);

  return numero2;

}





/** Función que suma */

int suma (int numero)
{
  int resultado;
  resultado = num1 + num2;
  return resultado;
  

}

/** Procedimiento que muestra el resultado de la suma de los numeros */

void mostrarResultados(int resultado)
{
  printf("El resultado de sumar los números es: %d\n\n",resultado);
  return;
}
