#include <stdio.h>

//declaracion de la cuncion con descripcion
void mostrarDescripcion();
   int main() {
      printf("Ejemplos de un programa en C con un subprograma");

      //llamando al subprograma
      Llamadasubprograma();

      return 0;
   } 

   //Definicion de la funcion con su descripcion 
   void Llamadasubprograma(){
    printf ("Este es un mensaje desde la llamada de un subprograma que imprime un mensaje de descripcion");
   }