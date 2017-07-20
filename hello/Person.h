/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: qi
 *
 * Created on July 13, 2017, 3:44 PM
 */

#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    Person();
    Person(int age);
    Person(const Person& orig);
    virtual ~Person();
    int GetAge() {return this->age;}
    
private:
    int age;
};

enum class Color
{
    Black,
    Red,
    White
};

#endif /* PERSON_H */

