
/***************************************************************************
*
*  Programmers and Purdue Email Addresses:
*  1. chen3124@purdue.edu
*  2. login2@purdue.edu
*  3. login3@purdue.edu (delete line if no third partner)
*
*  Lab #: 1
*
*  Academic Integrity Statement:
*
*  We have not used source code obtained from any other unauthorized source,
*  either modified or unmodified.  Neither have we provided access to our code
*  to another. The effort we are submitting is our own original work.
*
*  Day, Time, Location of Lab: 1/21/2020, 10:31 AM, SC 189
*
*  Program Description: Finds the perpendicular bisector from two ordered pairs
*
***************************************************************************/

#include<stdio.h>

int main()
{
  float x1;
  float y1;
  float x2;
  float y2;

  printf("Enter the first x coordinate ->");
  scanf("%f",&x1);
  printf("Enter the first y coordinate ->");
  scanf("%f",&y1);
  printf("Enter the second x coordinate ->");
  scanf("%f",&x2);
  printf("Enter the second y coordinate ->");
  scanf("%f",&y2);

  printf("Original endpoints: [%.1f, %.1f] and [%.1f, %.1f]", x1, y1, x2, y2);

  float midpointx = (x1 + x2) / 2;
  float midpointy = (y1 + y2) / 2;
  float slope = (y2 - y1) / (x2 - x1);
  slope = -1 / slope;
  float b = midpointy - slope * midpointx;

  printf("\nEquation of the perpendicular bisector: y = %.2fx + %.2f\n", slope, b);
  return(0);

}
