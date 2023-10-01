#include<iostream>
#include<vector>
/// @include <iostream> and <vector> for the basics functions on the program

/// @brief Lets find the high value on the vector list
namespace Vector_High{

    void find_highValue(std::vector<int>&testing){
        int size = 0, n1 = 0;

        std::cout<<"How many numbers do you want the length of the vector to be? = ";
        std::cin>>size;
        // For to put some data for the vector
        std::cout<<"Enter value on the vector = ";
        for(int i = 0; i < size; i++){
            std::cin>>n1;

            testing.push_back(n1);

            if(testing.at(i) > n1){
                n1 = testing.at(i);
            }
        }

        /// @return the mos high value on the vector
        std::cout<<"The most high value is = "<<n1<<std::endl;
    }
};


int main(int argc, char **argv[]){
    /// @param test a simple vector whit none value
    std::vector<int>test;

    
    // We call the function to complete the task and this ends...
    Vector_High::find_highValue(test);

    // @author Ashy~
}

// if you wanna see the old code.. check the file "Old_code.txt"