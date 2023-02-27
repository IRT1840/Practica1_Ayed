// AUTOR: Ismael Rojas Torres
// FECHA: 18/02/2023
// EMAIL: alu0101539393@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1

// pauta de estilo de google: Se puede usar /** */ o //, pero // es mucho más común

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

# define EPSILON 1e-6

using namespace std;

class rational_t {
  // pautas de estilo Google: "public" y después "private"
public:
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}
  
  // pauta de estilo google: indentación a 2 espacios
  // getters (Constantes)
  int get_num() const;
  int get_den() const;
  
  // setters (Para modificar el objeto)
  void set_num(const int);
  void set_den(const int);

  double value(void) const; //Retorno del valor del racional

  //Pauta de estilo de Google: Los metodos deben ser constantes si no modifican el objeto
  bool IsEqual(const rational_t&, const double precision = EPSILON) const; //Compara si son iguales
  bool IsGreater(const rational_t&, const double precision = EPSILON) const; //Compara si x es mayor que y
  bool IsLess(const rational_t&, const double precision = EPSILON) const; //Compara si x es menor que y
  
  // FASE III

  //Pauta de estilo de google: Usar nombres significativos para las funciones 
  rational_t Add(const rational_t&); //Suma de racionales
  rational_t Substract(const rational_t&); //Resta de racionales
  rational_t Multiply(const rational_t&); //Multiplicación de racionales
  rational_t Divide(const rational_t&); //División de racionales
  
  void Write(ostream& = cout) const;
  void Read(istream& = cin);
  
private:
  // pauta de estilo google: nombre de los atributos seguido de "_"
  //Pauta de estilo de google, inicializar el valor de los atributos a un valor
  int num_{1};
  int den_{1};
};
