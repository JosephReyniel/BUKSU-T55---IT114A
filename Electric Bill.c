#include <stdio.h>
#include <stdlib.h>


int ElectricBill();

int main(){

   int ID_number,consume;

    printf("Input Customer ID: ");
    scanf("%d", &ID_number);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &consume);

    ElectricBill ( consume, ID_number );

    return 0;
}

int ElectricBill( int consume, int ID_number ){
float charge, surcharge =0, total, billex;

{
    if( consume >= 199 && consume <250)
        charge = 1.50;

       else if( consume >= 250 && consume < 450 )
        charge = 1.60;

    else if ( consume >= 450 && consume <600)
        charge = 1.85;

    else if ( consume > 600 )
        charge = 2.00;

    else
        printf("Invalid");

}

billex = consume*charge;
    if (billex > 400)
    surcharge = billex*10/100.00;
    total = billex + surcharge;
    if ( total < 100)
    surcharge = 100;

printf("\n[Electric Bill]\n");
printf("Customer ID#: %d\n", ID_number);
printf("Unit consumed: %d\n",consume);
printf("Amount charges @P %.2f per unit: %.2f\n",charge, billex);
printf("Surcharge amount: %.2f\n", surcharge);
printf("Total Customer Bill: %.2f\n", total);
}
