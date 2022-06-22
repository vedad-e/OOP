#include <iostream>
#include <vector>

struct Osoba{
  std::string ime;
  std::string prezime;
  int godine;
  int brojIndexa;
};

int main(void)
{
  Osoba student;
  std::vector<Osoba> dnevnik;  

  student.ime = "Vedad";
  student.prezime = "Eleskovic";
  student.godine = 22;
  student.brojIndexa = 17109;
  dnevnik.push_back(student);

  student.ime = "Emir";
  student.prezime = "Halilcevic";
  student.godine = 22;
  student.brojIndexa = 17052;
  dnevnik.push_back(student);

  for(int i=0; i<dnevnik.size(); ++i){
    std::cout << dnevnik.at(i).brojIndexa << std::endl;
  }

  return 0;
}
