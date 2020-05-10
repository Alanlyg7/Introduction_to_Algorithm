//
//  search_methods.cpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 5/9/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#include "search_methods.hpp"

int binary_search(std::vector<int>& input_array, int target){
	int lower_bound = 0;
	int upper_bound = (int)(input_array.size()) - 1;
	
	while(lower_bound <= upper_bound){
		
		int mid = (upper_bound + lower_bound)/2;
		
		if(target < input_array[mid])
			upper_bound = mid - 1;
		else if(target > input_array[mid])
			lower_bound = mid + 1;
		else
			return mid;
	}
	
	return 0;
}
