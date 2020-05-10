//
//  sort_methods.cpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/3/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#include "sort_methods.hpp"


void printVectorInt(std::vector<int> &input_array){
	for(auto i = input_array.begin(); i != input_array.end(); ++i){
		std::cout<< *i << " ";
	}
}


std::vector<int> insertionSort(std::vector<int>& unsorted_array){
	
	for(int j = 1; j < (int)(unsorted_array.size()); j++){
		int key = unsorted_array[j];
		int i = j - 1;
		while(i >= 0 && unsorted_array[i] > key){
			unsorted_array[i+1] = unsorted_array[i];
			i -= 1;
		}
		unsorted_array[i+1] = key;
	}
	
	return unsorted_array;

}


std::vector<int> shellSort(std::vector<int>& unsorted_array){
	
	for(int gap = (int)(unsorted_array).size()/2; gap > 0; gap /= 2){
		for(int i = gap; i < (int)(unsorted_array.size()); i++){
			int temp = unsorted_array[i];
			int j;
			for(j = i; j >= gap && unsorted_array[j - gap] > temp; j -= gap)
				unsorted_array[j] = unsorted_array[j - gap];
			unsorted_array[j] = temp;
			}
		}
	return unsorted_array;
	
}

std::vector<int> selectionSort(std::vector<int>& unsorted_array){
	
	int i, j, min_idx;
	for(i = 0; i < (int)(unsorted_array.size()); i++){
		min_idx = i;
		for(j = i; j < (int)(unsorted_array.size()); j++){
			if(unsorted_array[j] < unsorted_array[min_idx]) min_idx = j;
		}
		std::swap(unsorted_array[i], unsorted_array[min_idx]);
	}
	
	return unsorted_array;
}




