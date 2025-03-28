#ifndef POINT_2D
#define POINT_2D

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class point2d{
    private:
        double x, y; // Se definen los atributos x y y privados, son las coordenadas del punto

    public:
        // Constructor
        point2d() : x(0), y(0) {}
        point2d(double x, double y) : x(x), y(y) {}

        // Setter: Permite modificar la coordenada
        void setCoordenadaX(double nueva_x){
            this -> x = nueva_x;
        }
        void setCoordenadaY(double nueva_y){
            this -> y = nueva_y;
        }

        // Getter: Permite acceder o ver el valor
        double getCoordenadaX(){
            return x;
        } 
        double getCoordenadaY(){
            return y;
        }

        // Sobrecarga de Operadores Básicos

        // Suma
        point2d operator+(const point2d& otra_coord) const{
            return point2d(x + otra_coord.x, y + otra_coord.y);
        }

        // Resta
        point2d operator-(const point2d& otra_coord) const{
            return point2d(x - otra_coord.x, y - otra_coord.y);
        }

        // Multiplicación
        point2d operator*(const point2d& otra_coord) const{
            return point2d(x * otra_coord.x, y * otra_coord.y);
        }

        // División
        point2d operator/(const double& escalar) const{
            return point2d(x / escalar, y / escalar);
        }

        // Funciones adicionales
        // Calcular distancia
        double CalcularDistancia(const point2d& otra_coord = point2d()) const {
            return sqrt(pow(x-otra_coord.x,2)+pow(y-otra_coord.y,2));
        }


        // Calcular Punto Medio
        point2d PuntoMedio(const point2d& otra_coord = point2d()) const {
            return point2d((x + otra_coord.x)/2, (y + otra_coord.y)/2);
        }

        // Calcular Vector Unitario: El punto de referencia (La cola del vector) es el argumento ingresado
        point2d VectorUnitario(const point2d& otra_coord = point2d() /*Cola del vector*/) const {
            point2d cola(otra_coord.x, otra_coord.y);
            point2d cabeza(x,y);
            point2d vector_resultante = cabeza - cola;
            double magnitud = cola.CalcularDistancia(cabeza);
            return vector_resultante/magnitud;    
        }
        void PrintPoint() const{
            cout << "(" << x << "," << y << ")" << endl;
        }

};

#endif

