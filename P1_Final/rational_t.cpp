// AUTOR: Ismael Rojas Torres
// FECHA: 18/02/2023
// EMAIL: alu0101539393@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1

// pauta de estilo de google: Se puede usar /** */ o //, pero // es mucho más común

#include "rational_t.hpp"

#include <cmath>

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo google: Minimizar el espacio vertical en blanco
// pauta de estilo de google: Un espacio vertical en blanco antes de un bloque de comentarios

//Devuelve el valor del numerador
int rational_t::get_num() const {
  return num_;
}

//Devuelve el valor del denominador
int rational_t::get_den() const {
  return den_;
}

//Permite cambiar el valor del numerador
void rational_t::set_num(const int n) {
  num_ = n;
}

//Permite cambiar el valor del denominador
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}

//Devuelve en valor (en double) el valor del racional introducido por parámetros.
double rational_t::value() const { 
  return double(get_num()) / get_den();
}

// comparaciones
//La función calcula el valor absoluto de cada racional y luego resta valor1 a valor2. Si el resultado es menor que la precisión, entonces consideramos que son iguales
bool rational_t::IsEqual(const rational_t& r, const double precision) const { 
  double valor1 = (value());
  double valor2 = fabs (r.value());
  if (fabs (valor1 - valor2) < precision) {
    return 1;
  }
  return 0;

}

//Esta función calcula el valor de cada racional y luego resta valor1 a valor2. Si el resultado es mayor que la precisión consideramos que valor 1 > valor 2
bool rational_t::IsGreater(const rational_t& r, const double kPrecision) const {
  double valor1 = ( value());
  double valor2 = (r.value());
  if ((valor1 - valor2) > kPrecision) {
    return 1;
  }
  return 0;
}

  //Esta función calcula el valor de cada racional y luego resta valor1 a valor2. Si el resultado no es mayor que la precisión consideramos que valor 1 < valor 2
bool rational_t::IsLess(const rational_t& r, const double kPrecision) const {
  double valor1 = ( value() );
  double valor2 = (r.value());
  if ((valor2 - valor1) > kPrecision) {
    return 1;
  }
  return 0;
}
// operaciones

//La función add suma (en forma de fracción) dos objtetos de la clase racional, sin calcular su valor en decimal
rational_t rational_t::Add(const rational_t& r) {
  int numerador;
  int denominador;
  numerador = ((num_ * r.get_den()) + (r.get_num() * den_));
  denominador = (den_ * r.get_den());
  rational_t racional_final{numerador, denominador};
  return racional_final;

}

//La función substract resta (en forma de fracción) dos objtetos de la clase racional, sin calcular su valor en decimal, retornando un objeto racional
rational_t rational_t::Substract(const rational_t& r) {
  int numerador;
  int denominador;
  numerador = ((num_ * r.get_den()) - (r.get_num() * den_));
  denominador = (den_ * r.get_den());
  rational_t racional_final{numerador, denominador};
  return racional_final;
}

//Esta función multiplica los objetos de la clase racional, multiplicando los numeradores y los denominadores, y retornando un racional con el resultado
rational_t rational_t::Multiply(const rational_t& r) {
  int numerador;
  int denominador;
  numerador = (num_ * r.get_num());
  denominador = (den_ * r.get_den());
  rational_t racional_final{numerador, denominador};
  return racional_final;
}

//La función divide dos racionales usando la multiplicación inversa. Retorna un racional como resultado.
rational_t rational_t::Divide(const rational_t& r) {
  int numerador;
  int denominador;
  numerador = (num_ * r.get_den());
  denominador = (den_ * r.get_num());
  rational_t racional_final{numerador, denominador};
  return racional_final;
}

// E/S
void rational_t::Write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}

void rational_t::Read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
