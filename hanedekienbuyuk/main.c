#include <stdio.h>
#include <stdlib.h>
void byk(int *);
int main()
{

  int N;
  int *pnt=&N;
  printf("Lutfen sayi giriniz=");
  scanf("%d",&N);
  byk(&N);


    return 0;
}
     int rem;
    int max=0;
    void byk(int *pnt){
    while(*pnt>0){
        rem= *pnt % 10;
        if(rem>max){max = rem;}
        *pnt /= 10;
    }
    printf("Girdiginiz sayinin haneleri arasindan en buyuk eleman=%d",max);

    }
