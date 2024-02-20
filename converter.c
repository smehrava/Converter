/*this program does some simple conversions
student name = Sara Mehravar
student id = 251185394
*/
#include <stdio.h>

int main()
{
// what the person writes goes to integer
int integer;

//using do for loops
do{
//printing all the things user needs to see before making a decision
printf("\n• 1 for conversion between Kilograms and Pounds (1 kilogram == 2.20462 pounds)");
printf("\n• 2 for conversion between Hectares and Acres (1 hectare == 2.47105 acres)");
printf("\n• 3 for conversion between Litres and Gallons (1 litre == 0.264172 gallons)");
printf("\n• 4 for conversion between Kilometre and Mile (1 kilometre == 0.621371 miles)");
printf("\n• 5 for quit");
printf("{any other integer} for prompting the user to try again");
printf("\nEnter your choice: ");
scanf("%d",&integer);


switch(integer)
{
// if user types 1
case 1:
// now they have to pick K or P
printf("K for conversion from Kilograms to Pounds \nP for conversion from Pounds to Kilograms: ");
char KorP;
scanf(" %c",&KorP);
//if k 
if(KorP == 'K')
{
float kilogram;
printf("Please enter the kilogram value you want to convert to pounds: ");
scanf("%f",&kilogram);
//converting kilogram to pounds
float kToPounds = kilogram * 2.20462 ;
printf("your conversion is : %f Kilogram is equal to %f pounds.\n\n",kilogram,kToPounds);
}
//if p:
else if(KorP =='P')
{
float pounds;
printf("Please enter the pounds value you want to convert to Kilogram: ");
scanf("%f",&pounds);
// converting pounds to kilogram
float PtoKilogram = pounds / 2.20462 ;
printf("your conversion is : %f pounds is equal to %f Kilogram.\n\n",pounds,PtoKilogram);
}
else
{
// if neither p nor k have been written, input is not valid
printf("Invalid input");
}

break;
//if input is 2:
case 2:

//user can choose either H or A. otherwise the message (input not valid) will show up
printf("H for conversion from Hectares to Acres \nA for conversion from Acres to Hectares: ");
char HorA;
scanf(" %c",&HorA);
//if H:
if(HorA =='H')
{
float Hectares;
printf("Please enter the hectares value which you want to convert to Acres: ");
scanf("%f",&Hectares);
//converting hectare to acres:
float HectareToAcres = Hectares * 2.47105 ;
printf("your conversion: %f hectares is equal to %f acres.\n\n",Hectares,HectareToAcres);
}
//if a:
else if(HorA=='A')
{
float Acres;
printf("Please enter the Acres value which you want to convert to Hectare: ");
scanf("%f",&Acres);
//converting Acres to Hectares:
float AtoHectore = Acres / 2.47105;
printf("your conversion is : %f Acres is equal to %f Hectare.\n\n",Acres,AtoHectore);
}
else
{
//neither H nor A:
printf("Invalid input");
}

break;
//if input is 3:
case 3:
//user can choose either L or G:
printf("L for conversion from Litres to Gallons\nG for conversion from Gallons to Litres: ");
char LorG;
scanf(" %c",&LorG);
//L selected:
if(LorG=='L')
{
float Litre;
printf("Please enter litre value you want to convert to Gallon: ");
scanf("%f",&Litre);
//converting litre to gallon:
float LToGallon = Litre * 0.264172;
printf("your conversion is : %f litre is equal to %f Gallons.\n\n",Litre,LToGallon);
}
//user has chosen G:
else if(LorG=='G')
{
float Gallon;
printf("Please enter Gallon value you want to convert to litre: ");
scanf("%f",&Gallon);
//converting gallon to litre
float GallonToL = Gallon / 0.264172;
printf("your conversion is : %f Gallons is equal to %f Litre.\n\n",Gallon,GallonToL);
}
//neither G nor L selected:
else
{
printf("Invalid input");
}

break; 
//if input is 4:
case 4:
//either K or M can be selected:
printf("K for conversion from Kilometre to Mile\nM for conversion from Mile to Kilometre: ");
char KorM;
scanf(" %c",&KorM);
//if k selected:
if(KorM=='K')
{
float kilometre;
printf("Please enter kilometre value which you want to convert to mile: ");
scanf("%f",&kilometre);
//converting kilometre to mile:
float KMtoMiles = kilometre * 0.621371;
printf("your conversion is : %f kilometre is equal to %f miles.\n\n",kilometre,KMtoMiles);
}
//if M selected:
else if(KorM=='M')
{
float miles;
printf("Please enter miles value you want to convert to kilometre: ");
scanf("%f",& miles);
//converting miles to kilometre
float MilesToKM = miles / 0.621371;

printf("your conversion is : %f miles is equal to %f kilometre.\n\n",miles,MilesToKM);
}
//if neither K or M selected:
else
{
printf("Invalid input");
}
break;
//input 5 means quit the program
case 5:
exit(0);
break;

}
//continue of do
//while input is not 5, this program will run
}while(integer!=5);
return 0;
}
