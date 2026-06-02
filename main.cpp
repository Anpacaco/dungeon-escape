#include<iostream>
#include"personagem.h"

int main(){
	std::setlocale(LC_ALL, "Portuguese");
	
	Personagem heroi("Herói", 100, 10);
	heroi.apresentar();
	
	return 0;
}
