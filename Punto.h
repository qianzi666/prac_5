#ifndef PUNTO_YA_INCLUIDO
#define PUNTO_YA_INCLUIDO

// ---------------------------------------------------
#include <iostream>

// ---------------------------------------------------
// ---------------------------------------------------
class Punto {
 private:
  double x;
  double y;

 public:

  Punto();
  
  Punto( const double, const double );
  
  double getX() const;
  
  double getY() const;
  
  double distancia( const Punto & p) const;
  
  Punto suma( const Punto & p) const;

  
  
}; // class

// ---------------------------------------------------
#endif