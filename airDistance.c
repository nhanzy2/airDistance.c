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

 double Lat1,Lat2,Lon1,Lon2,Dist;
 int R = 6371;

 printf("enter first latitude and longitude: ");
 scanf("%lf%lf",&Lat1,&Lon1);
 printf("enter the second latitude and longitude: ");
 scanf("%lf%lf",&Lat2,&Lon2);
  
 Lat1 = Lat1 / 180*M_PI;
 Lon1 = Lon1 / 180*M_PI;
 Lat2 = Lat2 / 180*M_PI;
 Lon2 = Lon2 / 180*M_PI;

 Dist = acos(sin(Lat1)*sin(Lat2)+cos(Lat1)*cos(Lat2)*cos(Lon2-Lon1)) * R;
 
printf("%lf",Dist);

return 0;
 }
