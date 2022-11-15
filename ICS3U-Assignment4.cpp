// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Assignment4.cpp File, Reviewing debug in C++.

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string packageMass;
    std::string packageLength;
    std::string packageWidth;
    std::string packageHeight;
    float packageMassAsFloat;
    float packageLengthAsFloat;
    float packageWidthAsFloat;
    float packageHeightAsFloat;
    float packageVolume;

    // input
    std::cout << "Input the mass of the package: ";
    std::cin >> packageMass;
    std::cout << "Input the length of the package: ";
    std::cin >> packageLength;
    std::cout << "Input the width of the package: ";
    std::cin >> packageWidth;
    std::cout << "Input the height of the package: ";
    std::cin >> packageHeight;

    // process and output
    std::cout << "\n";
    try {
        packageMassAsFloat = std::stof(packageMass);
        packageLengthAsFloat = std::stof(packageLength);
        packageWidthAsFloat = std::stof(packageWidth);
        packageHeightAsFloat = std::stof(packageHeight);
        packageVolume = (
            packageLengthAsFloat * packageWidthAsFloat * packageHeightAsFloat);
         if (packageMassAsFloat > 27 && packageVolume > 10000) {
             std::cout << "The package is not acceptable,"
                       << " because it's either larger than 10,000 cm³"
                       << " in volume, or heavier than 27 kg.";
        } else if (packageMassAsFloat <= 0 || packageVolume <= 0) {
            std::cout << "Please input a valid number.";
        } else {
            std::cout << "Your package is acceptable.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input,"
                  << " please try again following the requirements";
    }

    std::cout << "\n\nDone.\n";
}
