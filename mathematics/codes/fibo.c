#include<stdio.h>
#include<string.h>
#include<math.h>

void fibo(int s,int a[s]);

int main()
{

    int boyut;
    scanf("%d",&boyut);
    int dizi[boyut];

    fibo(boyut,dizi);

    return 0;
}

void fibo(int s,int a[s])
{

    a[0]=0;
    a[1]=1;

    for(int i=1; i<=s; i++)
    {
        a[i+1] = a[i] + a[i-1];
    }
    for(int i=0; i<s; i++)
    {
        printf("%d ",a[i]);
    }

}
