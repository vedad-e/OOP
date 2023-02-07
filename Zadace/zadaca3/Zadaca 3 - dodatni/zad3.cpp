
#include <iostream>

void f1(int a){
    if(a>10)
    throw std::string("CIJELI BROJ VECI OD 10");
}

void f2(double c)
{
    try{
        f1(11);
        throw std::string("IZNIMKA 2");
    }
    catch(int d)
    {
        std::cout << "CIJELI BROJ 2" << std::endl;
    }
}

void f1(double b){
    try
    {
      f1(5);  
      f2(b);
    }
    catch(...)
    {
      std::cout << "IZNIMKA 1" << std::endl;
      if(b>2.3)
      throw 2.5;
      if(b<2.3)
      throw 2;
      throw 1;
    }
}

int main()
{
    double broj = 2.2;
    try{
        f1(broj);
    }
    catch(std::string iznimka){
        std::cout << iznimka << std::endl;
    }
    catch(int broj){
        std::cout << broj << std::endl;
        if(broj > 1)
        throw true;
    }
    catch(...){
        std::cout << "NE ZNAM" << std::endl;
    }
    
    return 0;
}
