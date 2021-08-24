#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

class Empregado
{

protected:
    string nome, endereco, telefone;

protected:
    int codigoSetor;

protected:
    double salarioBase, imposto;

public:
    Empregado(string nome, string endereco, string telefone, int codigoSetor, double salarioBase, double imposto)
    {

        this->nome = nome;
        this->endereco = endereco;
        this->telefone = telefone;
        this->codigoSetor = codigoSetor;
        this->salarioBase = salarioBase;
        this->imposto = imposto;
    }

public:
    void setNome(string nome)
    {
        this->nome = nome;
    }

public:
    string getNome()
    {
        return this->nome;
    }

public:
    void setEndereco(string endereco)
    {
        this->endereco = endereco;
    }

public:
    string getEndereco() { return this->endereco; }

public:
    void setTelefone(string telefone)
    {
        this->telefone = telefone;
    }

public:
    string getTelefone() { return this->telefone; }

public:
    void setCodigoSetor(int codigoSetor)
    {
        this->codigoSetor = codigoSetor;
    }

public:
    int getCodigoSetor() { return this->codigoSetor; }

public:
    void setSalarioBase(double salarioBase)
    {
        this->salarioBase = salarioBase;
    }

public:
    double getSalarioBase() { return this->salarioBase; }

public:
    void setImposto(double imposto)
    {
        this->imposto = imposto;
    }

public:
    double getImposto() { return this->imposto; }

public:
    virtual double calcSalario()
    {
        return salarioBase - ((imposto * 100) / salarioBase);
    }
};

using namespace std;
class Vendedor : public Empregado
{

private:
    double valorVendas, comissao;

    Vendedor(double valorVendas, double comissao, string nome, string endereco, string telefone, int codigoSetor, double salarioBase, double imposto)
        : Empregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto)
    {

        this->valorVendas = valorVendas;
        this->comissao = comissao;
    }

public:
    double getValorVendas() { return valorVendas; }

public:
    void setValorVendas(double valorVendas) { this->valorVendas = valorVendas; }

public:
    double getComissao() { return comissao; }

public:
    void setComissao(double comissao) { this->comissao = comissao; }

public:
    double calcSalario()
    {
        return (salarioBase - ((imposto * 100) / salarioBase)) + (valorVendas * (comissao / 100));
    }
};