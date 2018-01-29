/***************************************************************************************************************************************************************************************
 * ** Author: Stephanie Ayala
 * ** Date: 01-26-2018
 * ** Description: Person.hpp defines the interface of the Person class
 * *********************************************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using std::string;

class Person
{
    private:
    	string name;
    	double age;
    public:
    	Person();
    	Person(string, int);
    	string getName();
    	double getAge();
};
#endif
