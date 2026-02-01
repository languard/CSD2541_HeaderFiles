// HeaderFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Assignment:
* Create the following two files: helper.h and helper.cpp
* Create the functions  IsLeftBigger and IsRightBigger. Each function will take two parameters, left and right.
* The left is always the first parameter, and right is always the second parameter
* IsLeftBigger will print "True" if left > right, and "False" if left <= right
* IsRightBigger will print "True" if right > left, and "False" if right <= left
* Create all needed overloads so the code below will run
* You are not allowed to define or declare any functions in main.cpp. Doing so will result in a zero
* All function defininitions must be in helper.cpp
* All function declarations must be in helper.h
* Do not alter any of the code in main(). Doing so will result in a zero
* The output should look like this:
* 
* False
* True
* True
* False
* True
* False
* True
* False
* 
*/

#include <iostream>


int main()
{
    //DO NOT MODIFY ANY CODE STARTING HERE    
    IsLeftBigger(5, 7);
    IsLeftBigger(7.2f, 5);
    IsLeftBigger(5.3f, 5.1f);
    IsLeftBigger(1, 5.6f);
    IsRightBigger(5, 7.5f);
    IsRightBigger(55, 7.5f);
    IsRightBigger(5, 7.5f);
    IsRightBigger(6.7f, 2.3f);

}

