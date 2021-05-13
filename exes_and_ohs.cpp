
bool XO(const std::string& str)
{
  int ocount = 0;
  int xcount = 0;
  
  for (size_t i = 0; i < str.size(); i++)
    {
    if(tolower(str[i]) == 'o')
      ocount ++;
    else if (tolower(str[i]) == 'x')
      xcount ++;
  };
  if (xcount == ocount) {
    return true;
    }
  else{
    return false;
}
}
