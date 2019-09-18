// Copyright (c) 2019 myself All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is area periemter circle

#include <iostream>

int main() {
    // This will calculate area and perimeter of a circle
    int side;
    int side2;
    int area;
    int perimeter;

    // input
    std::cout << "What is the side dimension: " << std::endl;
    std::cin >> side;
    std::cout << "What is the other side dimension: " << std::endl;
    std::cin >> side2;

    // process
    area = side * side2;
    perimeter = 2 * (side + side2);

    // output
    std::cout << "The area is " << area << " units squared." << std::endl;
    std::cout << "The perimeter is " << perimeter << " units."<< std::endl;
}
