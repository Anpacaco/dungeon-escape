#pragma once
#include <iostring>
#include <string>

class Personagem{
public:
	std::string nome;
	int vida, ataque;
	
	Personagem(std::string n, int v, int a):nome(n), vida(v), ataque(a){}
		
	void apresentar(){
		std::cout<<"Personagem: "<<nome<<std::endl;
		std::cout<<"Vida:		"<<vida<<std::endl;
		std::cout<<"Ataque:	    "<<ataque<<std::endl;
	}
};
