#include <iostream>

class MojNiz{
  public:
    // 1
    MojNiz() = default;

    // 4
    MojNiz(std::initializer_list<int> l1)
      : ptr{new int[velicina]}, velicina{l1.size()}{
        std::copy(l1.begin(), l1.end(), ptr);}

    // 2
    size_t size(){
      return velicina;
    }

    // 3a
    int& at(size_t i){
      if(i>velicina){
        throw std::invalid_argument("Error");
        exit(1);
      }
      return ptr[i];
    }

    // 3b
    const int& at(size_t i) const{
      if(i>velicina){
        throw std::invalid_argument("Error");
        exit(1);
      }
      return ptr[i];
    }

    // 5 Copy
    MojNiz(const MojNiz& drugi)
      : velicina{drugi.velicina}, ptr{new int[velicina]}{
        std::copy(drugi.ptr, drugi.ptr+velicina, ptr);}

    // 5 Copy operator za dodj vr
    MojNiz& operator=(const MojNiz& drugi){
      delete [] ptr;
      velicina = drugi.velicina;
      ptr = new int[velicina];
      std::copy(drugi.ptr, drugi.ptr+velicina, ptr);
      return *this;
    }

    // 5 Move konstruktor
    MojNiz(MojNiz&& drugi)
      : ptr{drugi.ptr}, velicina{drugi.velicina}{ 
        drugi.ptr = nullptr;
        drugi.velicina = 0;
    }

    // 5 Move copy operator za dodj vr
    MojNiz& operator=(MojNiz&& drugi){
      delete [] ptr;
      velicina = drugi.velicina;
      ptr = drugi.ptr;
      drugi.ptr = nullptr;
      drugi.velicina = 0;
      return *this;
    }

    // 6 Operator []
    int& operator[](size_t i) {return ptr[i];}
    const int& operator[](size_t i) const{return ptr[i];}

    // 7
    MojNiz& operator*(const MojNiz& drugi){
      velicina = drugi.velicina;
      for(auto i=0; i<velicina; ++i){
        ptr[i] = ptr[i]*drugi.ptr[i];
      }
      return *this;
    }

    // 8
    MojNiz& operator+(const MojNiz& drugi){
      if(velicina != drugi.velicina){
        throw std::invalid_argument("nesto");
      }
      velicina = drugi.velicina;
      for(auto i=0; i<velicina; ++i){
        ptr[i] = ptr[i]+drugi.ptr[i];
      }
      return *this; 
    }

    // 9
    MojNiz& operator++(int){
      for(auto i=0; i<velicina; ++i){
        ptr[i]++;
      }
      return *this;
    }

    //10
    MojNiz& operator++(){
       for(auto i=0; i<velicina; ++i){
        ptr[i]++;
      }
      return *this;
    }

    //11 ?????
/*    void push_back(int broj){
      size_t velicina_nova = 0;
      velicina_nova = velicina+1;
      int* ptr_novi = new int [velicina_nova];

      std::copy(ptr, ptr+velicina_nova, ptr_novi);
      ptr_novi[velicina] = broj;
      ++velicina;
   }
*/

    //11 Dzamba
    void push_back(const int& broj){
      int* ptr_novi = new int[velicina + 1];
      std::copy(ptr, ptr+velicina, ptr_novi);
      ptr_novi[velicina] = broj;
      delete [] ptr;
      ptr = ptr_novi;
      ++velicina;
    }

    void ispisi(){
      for(auto i=0; i<velicina; ++i){
        std::cout << ptr[i] << " ";
      }
      std::cout << std::endl;
    }


  private:
  size_t velicina{0};
  int* ptr=nullptr;
};

int main(void)
{
  MojNiz a{2,3,1};

  // Copy
  MojNiz b{a};
  
  // Copy Operator za dodj vr
  MojNiz c{2,3,1};
  MojNiz d{2,1,3};
  MojNiz f{1,1,1,1,1};
  c.push_back(3);
  c.ispisi();
  

  // Move konstruktor
  MojNiz e{MojNiz{5,4,1}};


  return 0;
}
