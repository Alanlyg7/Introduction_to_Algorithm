//
//  sort_methods.hpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/3/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#ifndef sort_methods_hpp
#define sort_methods_hpp

#include <stdio.h>
#include <iostream>
#include <vector>


void printVectorInt(std::vector<int> &input_array);
std::vector<int> insertionSort(std::vector<int>& unsorted_array);
std::vector<int> shellSort(std::vector<int>& unsorted_array);
std::vector<int> selectionSort(std::vector<int>& unsorted_array);

#endif /* sort_methods_hpp */

