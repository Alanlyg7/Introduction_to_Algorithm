//
//  sort_methods.cpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/3/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#include "sort_methods.hpp"

std::vector<int> insertionSort(std::vector<int>& unsorted_array){
	
	for(int j = 2; j < (int)(unsorted_array.size()); j++){
		int key = unsorted_array[j];
		int i = j - 1;
		while(i > 0 && unsorted_array[i] > key){
			unsorted_array[i+1] = unsorted_array[i];
			i -= 1;
		}
		unsorted_array[i+1] = key;
	}
	
	return unsorted_array;

}
