using namespace std;
#ifndef ALUNO_H
#define ALUNO_H

class Aluno
{
private:
	int matricula;
	int idade;
	double *nota;
	int tam;
	
public:
	Aluno(int matricula, int idade);
	int getMatricula();
	int getIdade();
	void setIdade(int idade);
	void setMatricula(int matricula);
	void setTamanho();
	void PreencheVetor();
	double* getnota();
	void imprimirAluno();
	bool foiAprovado();
};


#endif // ALUNO_H