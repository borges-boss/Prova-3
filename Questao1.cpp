#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

class Animal
{
private:
    string nome, raca, nomeDono;

private:
    double peso;

private:
    int dia, mes, ano;

public:
    Animal(string nome, string nomeDono, string raca, double peso, int dia, int mes, int ano)
    {
        this->raca = raca;
        this->nomeDono = nomeDono;
        this->nome = nome;
        this->peso = peso;
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }

public:
    void setNome(string nome)
    {
        this->nome = nome;
    }

public:
    string getNomeDono()
    {
        return this->nomeDono;
    }

public:
    void setNomeDono(string nomeDono)
    {
        this->nomeDono = nomeDono;
    }

public:
    string getNome()
    {
        return this->nome;
    }

public:
    void setRaca(string raca)
    {
        this->raca = raca;
    }

public:
    string getRaca()
    {
        return this->raca;
    }

public:
    void setPeso(double peso)
    {
        this->peso = peso;
    }

public:
    double getPeso()
    {
        return this->peso;
    }

public:
    string getDataNascimento()
    {
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    }

public:
    void printInfo()
    {

        cout << "Nome do dono: " << getNomeDono() << "\n";
        cout << "Nome do animal: " << getNome() << "\n";
        cout << "Raca: " << getRaca() << "\n";
        cout << "Peso: " << to_string(getPeso()) << "\n";
        cout << "Data de Nascimento " << getDataNascimento() << "\n";
    }

public:
    int calcIdadeAnimal()
    {
        int currentAno;

        //Obtendo o ano atual
        time_t now = time(0);
        tm *ltm = localtime(&now);
        currentAno = ltm->tm_year + 1900;

        return (currentAno - this->ano);
    }
};
