# include  < stdio.h >

int  fibonacci ( int n){
    int t1= 0 , t2= 1 , prox,i;
    para (i= 0 ;i<=n;i++){
        printf ( " %i  " , t1);
        próximo = t1+t2;
        t1=t2;
        t2=prox;
    }
    retorno próximo;
}


int  principal ()
{
    int aux, n;
    scanf ( " %d " ,&n);
    aux= fibonacci (n);
    printf ( " %d " ,aux);
    retorna  0 ;
}