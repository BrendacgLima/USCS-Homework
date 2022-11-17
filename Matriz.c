# include < stdio.h >
# include < locale.h >

int  principal ()
{
    setlocale (LC_ALL, " Português " );
    int tab[ 5 ][ 5 ],i,j;
     
    para (i= 0 ;i< 5 ;i++){
        para (j= 0 ;j< 5 ;j++){
            tab[i][j]= 0 ;
            if ((i== 0 && j== 0 ) || (i== 1 && j== 1 ) || (i== 2 && j== 2 ) || (i== 3 && j== 3 ) || (i== 4 && j== 4 ) || (i== 5 && j== 5 ))
                {
                  tab[i][j]= 1 ;      
            }
        }
    }
    
    printf ( " \n\ nMatriz formada: \n " );
    para (i= 0 ;i< 5 ;i++){
        para (j= 0 ;j< 5 ;j++){
            printf ( " %d  " , tab[i][j]);
        }
        printf ( " \n " );
    }
    retorna  0 ;
}