#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");



/* ################## Örnek Kullanim-1 ##################*/

    int i = 0;
    for(;i<10;i++) {
        printf("%d Yapilacak İslemler...\n",i+1);
    }


/*

    int i;

    for(i=0;i<10;i++) {

        if (i%2 == 0){

            printf("%d çift sayýdýr...\n",i);

            continue;

            printf("******************************\n");

        }

        else if (i%2 != 0){

            printf("%d tek sayýdýr...\n",i);

            printf("******************************\n");

        }

        printf("########################################\n");

    }


*/



    return 0;
}
