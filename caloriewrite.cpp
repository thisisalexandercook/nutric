#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main ()
{

std::cout << "Enter a Food: ";
std::string food1;
std::getline(std::cin, food1);
std::cout << food1 <<std::endl;
std::cout << "Please Enter Caloric Content for 100g of this food : "<< std::endl << std::endl;




  int p = 0;
  std::cout << "Enter Protein Value: ";
  std::cin >> p;

  int c = 0;
  std::cout << "Enter Carbohydrate Value: ";
  std::cin >> c;

  int f = 0;
  std::cout << "Enter Fat Value: ";
  std::cin >> f;
  std::cout << std::endl;

  int t[3] = {p,c,f};
  int kcal = ((t[0] + t[1])*4) + (t[2]*9);
  std::cout << "Total Caloric Content is: " << kcal;

  std::ofstream outf(food1.c_s, std::ios::app);
    outf << food1 << std::endl;
    outf << t[0] << std:: endl;
    outf << t[1] << std:: endl;
    outf << t[2] << std:: endl;


return 0;

}
