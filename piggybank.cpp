#include <iostream>

int main() {
  
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  double pesos_conversionrate = 0.059;
  double reais_conversionrate = 0.19;
  double soles_conversionrate = 0.27;

  dollars = (pesos * pesos_conversionrate) + (reais * reais_conversionrate) + (soles * soles_conversionrate);
  
  std::cout << "US Dollars = $" << dollars << "\n"; 
  
}