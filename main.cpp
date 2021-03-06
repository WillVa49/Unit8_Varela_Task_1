//A program to practice passing a struct by pointer (*)
#include <iostream>
using namespace std;
//Declaration of the struct 
struct car
{
  string Make;
  string Model;
  int Year;
  string Color;
};
//Function definition declared abive int main()
void printCar(car *c)
{
  cout << "\nCar details: " << endl;
  cout << "Make - " << c->Make << endl;
  cout << "Model - " << c->Model << endl;
  cout << "Year - " << c->Year << endl;
  //Set the color variable based upon the year, and print it
  if(c->Year <= 2010)
  {
    c->Color = "Red";
  }
  else if(c->Year > 2010)
  {
    c->Color = "Green";
  }
  //Print the color to the screen
  cout << "Color - " << c->Color << endl;
  
}
int main() 
{
  //Declare an instance of the struct
  car car1;
  car1.Make = "Dodge";
  car1.Model = "Challenger";
  car1.Year = 2016;

  car car2 = {"GMC", "Yukon", 1975};

  car car3 = {"Toyota", "Avalon", 2003};

  //Print each car
  printCar(&car1);
  printCar(&car2);
  printCar(&car3);
  return 0;
}