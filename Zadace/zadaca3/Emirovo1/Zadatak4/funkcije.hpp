#pragma once
#include <iostream>
#include <vector>
#include <functional>

void ispisi(std::vector<std::string>&, std::istream&) ;

void dodaj(std::string, std::vector<std::string>&);

void kopiraj(std::vector<std::string>&, std::vector<std::string>&);

void izvrsi(std::vector<std::string>&);

void obrisi(std::vector<std::string>&);

void obrisiRijec(std::vector<std::string>&, std::string);

void sortiraj (std::vector<std::string>&,
    std::function<bool(std::string, std::string)> );

void dodajVektor(std::vector<std::string>&, std::vector<std::string>&);

void obrisiIsteRijeci(std::vector<std::string>&, std::vector<std::string>&);

void izvrsiNPuta(std::vector<std::string>&, std::function<void(std::string&)>, int);


