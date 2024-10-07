#include<iostream>
int main(int argc, char**argv){
	float longueur,largeur,perim,surf;
	int x ;*
	do{
	std::cout<<"Entrer la longueur du rectangle puis sa largeur"<<std::endl;
	std::cin>>longueur>>largeur;
	if (longueur<0 || largeur<0){
		std::cout<<"tous les nombres doivent etre positif"<<std::endl;
	}else{
		perim=(longueur + largeur)*2;
		surf= longueur*largeur;
		std::cout<<"le perimetre est de :"<<perim<<" et l'aire est de :"<<surf;
	}std :: cin >>x;
	}while(x!=0);
	return 0;
}


