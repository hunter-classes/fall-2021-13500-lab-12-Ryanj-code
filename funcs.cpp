/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 12
This file contains functions relating to using vectors.
*/

#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n){
  std::vector<int> result;
  for(int i = 0; i < n; i++){
    result.push_back(i);
  } // Uses a for loop with .push_back to add i to result.
  return result;
} // Returns result.

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> result;
  for(int i = 0; i < v.size(); i++){
    if(v.at(i) > 0){
      result.push_back(v.at(i));
    }
  } // Uses a for loop to check if the current element of v is positive,
  // if it is add to result with .push_back.

  return result;
} // Return result.

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for(int i = 0; i <= vegeta.size(); i++){
    goku.push_back(vegeta.at(0));
    vegeta.erase(vegeta.begin());
  } // Loops through the second vector in the parameter, adds all element in it to the first vector,
} // then deletes the element in the second vector that was added to the first vector.

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  std::vector<int> result;
  std::vector<int> new1 = v1;
  std::vector<int> new2 = v2;
  // Initialize 3 vectors, 1 for result, and two that will be changed.
  int size = 0;
  int fix = 0;
  // Two int variables, size will represent size of the larger vector,
  // And fix represents difference in the size of the vectors.
  
  if(v1.size() > v2.size()){
    size = v1.size();
    fix = v1.size() - v2.size();
  } // If the size of v1 is greater, set size to v1's size and fix to v1's size - v2's size.
  else{
    size = v2.size();
    fix = v2.size() - v1.size();
  } // Else do the opposite of the if.

  for(int i = 0; i < fix; i++){
    if(v1.size() > v2.size()){
      new2.push_back(0);
    } // Add zeros to new2 based on how much v1 is bigger than v1.
    else{
      new1.push_back(0);
    } // Add zeros to new1 based on how much v2 is bigger than v2.
  }

  for(int i = 0; i < size; i++){
    result.push_back(0);
    result[i] = new1.at(i) + new2.at(i);
  } // For loop that adds together the elements at i of new1 and new2,
  // then sets to the result to result at i.

  return result;
} // Returns result.
