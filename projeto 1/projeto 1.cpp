// projeto 1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;


int main()
{

	string nome = "";
	double p1 = 0;
	double p2 = 0;
	double media = 0;


	cout << "Nome\n";
	cout << "===============\n";
	cin >> nome;



	cout << "Digite a nota da P1\n";
	cin >> p1;


	cout << "Digite a nota da P2\n";
	cin >> p2;


	media = (p1 + p2) / 2;


	if (media >= 6)
	{
		cout << "Aprovado\n";
	}
	else
	{
		cout << "Reprovado\n";
	}
}


