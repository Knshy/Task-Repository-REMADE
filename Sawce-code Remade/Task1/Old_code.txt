#include<iostream>
#include<vector>

// Compute the max value inside a list of numbers [Vector]

namespace knsh_{

    int pass_VectorMaxValue(std::vector<int>test, int m){
       for(int testing:test){
        if(testing > m){
            m = testing;
        }
       }

       return m;
    }

    // Funcion to find the most high value on the vector...
};
int main(){

    std::vector<int>test = {23,21,2,4,55}; 
    int m = 0;
    
    std::cout<<"Max value on the vector = "<<knsh_::pass_VectorMaxValue(test,m)<<std::endl;

    // Task 1-Complete //    
    return 0;
}