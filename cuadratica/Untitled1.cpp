#include <iostream> //Agrego las librer�as para el funcionamineto del c�digo.
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){

int a;
int b;
int c;
  cin>>a>>b>>c;

  //Asigno tres variables de valor entero y despu�s leo su valor con la funci�n de "cin>>".

  int x1=(-b+sqrt(b*b-4*a*c))/(2*a); //Creo una nueva variable que ya tendr� su valor asignado, ser� el resultado de la operaci�n que se demustra.
  //Por la jerarqu�a de operaciones, los () demustran el valor m�s alto, ser� lo que se har� primero en el c�digo, pero la mayor�a de operaciones poseen con un
  //() as� que se decidir� el orden por la jerarqu�a de operaciones.
  //La funci�n de sqrt significa la ra�z cuadrada de cuya variable.
  // ";" Le dan el fin a la instrucci�n.

  int x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  //Sucede de igual manera que en la variable anterior pero cambiar� un signo, y el nombre de la variable ya que no se puede repetir el nombre.

  cout<<x1<<" "<<x2; //Imprimo el valor final de la variable x1 y x2, junto con un espacio entre ellas.

  return 0;
  //Le asigno el fin al c�digo.
}
