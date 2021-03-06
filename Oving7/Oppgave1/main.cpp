//
// fraction/main.cpp
//
#include "fraction.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
  cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  Fraction a(25, 5);
  Fraction b(50, 5);

  print("a = ", a);
  print("b = ", b);

  print("a - 5 = ", a - 5);
  print("5 - a = ", 5 - a);
}

// Utskrift:
// a = 5 / 1
// b = 10 / 1
// a - 5 = 0 / 1
// 5 - b = 0 / 1

/* Oppgave 1 b)
 * Forklar hvordan 5 - 3 - a - 7 - b:
 * 
 * Svar:
 * I C++ er matematikken venstreassosiativ:
 * Først brukes operatoren '-' for vanlig heltall (int, int): 5 - 3 = 2.
 * Deretter brukes operatoren '-' for Fraction med (int, fraction).
 * Man får returnert et objekt av Fraction og bruker operatoren '-' for fraction med (fraction, int): 2 - 7 = -5
 * Aller sist brukes operatoren for '-' for Fraction med (fraction, fraction): -5 - 5 = -10.
 */