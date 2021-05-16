#include <vector>

#include <iostream>
#include <math.h>
using namespace std;

double calcAverage(const std::vector<int>& values){
    double total = 0;
    double average = 0;
    for(int i = 0; i < values.size(); i++){
      total += values[i];
      }
    average = total / values.size();
  return average;
}

//Better to use Accumulate
