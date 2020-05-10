//
//  maxsubarray_method.cpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/13/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#include "maxsubarray_method.hpp"


int maxSubArrBruteForce(std::vector<int>& input_array){
	
	int ans = INT_MIN;
	int current_value = 0;
	
	for(int i = 0; i < (int)(input_array.size()); i++){
	
		for(int j = i; j < (int)(input_array.size()); j++){
			
			for(int k = i; k <= j ; k++){
				current_value += input_array[k];
			}
			ans = std::max(ans, current_value);
			current_value = 0;
			
		}
	}

	return ans;

}

int maxSubArr(std::vector<int>& input_array){
	int ans = INT_MIN;
	int a = 0;
	for(int x : input_array){
		a += x;
		ans = std::max(a, ans);
		a = std::max(a, 0);
	}
	return ans;
}



