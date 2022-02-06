#include <iostream>

using namespace std;

const int TamVet = 3;

struct Funcionario
{
    char nome[31];
    int idade;
    char sexo;
    int cpf;
    char cargo[31];
    int salario;
    int nascimento;
    int codigo;
};

int main(){

    Funcionario funcionarios[TamVet];

    for (int i = 0; i < TamVet; i++)
    {
        cout << "digite o nome: ";
        cin.getline(funcionarios[i].nome, 31);
        cout << "digite a idade: ";
        cin >> funcionarios[i].idade;
        cin.ignore();
        cout << "digite o sexo F/M: ";
        cin >> funcionarios[i].sexo;
        cin.ignore();
        cout << "digite o cpf: ";
        cin >> funcionarios[i].cpf;
        cin.ignore();
        cout << "digite o cargo: ";
        cin.getline(funcionarios[i].cargo, 31);
        cout << "digite o salario: ";
        cin >> funcionarios[i].salario;
        cout << "digite o nascimento: ";
        cin >> funcionarios[i].nascimento;
        cout << "digite o codigo: ";
        cin >> funcionarios[i].codigo;
        cin.ignore();
    }

    for (int i = 0; i < TamVet; i++)
    {   
        cout << "funcionario[" << i << "]: "; 
        cout << funcionarios[i].nome << endl;
        cout << "idade[" << i << "]: ";
        cout << funcionarios[i].idade << endl;
        cout << "sexo[" << i << "]: ";
        cout << funcionarios[i].sexo << endl;
        cout << "cpf[" << i << "]: ";
        cout << funcionarios[i].cpf << endl;
        cout << "cargo[" << i << "]: ";
        cout << funcionarios[i].cargo << endl;
        cout << "salario[" << i << "]: ";
        cout << funcionarios[i].salario << endl;
        cout << "nascimento[" << i << "]: ";
        cout << funcionarios[i].nascimento << endl;
        cout << "codigo[" << i << "]: ";
        cout << funcionarios[i].codigo << endl;
    }
    
        
    



    return 0;
}
