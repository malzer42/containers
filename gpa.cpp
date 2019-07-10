/**
   gpa.cpp: Cpp program to compute the Grade Point Average
   Programmer(s): Pierre Abraham Mulamba
   Date of creation (modification): 20190710 (20190710)
   Note: The map containers will be used to implement the Grade Point Average 
*/

#include <iostream>
#include <map>
#include <iomanip>
#include <string>

std::map<std::string, double> create_map()
{
  std::map<std::string, double> m;
  m["A+"] = 4.0;
  m["A"] = 4.0;
  m["A-"] = 3.67;
  m["B+"] = 3.33;
  m["B"] = 3.0;
  m["B-"] = 2.67;
  m["C+"] = 2.33;
  m["C"] = 2.0;
  m["C-"] = 1.67;
  m["D+"] = 1.33;
  m["D"] = 1.0;
  m["F"] = 0.0;
  m["a+"] = 4.0;
  m["a"] = 4.0;
  m["a-"] = 3.67;
  m["b+"] = 3.33;
  m["b"] = 3.0;
  m["b-"] = 2.67;
  m["c+"] = 2.33;
  m["c"] = 2.0;
  m["c-"] = 1.67;
  m["d+"] = 1.33;
  m["d"] = 1.0;
  m["f"] = 0.0;
    
  return m;
}

int main(int argc, char *argv[])
{
  try{
    std::cout << "Grade Point Average" << std::endl;
    std::map<std::string, double> points = create_map();
    unsigned int nCourses = 0;
    double total_points = 0.0;

    bool isDone = false;
    while(!isDone){
      std::cout << "Read a grade (A+, A, A-, B+, B, B-, C+, C, C-, D+, D, D-, F) from user/Enter a blank line to signal the end: ";
      std::string grade = "";
      std::getline(std::cin, grade);
      auto search = points.find(grade);
      if(search == points.end() ){
	isDone = true;
      } 
      else{
	nCourses += 1;
	total_points += points[grade];
      }
    }

    if(nCourses > 0){
      std::cout << "Your GPA is : " << total_points/nCourses << std::endl;
    }
  }
  catch(...){
    std::cerr << "Unkonwn exception thrown\n";
  }
}
