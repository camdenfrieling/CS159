
/***************************************************************************
*
*  Programmers and Purdue Email Addresses:
*  1. login1@purdue.edu
*  2. login2@purdue.edu
*  3. login3@purdue.edu (delete line if no third partner)
*
*  Lab #: 03
*
*  Academic Integrity Statement:
*
*  We have not used source code obtained from any other unauthorized source,
*  either modified or unmodified.  Neither have we provided access to our code
*  to another. The effort we are submitting is our own original work.
*
*  Day, Time, Location of Lab: Tuesday, 9:30am , SC 189
*
*  Program Description:
*
***************************************************************************/

#include<stdio.h>
#include<math.h>
#define GRAVITY 9.8

int main()
{
  //variable declaration
  double massStr = 0; //mass of the string(kg)
  double lenStr = 0; //length of the string(meter)
  double massBlock = 0; //mass of the block(kg)
  double force = 0; //force the block applies(N)
  double mspul = 0; //mass of string per unit length(kg/m)
  double mspulOne = 0;
  double mspulTwo = 0;
  double velocity = 0; //velocity of the wave generated(m/s)
  double time = 0; //time it takes for the wave to travel the length of the pulley(s)
  double selection = 0; //selection number
  double selectionnumber = 0; //value of selection number
  double max = 0;


  //allows user to enter values for length of string and mass of block
  printf("Enter length of string (m) -> ");
  scanf("%lf",&lenStr);
  printf("Enter mass of block maintaining tension (kg) -> ");
  scanf("%lf",&massBlock);

  printf("\n1. Enter string mass\n2. Enter velocity of wave");

  printf("\n\nMake your selection -> ");
  scanf("%lf",&selection);
  printf("Enter value for selection -> ");
  scanf("%lf",&selectionnumber);

  selection--;
  massStr = selectionnumber;
  velocity = selectionnumber;

  force = massBlock *  GRAVITY;

  mspulOne = (force / pow(velocity,2)) * selection;
  mspulTwo = (massStr / lenStr) * (1 - selection);
  mspulOne++;
  mspulTwo++;

  max = mspulOne / mspulTwo * mspulOne + mspulTwo / mspulOne * mspulTwo;
  max--;
  printf("\nmspulOne: %.3lf \nmspulTwo: %.3lf", mspulOne, mspulTwo);
  printf("max %.3lf", max);

  massStr = lenStr * max;
  velocity = sqrt(force / max);


  printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
  printf("\nMass of string:%11.1lf (kg)",massStr);
  printf("\nLength of string:%9.1lf  (m)",lenStr);
  printf("\nMass of block:%11.1lf",massBlock);
  printf("\nForce of tension:%11.1lf",force);
  printf("\nMass per unit of length:%11.3lf",max);
  printf("\nVelocity of wave generated:%11.1lf (kg/m)",velocity);
  printf("\nTime to travel string length:%9.3lf", time);
}



