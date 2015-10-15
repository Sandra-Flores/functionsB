//Name: Sandra Flores
//Date: Oct. 13, 2015
//Description: Programing Practice - functions B. call-By-functions

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

//convert feet to inches
double feetToInches(double val);
void feetToInchez(double& val);
//calculates area
double computeRectangle(double valA, double valB);
void computerArea(double valA, double valB, double& valC);
//calculates area, perimeter
void computerArea(double valA, double valB, double& valArea, double& valPerimeter);
//returns the average, sum of the four parameters that are passed to it
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
//the calculates area, perimeter of a circle
void calcAreaPerimeter(double radius, double& area, double& perimeter);
//calculates area of a rectangle
double calcArea(double length, double width);

int main()
{
   //test cases
    int val = 5;
    int val1 = 4;
    int val2 = 2;
    int val3 = 1;
    double num , num2, num3;
    
    assert(feetToInches(12) == 144);
    assert(feetToInches(9) == 108);
    
    assert(computeRectangle(12, 10) == 120);
    assert(computeRectangle(12, 12) == 144);
    
    feetToInchez(num);
    feetToInchez(num2);
    
    computerArea(val, val1, num);
    
    computerArea(val1, val, num2, num3);
    
    stats(val3, val, val1, val2, num2, num);
    
    calcAreaPerimeter(val, num2, num3);
    
    cout << "Ran to here :D" << endl;
    
    return 0;
}

double feetToInches(double val)
{
    int INCHESPERFEET = 12;
    double inches;
    inches = val * 12;
    
    return inches;
}

void feetToInchez(double& val)
{
    int INCHESPERFEET = 12;
    double inches;
    inches = val * 12;
   
    return;
}

double computeRectangle(double valA, double valB)
{
    double ans;
    ans = valA * valB;
    
    return ans;
}
void computerArea(double valA, double valB, double& valC)
{
    valC = valA * valB;
    
    return;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (2 * valA) + (2 * valB);
    
    cout << "Expected Area: " << (valA * valB) << endl;
    cout << "Actual Area: "<< valArea << endl << endl;
    
    cout << "Expected Perimeters: " << valPerimeter << endl;
    cout << "Actual Perimeter: " << valPerimeter << endl << endl;
    
    return;
}

void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD;
    valF = valE/4;
    
    cout << "Expected Average: " << 3 << endl;
    cout << "Actual Average: "<< valF << endl << endl;
    
    cout << "Expected Sum: " << 12 << endl;
    cout << "Actual Sum: " << valE << endl << endl;
    
    return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    double PI = 3.14159;
    area = PI * pow(radius, 2);
    perimeter = 2 * PI * radius;
    
    cout << "Expected Area: " << 78.53 << endl;
    cout << "Actual Area: " << area << endl << endl;
    
    cout << "Expected Perimeter: " << 31.41 << endl;
    cout << "Actual Perimeter: " << perimeter << endl << endl;
    
    return;
}

double calcArea(double length, double width)
{
    double ans;
    ans = length * width;
    
    return ans;
}
