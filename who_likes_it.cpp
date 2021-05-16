include <vector>

#include <iostream>
#include <math.h>
using namespace std;

std::string likes(const std::vector<std::string> &names)
{
  int array_size = names.size();
  string sentence;
  bool and_sent = false;
  //cout << array_size;

  
  if (array_size > 0){
    for (int i = 0; i < array_size; i++){

          
        
        if ((array_size > 3) and (i > 1)){
          cout << "i=" << i << endl;
          sentence.append(" and ");
          sentence.append(to_string((array_size - (i))));
          sentence.append(" others");
          i = array_size; //drop out of loop
        }
        else{
          sentence.append(names[i]);
          sentence.append("");

          if ((i == (array_size - 2)) and (array_size > 1)){
            sentence.append(" and ");
            and_sent = true;
          }
          else if ((array_size > 2) and (and_sent == false) and (i < 1)){
          sentence.append(", ");
          }
    }
    }
    
  }
  else
    {
    sentence.append("no one");
  }


  if (array_size > 1){
  sentence.append(" like this");
    }
  else {
    sentence.append(" likes this");
  }
  
  cout << sentence << endl;
  
  return sentence;
  }
  
