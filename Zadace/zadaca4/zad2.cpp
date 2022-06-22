#include <iostream>
#include <algorithm>
#include <map>

bool velikaSlova(std::string rijec){
  for (char c : rijec){
    if(isupper(c))
      return true;
  }
  return false;
}

std::string pretvoriUMala(std::string rijec){
  for(auto it = rijec.begin(); it != rijec.end(); ++it){
    *it = tolower(*it);
  }
  return rijec;
}

void ispis(std::map<std::string, int>& mapa){
  for(auto& e : mapa)
    std::cout << e.first << " " << e.second << std::endl;
}

int main(void)
{
  std::string a;
  std::map <std::string, int> rijeci;

  while(std::cin >> a){
    std::string rijecMalimSlovima = pretvoriUMala(a);
    auto it = rijeci.find(rijecMalimSlovima);

    if(it == end(rijeci)){
      int b=1;
      rijeci[rijecMalimSlovima]=b;
    }

    else {
      if(velikaSlova(a)){
        it -> second--;
      }
      else{
        it -> second++;
      }
      if(it -> second == 0){
        rijeci.erase(it);
      }
    }
  }
    

  for(auto it = rijeci.begin(); it != rijeci.end(); ++it){
    std::cout << it->first << " " << it->second << std::endl;
  }  

  return 0;
}
