#include <stdio.h>
#include <stdlib.h>
void print_vetor(int v[],int N){
   int c1;
   for(c1=0;c1<N;c1++){
    printf("%d ",v[c1]);
   }
   printf("\n");
}
int uma_rotacao_esquerda(int v[],int N,int R,int d){
    int inicial = v [0];
    int c;
    for(c=0;c<N;c++){
        v[c]= v[c+1];
         }
    return v[N-1]= inicial;

}
int uma_rotacao_direita(int v[],int N,int R,int d){
    int inicial = v[0];
    int c;
    for(c=0;c<N;c++){
        v[c]= v[c+1];
    }
    return v[N+1]=inicial;

}

int vetor(int v[],int N,int R, int d){
    int c;

    for(c=0;c<R;c++){
        if(d==1){
           uma_rotacao_esquerda(v,N,R,d);
        }
        else{
            uma_rotacao_direita(v,N,R,d);
        }

    }

}
int main(){
    int N=5;
    int R;
    int d;
    int v[]={1,2,3,4,5};

    printf("Digite a direcao e o numero de rotacoes do vetor:");
    scanf("%d %d",&d,&R);

    vetor(v,N,R,d);

    print_vetor(v,N);
    return 0;


}
