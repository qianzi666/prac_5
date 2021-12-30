#include<iostream>
using namespace std;

void ordenar(int * p , int tam)
{
    int t;
    int v;

    for (int i = 0; i < tam; i++)
    {
        if (p[i]<p[0])
        {
            t=p[0];
            p[0]=p[i];
            p[i]=t;
        }
        if (p[2]<p[1])
        {
            v=p[1];
            p[1]=p[2];
            p[2]=v;
        }
    }
}
int main()
{
    int lista[3]={23,31,20};
    ordenar(&lista[0],3);
    for (int i = 0; i <=2  ; i++)
    {
        cout<<lista[i]<<endl;
    }
}