#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void thermostat()
{
float x;
printf("The optimum temperature is set to 30 degree celsius.\n The current temperature in celsius is:");
scanf("%f",&x);
if(x>30)
{
x=x-30;
printf("The temperature decrease is %f degree celsius",x);
}
else if(x<30)
{
x=30-x;
printf("The temperature increase is %f degree celsius",x);
}
getch();
return;
}

void window_blinds()
{
int x;
printf("Do you want to close the blinds? \nfor YES type 1 and for NO type 2.\n");
scanf("%d",&x);
if(x==1)
{
printf("The blinds are closed.");
}
else if(x==2)
{
printf("The blinds are open.");
}
getch();
return;
}

void heater()
{
int x;
printf("How do you want the water to be heated? For LUKEWARM type 1 \t for WARM type 2 \t for HOT type 3 \n");
scanf("%d",&x);
if(x==1)
{
printf(" Water will be lukewarm in 10 minutes");
}
else if(x==3)
{
printf("Water will be hot in 10 minutes");
}
else if(x==2)
{
printf("Water will be warm in 10 minutes");
}
getch();
return;
}

void smart_pot()
{
float x;
char y[10];
printf("Pots should be watered automatically at 6 AM and 6 PM. \n What time is it? \n (12 hrs format and without AM or PM.\n Also note that the time will be represented at hrs.mins.\n For example 11.250000 for 11 hours and 25 minutes.) \n");
scanf("%f",&x);
printf("Is it AM or PM? \n");
scanf("%s",&y);
printf("The time is %f %s \n",x,y);
if(x==6.000000&&y=="AM")
{
printf("Pots are watered \n");
}
else if(x==6.000000&&y=="PM")
{
printf("The pots are watered \n");
}
else
{
printf("Pots aren't watered now.\n Pots will be watered at 6 AM and 6 PM only");
}
getch();
return;
}

void dimmer()
{
int x;
printf("The lights are dimmed after 11 PM in the night. \n Is it 11 PM in the night yet?\n type 1 for YES.\n Type 2 for NO. \n");
scanf("%d",&x);
if(x==1)
{
printf("The lights are dimmed.");
}
else if(x==2)
{
printf("The lights are not dimmed.");
}
getch();
return;
}


void wifi()
{
float x;
printf("The wifi limit is set upto 3 GB per day. \n The data used in GB is: ");
scanf("%f",&x);
if(x>=3)
{
printf("The wifi will be turned off as the limit is exceeded.");
}
else
{
x=3-x;
printf("You still have %f GB left.",x);
}
getch();
return;
}

void fridge()
{
printf("The temperature in the freezer should be -18 degree celsius. \n The temperature in the refridgerator should be at or more than 4 degree celcius. \n ");
printf("If the refridgerator is violating these temperatures then it is switched off immediately.");
getch();
return;
}

void dish_washer()
{
int x;
printf("How many dishes are to be washed? \n");
scanf("%d",&x);
printf("%d dishes will be washed by the dishwasher in 30 minutes.",x);
getch();
return;
}

int main()
{
int ch;
int x;
int y;
printf("ENTER LOGIN \n");
scanf("%d",&x);
printf("ENTER PASSWORD \n");
scanf("%d",&y);
if(x==8790)
{
if(y==9676)
{
printf("You have logged in.");
while(1)
{
printf("\n\t\t MAIN MENU:");
printf("\n Press 1 for THERMOSTAT.");
printf("\n Press 2 for WINDOW BLINDS.");
printf("\n Press 3 for WATER HEATER. ");
printf("\n Press 4 for SMART POTS.");
printf("\n Press 5 for LIGHT DIMMER.");
printf("\n Press 6 for WIFI CONTROL.");
printf("\n Press 7 for  REFRIDGERATOR SETTINGS.");
printf("\n Press 8 for DISH WASHER.\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
thermostat();
break;
case 2:
window_blinds();
break;
case 3:
heater();
break;
case 4:
smart_pot();
break;
case 5:
dimmer();
break;
case 6:
wifi();
break;
case 7:
fridge();
break;
case 8:
dish_washer();
break;
case 9:
printf("\n\n\t THANK YOU FOR USING THE SOFTWARE BY: \n\n\t KEERTHI \t AND \t VYSHNAVI \n");
getch();
exit(0);
default:
printf(" \n YOU HAVE ENTERED WRONG CHOICE");
printf(" \n PRESS ANY KEY TO TRY AGAIN");
getch();
break;
}
}
}
}
else
{
printf("\t Authentication failed.\n");
exit(0);
}
}

