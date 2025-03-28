#include <iostream>
#include "point2d.h"

int main(){
    // Creación de Objetos
    point2d punto1(5,7);
    point2d punto2(3,4);

    // Getters: Para ver los valores del objeto
    cout << "Punto 1: " << "(" << punto1.getCoordenadaX() << "," << punto1.getCoordenadaY() << ")" << endl;
    cout <<"Punto 2: " << "(" <<  punto2.getCoordenadaX() << "," << punto2.getCoordenadaY() << ")" << endl;

    // Creación de Objetos utilizando los operadores sobrecargados
    point2d suma = punto1 + punto2;
    point2d resta = punto1 - punto2;
    point2d multiplicacion = punto1 * punto2;
    // Una variable escalar para la división
    double escalar = 5;
    point2d division = punto1 / escalar;

    /* Sobrecarga de Operadores: Se prueban los operadores sobrecargados para los objetos de la clase point2d */
    cout << "Suma entre puntos: ";
    suma.PrintPoint();
    cout << endl;

    cout << "Resta entre puntos: ";
    resta.PrintPoint();
    cout << endl;
    
    cout << "Multiplicación entre puntos: ";
    multiplicacion.PrintPoint();
    cout << endl;

    cout << "División Punto Escalar: "; 
    division.PrintPoint();
    cout << endl;


    /* Métodos de la clase: Se prueban las funciones para calcular la distancia entre dos puntos,
    punto medio y vector unitario*/

    // Distancia entre dos puntos
    cout << "Distancia entre puntos: " << punto1.CalcularDistancia(punto2) << endl;
    cout << "Distancia entre el punto y el origen : " << punto1.CalcularDistancia() << endl;
    
    // Punto Medio
    cout << "Punto Medio: ";
    punto1.PuntoMedio(punto2).PrintPoint();
    cout << endl;
    cout << "Punto Medio al Origen: ";
    punto1.PuntoMedio().PrintPoint();
    cout << endl;
    
    // Vector Unitario
    cout << "Vector Unitario: ";
    punto1.VectorUnitario(punto2).PrintPoint(); 
    cout << endl;   
    cout << "Vector Unitario en dirección al punto y el origen : ";
    punto1.VectorUnitario().PrintPoint();
    cout << endl;

    /* Setters: Se prueban los Setters */

    punto1.setCoordenadaX(10);
    punto1.setCoordenadaY(4);

    punto2.setCoordenadaX(6);
    punto2.setCoordenadaY(8);

    cout << "Setter para el Punto 1 --> (10,4): ";
    punto1.PrintPoint();
    cout << endl;
    cout << "Setter para el Punto 2 --> (6,8): ";
    punto2.PrintPoint();
    cout << endl;

}