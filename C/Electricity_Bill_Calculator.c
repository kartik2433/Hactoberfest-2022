//This Is To calculate proper Electricity Billl.
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,Fix;
    float U,R1,R2,R3,R4,F,E; 
    clrscr();
    Fix=30;
    F=1.90;
    E=0.15;
    // All The Charges As Per Your Bill Instruction Given At Back Side 
    // Bill Charges Varies For Limis Of Total Used Units
    // U- Unit Used In One Month 
    // x- The Used Total Units Of Electricity in 2 Months
    // Fix- The Fix Amount As Per Home Power Load
    // F- The Fuel Charge Per Unit
    // E- Electric Duty Per Unit
    // R1- Electricity Charge
    // R2- Fuel Charge
    // R3- Total Electric Duty
    // R4- Total Value Of Your Electricity Bill
    printf("Used Unit Of Electricity");
    scanf("%d",&x);
    U=x/2;
    if (U<=50)
    {
        R1=3.05*U;
        R2=x*F;
        R3=(Fix+R1+R2)*E;
        R4=(Fix+R1+R2+R3);
        printf("Your Electricity Bill Amount Is %f",R4);
    }
    else if (U>50&U<100)
    {
        R1=2*((3.50*(U-50))+152.5);
        R2=x*F;
        R3=(Fix+R1+R2)*E;
        R4=(Fix+R1+R2+R3);
        printf("Your Electricity Bill Amount Is %f",R4);
    }
    else if (U>100&U<250)
    {
        R1=2*((4.15*(U-100))+327.5);
        R2=x*F;
        R3=(Fix+R1+R2)*E;
        R4=(Fix+R1+R2+R3);
        printf("Your Electricity Bill Amount Is %f",R4);
    }
    getch();
}
