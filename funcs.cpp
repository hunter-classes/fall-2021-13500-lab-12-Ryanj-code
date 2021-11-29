#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n){
  std::vector<int> result;
  for(int i = 0; i < n; i++){
    result.push_back(i);
  }
  return result;
}

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> result;
  for(int i = 0; i < v.size(); i++){
    if(v.at(i) > 0){
      result.push_back(v.at(i));
    }
  }

  return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for(int i = 0; i <= vegeta.size(); i++){
    goku.push_back(vegeta.at(0));
    vegeta.erase(vegeta.begin());
  }
}
