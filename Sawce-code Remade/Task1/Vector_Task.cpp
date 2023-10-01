#include<iostream>
#include<vector>
/// @include <iostream> and <vector?> | Using a sample of a basic template

namespace Vector{
  
    /// @brief // Compute the max value inside a list of numbers [Vector]
    /// @param test [vector]
    /// @param m [int]
    int pass_VectorMaxValue(std::vector<int>test, int m){
       for(int testing:test){
        if(testing > m){
            m = testing;
        }
       }
       
       /// @return the most high value on the vector...
       return m;
    }
};
int main(){
  
    std::vector<int>test = {23,21,77,4,55}; 
    int m = 0;
    
    std::cout<<"Max value on the vector = "<<Vector::pass_VectorMaxValue(test,m)<<std::endl;

    /// @author Ashy~             /9/30/x3
}

// if you wanna see the old code.. check the file "Old_code.txt"