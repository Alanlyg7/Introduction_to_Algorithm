//
//  main.cpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/3/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#include <iostream>
#include "sort_methods.hpp"
#include "maxsubarray_method.hpp"
#include "Data_Structure/matrix.hpp"
#include "linked_list.hpp"
#include "Algorithms/Search_Algorithms/search_methods.hpp"
#include <stack>
#include <unordered_map>


template <typename Object>
class MemoryCell{
public:
 explicit MemoryCell( const Object & initialValue = Object{ } )
 : storedValue{ initialValue } { }
	const Object& read() const{
		return storedValue;
	}
	void write(const Object& x){
		storedValue = x;
	}
private:
	Object storedValue;
	
};




int main(int argc, const char * argv[]) {
	
	
	
	return 0;
}
