# include  < stdio.h >
# include  < locale.h >

int  principal ()
{
    setlocale (LC_ALL, " Português " );
    float fixo,vendas, comissão, total;
    
    printf ( " Digite o salario do vendedor: " );
    scanf ( " %f " ,&fixo);
    printf ( " \n Digite o valor total das vendas: " );
    scanf ( " %f " ,&vendas);
    
    if (vendas<= 1500 ){
        comissão= 0,03 *vendas;
    }
    outra coisa {
        comissão= 0,05 *vendas;
    }
    
    total=fixo+comissão;
    
    printf ( " O salario total do vendedor e %.2f " ,total);
    
    retorna  0 ;
}