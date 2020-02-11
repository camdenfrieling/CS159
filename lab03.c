include<stdio.h>
include<math.h>
#define GRAVITY 9.8 //gravitational constant(meters per second squared)

int main()
{
  //variable declaration
  double lengthString = 0; //length of string(meter)
  double massBlock = 0; //mass of block(kg)
  double selection = 0; //selection number
  double selectionnumber = 0; //value from selection number(kg or meters per second)
  double massString = 0; //mass of the string(kg)
  double velocity = 0; //velocity(meters per second)

  //asks and gets values for length of string and mass of block
  printf("Enter length of string (m) -> ");
  scanf("%lf",&lengthString);
  printf("Enter mass of block maintaining tension (kg) -> ");
  scanf("%lf",&massBlock);

  //asks and gets values for selection number and value gained from selection number
  printf("\n1. Enter string mass\n2. Enter velocity of wave\n");
  printf("\nMake your selection -> ");
  scanf("%lf",&selection);
  printf("\nEnter value for selection -> ");
  scanf("%lf",&selectionnumber);

  //subtracts 1 from selection to get either 0(String mass) or 1(Velocity of wave)
  selection--;
  massString = selectionnumber * (1 - selection);
  velocity = selectionnumber * selection;

  force = massBlock * GRAVITY;

  mu1 = (force / pow(velocity,2)) * selection;
  mu2 = (massString / lengthString) * (1 - selection);
  massPerUnit = mu1 + mu2;

  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
  printf("\nMass of string:%11.1lf (kg)",massString);
  printf("\nLength of string:%9.1lf(m)",lengthString);
  printf("\nMass of block:%11.1lf",massBlock);
  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
  printf("\nForce of tension:%11.1lf",force);
  printf("\nMass per unit of length:%11.3lf,massPerUnit");
  printf("\nVelocity of wave generated:%11.1lf (kg/m)",velocity);
  printf("\nTime to travel string length:%9.3lf", time);
  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}
