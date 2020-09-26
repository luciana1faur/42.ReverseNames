#include <iostream>
using namespace std;

int main() {
  char nume[30], prenume[30];
  
  cout << "Print the name in reverse where last name comes first: " << endl;
  cout << "-------------------------------------" << endl;

  cout << "Introduceti prenumele: ";
  cin >> prenume;
  cout << "Introduceti numele: ";
  cin >> nume;

  char aux[30];
  aux[30] = nume[30];
  nume[30] = prenume[30];
  prenume[30] = aux[30];

  cout << "Numele inversat este: " << nume << " " << prenume << endl;

  return 0;
}