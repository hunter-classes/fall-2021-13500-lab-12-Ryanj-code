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

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  std::vector<int> result;
  std::vector<int> new1 = v1;
  std::vector<int> new2 = v2;
  
  int size = 0;
  int fix = 0;

  if(v1.size() > v2.size()){
    size = v1.size();
    fix = v1.size() - v2.size();
  }
  else{
    size = v2.size();
    fix = v2.size() - v1.size();
  }

  for(int i = 0; i < fix; i++){
    if(v1.size() > v2.size()){
      new2.push_back(0);
    }
    else{
      new1.push_back(0);
    }
  }

  for(int i = 0; i < size; i++){
    result.push_back(0);
    result[i] = new1.at(i) + new2.at(i);
  }

  return result;
}
