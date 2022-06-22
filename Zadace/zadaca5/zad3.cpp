#include <iostream>

template<typename T>
class MojNiz{
  private:
    size_t velicina{0};
    T* ptr = nullptr;

  public:
    MojNiz(std::initializer_list<T> i1)
      : ptr{new T[velicina], velicina[i1.size()]}{
        std::copy(i1.begin(), i1.end(), ptr);}

    MojNiz(const MojNiz& drugi)
      : velicina{drugi.velicina}, ptr{new T[velicina]}{
        std::copy(drugi.ptr, drugi.ptr+velicina, ptr);}

    MojNiz& operator=(const MojNiz& drugi){
      delete [] ptr;
      velicina = drugi.velicina;
      ptr = new T[velicina];
      std::copy(drugi.ptr, drugi.ptr + velicina, ptr);
      return *this;}

    MojNiz(MojNiz&& drugi)
      : ptr{drugi.ptr}, velicina{drugi.velicina}{
      drugi.ptr = nullptr;
      drugi.velicina = 0;}

    MojNiz& operator=(MojNiz&& drugi){
      delete [] ptr;
      velicina = drugi.velicina;
      ptr = drugi.ptr;
      drugi.ptr = nullptr;
      drugi.velicina = 0;
      return *this;}
};

int main(void)
{
  MojNiz<double> mojDouble{1.1, 1.2, 1.3};
  MojNiz<short> mojShort{2,5,7};
  return 0;
}
