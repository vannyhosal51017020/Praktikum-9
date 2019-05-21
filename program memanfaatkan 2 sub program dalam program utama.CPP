#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

double getRadius();
double square(double);

int main ()
{
   const double PI = 3.14159;
   double rad;
//cout<< fixed << showpoint << setprecision(2);
   cout << " Program ini untuk menghitung luas lingkaran.\n";
   rad = getRadius();
   cout << "Luas adalah: "<< PI * square(rad) << endl;
   getch();
   return 0;
}

double getRadius()
{
   double radius;
   cout <<"masukkan jari jari lingkaran: ";
   cin >> radius;
   return radius;
}

double square(double number)
{
   return number * number;
}