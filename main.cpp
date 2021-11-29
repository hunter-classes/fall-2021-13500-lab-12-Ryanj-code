#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
  std::vector<int> v = makeVector(5); 
  std::cout << "Testing makeVector:\n";
  for(int i = 0; i < v.size(); i++){
    std::cout << v.at(i) << "\n";
  }
  std::cout << "\n";

  std::cout << "Testing goodVibes:\n";
  std::vector<int> test2 {1,2,-1,3,4,-1,6};
  std::vector<int> v2 = goodVibes(test2);
  for(int i = 0; i < v2.size(); i++){
    std::cout << v2.at(i) << "\n";
  }
  std::cout << "\n";

  std::cout << "Testing gogeta:\n";
  std::vector<int> goku {1,2,3};
  std::vector<int> vegeta {4,5};
  std::cout << "Before fusion:\n";
  std::cout << "Goku:\n";
  for(int i = 0; i < goku.size(); i++){
    std::cout << goku.at(i) << "\n";
  }
  
  std::cout << "Vegeta:\n";
  for(int i = 0; i < vegeta.size(); i++){
    std::cout << vegeta.at(i) << "\n";
  }
  
  gogeta(goku, vegeta);

  std::cout << "\nAfter fusion:\n";
  std::cout << "Goku:\n";
  for(int i = 0; i < goku.size(); i++){
    std::cout << goku.at(i) << "\n";
  }

  std::cout << "Vegeta:\n";
  for(int i = 0; i < vegeta.size(); i++){
    std::cout << vegeta.at(i) << "\n";
  }

  std::cout << "\n";
  return 0;
}
