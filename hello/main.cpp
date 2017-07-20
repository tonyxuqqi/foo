/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: qi
 *
 * Created on July 12, 2017, 11:52 PM
 */

#include <cstdlib>
#include <stdio.h>
#include "Person.h"
using namespace std;

/*
 * 
 */

template<typename T>
void f(T& param)
{
    //param = 3;
    printf("%d\n", param);
}

int main(int argc, char** argv) {
    printf("%s\n", "hello world");
    Person person(10);
    
    printf("%d\n", person.GetAge());
    
    Color color = Color::White;
    printf("%d\n", (int)color);
    
    int x = 5;
    f(x);
    printf("%d\n", x);
    
    const int y = 5;
    f(y);
    printf("%d\n", y);
    
    const int& z = x;
    f(z);
    printf("%d\n", z);
 
    return 0;
}

