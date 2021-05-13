long long rowSumOddNumbers(unsigned n){
  //your code here
  int firstnum = 0;
  int secondnum = 0;
  int finalnum = 0;
  
  firstnum = (n*n) - (n-1);
  secondnum = (((n+1)*(n+1)) - ((n+1)) -1);
  //std::cout << n << " " << firstnum << " " << secondnum << std::endl;
  
  if (n == 1){ //Rule out 1
    finalnum = 1;
  }
  else{
    
  for (int i = firstnum; i <= secondnum; i++){
      std::cout << i << std::endl;
      finalnum = (finalnum + i) ;
      i++;
    
      
      }
    }

  return finalnum;
}
