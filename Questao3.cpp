#include <iostream>

using namespace std;

class Item
{

protected:
    string nome, marca;

protected:
    int quantidade;

protected:
    double preco;

public:
    Item(string nome, double preco, string marca, int quantidade)
    {
        this->nome = nome;
        this->preco = preco;
        this->marca = marca;
        this->quantidade = quantidade;
    }

public:
    string getNome()
    {
        return this->nome;
    }

public:
    void setNome(string nome)
    {
        this->nome;
    }

public:
    double getPreco()
    {
        return this->preco;
    }

public:
    void setPreco(double preco)
    {
        this->preco = preco;
    }

public:
    string getMarca()
    {
        return this->marca;
    }

public:
    void setMarca(string marca)
    {
        this->marca = marca;
    }

public:
    int getQuantidade()
    {
        return this->quantidade;
    }

public:
    void setQuantidade(int quantidade)
    {
        this->quantidade = quantidade;
    }

public:
    virtual void exibirDetalhes() = 0;
};
