#include <iostream> //Agrego las librerías para el funcionamineto del código.
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){

int a;
int b;
int c;
  cin>>a>>b>>c;

  //Asigno tres variables de valor entero y después leo su valor con la función de "cin>>".

  int x1=(-b+sqrt(b*b-4*a*c))/(2*a); //Creo una nueva variable que ya tendrá su valor asignado, será el resultado de la operación que se demustra.
  //Por la jerarquía de operaciones, los () demustran el valor más alto, será lo que se hará primero en el código, pero la mayoría de operaciones poseen con un
  //() así que se decidirá el orden por la jerarquía de operaciones.
  //La función de sqrt significa la raíz cuadrada de cuya variable.
  // ";" Le dan el fin a la instrucción.

  int x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  //Sucede de igual manera que en la variable anterior pero cambiará un signo, y el nombre de la variable ya que no se puede repetir el nombre.

  cout<<x1<<" "<<x2; //Imprimo el valor final de la variable x1 y x2, junto con un espacio entre ellas.

  return 0;
  //Le asigno el fin al código.
}
