#include <iostream>
#include <math.h>
using namespace std;

class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p){
    int new_total = p0;
    int num_years = 0;
    
    while (new_total < p){
        new_total = (new_total * (1 + percent/100)) + aug;
        num_years++;
    }
    return num_years;
  }
};
