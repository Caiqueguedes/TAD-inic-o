#include "aluno.h"
#include <iostream>
using namespace std;


Aluno::Aluno(int mat, int id) {
    setIdade(id);
    setMatricula(mat);
    setTamanho();
    PreencheVetor();
	
}
void Aluno::setTamanho(){
    cin >> tam;
    if(tam < 0 ){
        exit(0);
    }
}

void Aluno::PreencheVetor(){
    for(int i = 0; i < tam;i++){
        cin >> nota[i];
        if(nota[i] < 0 || nota[i] > 10){
            cout << "nota invalida!" << endl;
            cin >> nota[i];
        }
    }
}
int Aluno::getMatricula() {

	return matricula;

}
double* Aluno::getnota() {
    
	return nota;
}

int Aluno::getIdade() {

	return idade;
}

void Aluno::imprimirAluno() {

	cout << "Matricula: " << getMatricula() << endl;
	cout << "Idade: " << getIdade()<< endl;
	cout << "nota: ";
	for(int i = 0; i < tam; i++) {
		if(i < tam-1)
			cout << nota[i] << ",";
		else
			cout << nota[i];
	}
}
void Aluno::setIdade(int id){

	if(id < 0 || id > 100) {
		idade = 0;
	}else{
	    idade = id;
	}
}

void Aluno::setMatricula(int mat){
    
    matricula = mat;
    
}

bool Aluno::foiAprovado() {
	float soma = 0, media = 0;
	for(int i = 0; i < tam; i++) {
		soma += nota[i];

	}
	media = soma/tam;
	cout << "\nMedia: " << media;
	
	if(media >= 6.0) {
		cout << endl;
		cout << "Aprovado!";
		return true;
	}
	else {
		cout << endl;
		cout << "Reprovado!";
		return false;
	}
}
