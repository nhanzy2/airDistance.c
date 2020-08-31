/**
 * Author: Nathan Hanzy, Blake Sudbeck
 * Date: 2020/08/27
 *
 * A program to calculate distance between two points
 * when given 2 different longitudes and latitudes
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>

 int main (int argc, char **argv){

 double Dist;
 double Lat1;
 double Lat2;
 double Lon1;
 double Lon2;
 double pi = 4.0 * atan(1.0);

 printf("Enter Lat1:");
 scanf("%lf", &Lat1);

 printf("Enter Lon1:");
 scanf("%lf", &Lon1);

 printf("Enter Lat2:");
 scanf("%lf", &Lat2);

 printf("Enter Lon2:");
 scanf("%lf", &Lon2);
  
  Lat1 = Lat1 / 180/pi;
  Lat2 = Lat2 / 180/pi;
  Lon1 = Lon1 / 180/pi;
  Lon2 = Lon2 / 180/pi;
 
  
Dist = 6371 * acos(sin(Lat1)*sin(Lat2)) + cos(Lat1) * cos(Lat2) * cos(Lon2-Lon1);
 
printf("%lf Dist");



 }
