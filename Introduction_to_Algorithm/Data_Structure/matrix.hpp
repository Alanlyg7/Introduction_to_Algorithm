//
//  matrix.hpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/25/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#ifndef matrix_hpp
#define matrix_hpp

#include <stdio.h>
#include <vector>

template <typename Object>

class Matrix{
public:
	Matrix(int rows, int cols) : array(rows){
		for(auto &thisRow : array){
			thisRow.resize(cols);
		}
	}
	Matrix(std::vector<std::vector<Object>> v):array{v}
	{}
	Matrix(std::vector<std::vector<Object>>&& v):array{std::move(v)}
	{}
	
	const std::vector<Object>& operator[](int row) const{
		return array[row];
	}
	std::vector<Object>& operator[](int row){
		return array[row];
	}
	
	int numrows() const{
		return array.size();
	}
	int numcols() const{
		return numrows() ? array[0].size(): 0;
	}
	
	
	
	
private:
	std::vector<std::vector<Object>> array;
	
};


#endif /* matrix_hpp */
