/**
 * @file type_conversion.cpp
 * @author darren lefcoe (dlefcoe@gmail.com)
 * @brief type conversions c++
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

//// functions
//int type_conversion();
//
//
//
//int main()
//{
//    /* code */
//    type_conversion();
//    return 0;
//}



int type_conversion(){

    // example, convert double to int
    std::cout << "type conversion double -> int:" << std::endl;

    double x = 3.14;
    double y;

    // or this
    y = (int) x;

    std::cout << "the value of y: " << y << std::endl << std::endl;

    
    // example, convert int to a char
    std::cout << "convert an int to a char: " << std::endl;
    std::cout << (char) 100 << std::endl << std::endl;


    // with dividing ints
    std::cout << "dividing ints needs to cast to double";
    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << "the score is: " << score << "%." << std::endl;


    return 0;
}
