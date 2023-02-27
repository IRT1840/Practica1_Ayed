// AUTOR: Ismael Rojas Torres
// FECHA: 18/02/2023
// EMAIL: alu0101539393@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo de google: Se puede usar /** */ o //, pero // es mucho más común

#include <iostream>
#include <cmath>

// pauta de estilo google: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

using namespace std;

int main() {
  rational_t a(1, 2), b(3), c;
  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;
  cout << "a: ";
  a.Write();
  cout << "b: ";
  b.Write();
  c.Read();
  cout << "c: ";
  c.Write();

  rational_t x(1, 8), y(1, 6);
  x.Write();
  y.Write();
  cout << "x == y? " << (x.IsEqual(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.IsGreater(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.IsLess(y) ? "true" : "false") << endl;

  // FASE III
  cout << "a + b: ";
  a.Add(b).Write();
  
  cout << "b - a: ";
  b.Substract(a).Write();

  cout << "a * b: ";
  a.Multiply(b).Write();
  
  cout << "a / b: ";
  a.Divide(b).Write();
  
  std::cout << "Fin de Programa" << std::endl;
  return 0;
}