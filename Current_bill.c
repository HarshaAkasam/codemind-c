#include<stdio.h>
int main()
{
    int u;
    float cu;
    scanf("%d",&u);
    if(u<200)
    cu=1.20;
    else if(u>=200 && u<400)
    cu=1.50;
    else if(u>400 && u<600)
    cu=1.80;
    else if(u>=600)
    cu=2.00;
    float bill,charge;
    bill=cu*u;
    charge=bill*0.15;
    if(bill>400)
    {
        if(charge<100)
        charge=100;
        bill=charge+bill;
    }
    else
    {
        if(charge<100)
        charge=100;
        bill=bill+charge;
    }
    printf("%.2f",bill);
}