/*
Title: Chp5Exc14-StudentLineup
File Name: StuLineup.cpp
Programmer: Kason Steiner
Date: 11/2024
A teacher has asked all her students to line up according to their first name.
For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
Once all the names have been read, it reports which student would be at the front of the line and
which one would be at the end of the line. You may assume that no two students have the same name.
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
Modify program to function the same but, for it allow names to be read from a file and display first and last in line.
*/  
#include <iostream>
#include <string>
#include <vector> 
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
  string studentName;
  ifstream inFile;


  inFile.open("names.txt");

 vector<string> name(65); //65 students in class to get names of

  for (int count = 0; count < 65; ++count)
    {
      inFile >> name[count];
    }

    sort(name.begin(), name.end()); //Sort vector alphabetically

  cout << "\nThe first student in line is " << name.front() << endl; //displays first student in line
  cout << "The student at the end of the line is " << name.back() << endl; //displays last student in line

return 0;
}