#include <iostream>
#include <cmath>

using namespace std;

double calculateCircumference(double diameter) {
    return pi * diameter;
}

double calculateSurfaceArea(double radius) {
    const double pi = 3.14159;
    return 4 * pi * pow(radius, 2);
}

double calculateMean(double x1, double x2, double x3, double x4) {
    return (x1 + x2 + x3 + x4) / 4;
}

double calculateStandardDeviation(double x1, double x2, double x3, double x4) {
    double mean = calculateMean(x1, x2, x3, x4);
    double sumSquaredDiff = pow(x1 - mean, 2) + pow(x2 - mean, 2) + pow(x3 - mean, 2) + pow(x4 - mean, 2);
    return sqrt(sumSquaredDiff / 4);
}

int main() {
    // Part 1: 
    double earthDiameter = 8000.0;
    double earthCircumference = calculateCircumference(earthDiameter);
    cout << "Earth's Circumference: " << earthCircumference << " miles" << endl;

    double sunDiameter = 100 * earthDiameter;
    double sunCircumference = calculateCircumference(sunDiameter);
    cout << "Sun's Circumference: " << sunCircumference << " miles" << endl;

    double distanceBetweenTimeZones = 1000.0;
    double hoursInDay = earthCircumference / distanceBetweenTimeZones;
    cout << "Number of Hours in a Day: " << hoursInDay << " hours" << endl;

    double earthRadius = earthDiameter / 2;
    double earthSurfaceArea = calculateSurfaceArea(earthRadius);
    cout << "Earth's Surface Area: " << earthSurfaceArea << " square miles" << endl;

    double sunRadius = sunDiameter / 2;
    double sunSurfaceArea = calculateSurfaceArea(sunRadius);
    cout << "Sun's Surface Area: " << sunSurfaceArea << " square miles" << endl;

    double pakistanSurfaceArea = 300000.0;
    double earthCopies = earthSurfaceArea / pakistanSurfaceArea;
    cout << "Number of Pakistan copies to cover Earth: " << earthCopies << endl;

    // Part 2:  
    double x1 = 1.0;
    double x2 = 2.0;
    double x3 = 3.0;
    double x4 = 4.0;

    double meanValue = calculateMean(x1, x2, x3, x4);
    double stdDeviation = calculateStandardDeviation(x1, x2, x3, x4);

    cout << "\nMean (Average): " << meanValue << endl;
    cout << "Standard Deviation: " << stdDeviation << endl;

    return 0;
}
