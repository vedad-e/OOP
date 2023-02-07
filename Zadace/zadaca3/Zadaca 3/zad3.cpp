//f-ja transformiraj prima 2 vektora i lambda funkciju koja inkrementira svaki element vektora

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <exception>

void transformiraj (std::vector<double>& prvi,
    std::vector<double>& drugi,
    std::function<double(double)> transformacija)
{
  if(prvi.size() == drugi.size()){
  std::transform(prvi.begin(), prvi.end(), prvi.begin(), transformacija);
  std::transform(drugi.begin(), drugi.end(), drugi.begin(), transformacija);
  }
  else
    throw std::domain_error ("Error");
}

int main(void)
{
  std::vector<double> prvi_vektor;
  std::vector<double> drugi_vektor;

  std::cout << "Unesite elemente prvog vektora: " << std::endl;
  for(double a ; std::cin >> a ; prvi_vektor.push_back(a) ){
  } 

  std::cin.clear();

  std::cout << "Unesite elemente drugog vektora: " << std::endl;
  for(double a ; std::cin >> a ; drugi_vektor.push_back(a) ){
  } 
  
try{
  transformiraj(prvi_vektor, drugi_vektor, [] (double a) {return ++a;});
}
catch(std::domain_error iznimka){
  std::cout << iznimka.what() << std::endl;
  exit(1);
}
  for(auto element : prvi_vektor)
    std::cout << element << std::endl;
   for(auto element : drugi_vektor)
    std::cout << element << std::endl;
  return 0;
}
