//Chamado p1 que apontaria para uma variável do tipo inteiro;
    int n;
    int *p1 = &n;


//Chamado p2 que apontaria para uma variável do tipo float;
    float f;
    float *p2 = &f;


//Chamado p3 que apontaria para uma variável do tipo char;
    char c;
    char *p3 = &c;


//Chamado p4 que apontaria para uma struct chamada Ponto;
    typedef struct
    {
        
    } Ponto;

    int main(){
        Ponto ponto;
        Ponto *p4 = &ponto;
    }
    