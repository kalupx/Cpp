#ifndef EXCESSAO_H
#define EXCESSAO_H

class ExcecaoSoma{
    private:
        int _n;
        float _med;
        int _ctr;
    public:
        //construtor
        ExcecaoSoma();

        //funcoes
        int somaValores(int x);
        float get_med();
        int get_ctr();
        int get_n();
};

#endif