
/***************************************************************************
*
*  Programmers and Purdue Email Addresses:
*  1. login1@purdue.edu
*  2. login2@purdue.edu
*  3. login3@purdue.edu (delete line if no third partner)
*
*  Lab #:
*
*  Academic Integrity Statement:
*
*  We have not used source code obtained from any other unauthorized source,
*  either modified or unmodified.  Neither have we provided access to our code
*  to another. The effort we are submitting is our own original work.
*
*  Day, Time, Location of Lab:
*
*  Program Description:
*
***************************************************************************/
#include<stdio.h>
#include<math.h>
#define COULCON 8.99 * pow(10,9)

//function declaration
double chargePrompt(int index);
int coordPrompt(char loc , int pointNum);
double coulombForce(double rad, double char1 , double char2);
double forceAngle(double forceY, double forceX);
double originForce(double fX, double fY);

int main()
{
  //Initialization
  double charge1;
  double charge2;
  double charge3;
  double yCoord;
  double xCoord;
  double force1;
  double force2;
  double force3;
  double forceAng;

  //Execution Statements
  charge1 = chargePrompt(1);
  charge2 = chargePrompt(2);
  charge3 = chargePrompt(3);

  yCoord = coordPrompt('Y', 2);
  xCoord = coordPrompt('X' , 3);

  force2 = coulombForce(yCoord, charge1, charge2);
  force3 = coulombForce(xCoord, charge1, charge3);
  force1 = originForce(force3 , force2) / pow(10,8);

  forceAng = forceAngle(force2, force3);

  //print statements
  printf("Magnitude of the resultant force on the charge at the origin: %.1lf N\n",force1);
  printf("Force vector angle with the x-ais: %.1lf degrees\n",forceAng);
  return(0);
}

/***************************************************************************
*
*  Function Information
*
*  Name of Function: chargePrompt
*
*  Function Return Type: Double
*
*  Parameters (list data type, name, and comment one per line):
*    1. int i - tells which charge we are assigning.
*    2.
*    3.
*
*  Function Description: A function that prompts the user for the charge of each different point
*
***************************************************************************/
double chargePrompt(int index )
{
  //local declaration
 double retVal;
  // Execution Statements
  printf("Enter charge [micro-Coulomb] of point #%d -> ",index);
  scanf("%lf",&retVal);
  return(retVal);
}


/***************************************************************************
*
*  Function Information
*
*  Name of Function: coordPrompt
*
*  Function Return Type: integer
*
*  Parameters (list data type, name, and comment one per line):
*    1. char h - takes the letter describing the axis
*    2. int pointNum - takes the number of the point to describe the location on the axis
*    3.
*
*  Function Description: A function that takes the letter of the axis and the point number and uses these to prompt the user to input the location in cm
*
***************************************************************************/

int coordPrompt(char loc ,int  pointNum)
{
  //local declarations
  int placeHold;
  //executable statements
  printf("Enter %c coordinate [cm] of point #%d -> ",loc,pointNum);
  scanf("%d",&placeHold);
  return(placeHold);
}


/***************************************************************************
*
*  Function Information
*
*  Name of Function: coulombForce
*
*  Function Return Type: double
*
*  Parameters (list data type, name, and comment one per line):
*    1. double rad - distance between particles (cm)
*    2. double char1 - value of charge 1 (coulombs)
*    3. double char2 - value of charge 2 (coulombs)
*    4.
*  Function Description: A function that takes the charge of two different particles and the distance between them and finds the force between them
*
***************************************************************************/
double coulombForce(double rad ,double  char1 ,double char2)
{
  //local declaration
  double elec;
  //execution
    elec = COULCON *((char1 * char2) / pow(rad,2));
    return(elec);
}

/***************************************************************************
*
*  Function Information
*
*  Name of Function: forceAngle
*
*  Function Return Type: double
*
*  Parameters (list data type, name, and comment one per line):
*    1.double forceY - the force in the y direction
*    2.double forceX - the force in the x direction
*    3.
*
*  Function Description: A function that finds the angle of the total force on the origin.
*
***************************************************************************/
double forceAngle(double forceY, double forceX)
{
  //local declaration
  double theta;
  //executables
  theta = atan(forceY / forceX) * 180 / M_PI;
  return theta;
}

/***************************************************************************
*
*  Function Information
*
*  Name of Function: originForce
*
*  Function Return Type: double
*
*  Parameters (list data type, name, and comment one per line):
*    1. double fX - force in x direction
*    2. double fY - force in y direction
*    3.
*
*  Function Description: a function that finds the magnitude fo the force on the origin based on the force of its components
*
***************************************************************************/
double originForce(double fX, double fY)
{
  //local declarations
  double mag;
  //executions
  mag = sqrt(pow(fX,2)+pow(fY,2));
  return(mag);
}


