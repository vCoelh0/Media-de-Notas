#include<stdio.h>
#include<math.h>

float A1, A2, A3,media= 0;

main ()
{

printf ("Digite a nota da A1:  ");
scanf ("%f",&A1);


printf ("\nDigite a nota da A2:  ");
scanf ("%f",&A2);


printf ("\nDigite a nota da A3:  ");
scanf ("%f",&A3);

media=(A1+A2+A3)/3;

printf("A media e %.2f ",media);
	
}
