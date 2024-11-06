/*
Title: Student Lineup
File Name: StuLineup.cpp
Programmer: Kason Steiner
Date: 11/2024
A teacher has asked all her students to line up according to their first name.
For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
Once all the names have been read, it reports which student would be at the front of the line and
which one would be at the end of the line. You may assume that no two students have the same name.
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
*/  
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main()
{
  int students;
      cout << "How many students are in your class? ";
      cin >> students;

  while (students < 1 || students > 25)
  {
    cout << "Invalid input. Please enter a number btetween 1 and 25: ";
    cin >> students;
  }

  vector<string> name(students);

  cout << "Enter the name of student: \n";

  for (int count = 0; count < students; ++count)
    {
      cin >> name[count];
    }

  cout << "\nThe first student in line is " << name[0] << endl;
  cout << "The student at the end of the line is " << name[students - 1] << endl;

return 0;
}