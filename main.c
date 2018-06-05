#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int s[2][10],o[10],n,i,h1,m1,h2,m2,hour;
void assortment()
{
    int finish,aux,i;
    do{
            finish=1;
            for(i=1;i<=n-1;i++)
                if(s[1][o[i]]>s[1][o[i+1]]){

                aux=o[i];
                o[i]=o[i+1];
                o[i+1]=aux;
                finish=0;
            }
        }
    while(!finish);
}
int main(){

    printf("n = ");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
         o[i]=i;
         printf (" Start time for task %d ( hh mm) = ",i) ;
         scanf ("%d",&h1);
         scanf ("%d",&m1);
         s[0][i]=h1*60+m1;
         printf (" End time for task %d ( hh mm) = ",i) ;
         scanf ("%d",&h2);
         scanf("%d",&m2);
         s[1][i]=h2*60+m2;
     }
     assortment();
     printf (" The order of the tasks is \n %d \n" , o[1] );
     hour=s[1][o[1]];
     for(i=2;i<=n;i++)
        if(s[1][o[1]]>=hour){

         printf ("%d \n ", o[i]);
         hour=s[1][o[i]];

     }

}
