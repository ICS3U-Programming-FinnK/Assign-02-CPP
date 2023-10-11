// Created by: Finn Kitor
// Date: October 11th, 2023
// This program asks the user for the radius of the sphere and it calculates the surface area and volume of the sphere.
#include <iostream>

int main() {
    // the constant that is being used
    const float PI = 3.14159265359;

        float radius, surface_Area, volume;

    // user imputs the radius of the sphere
    std::cout << "Enter the radius of the sphere (cm): ";
    std::cin >> radius;

    // calculate the surface area and volume of the sphere
    surface_Area = 4 * PI * radius * radius;
    volume = 1.33333333333 * PI * radius * radius * radius;

    // terminal displays the surface area and volume of the sphere to the user
    std::cout << "\n";
    std::cout << "the Surface Area is = " << surface_Area << " cm" << std::endl;
    std::cout << "the Volume is = " << volume << " cm" << std::endl;
}