#include<iostream>
#include<vector>
/// @include <iostream> and <vector> | Using a basic template of both of them

#define NULL 0 // Just in case lol

/// @param ALL_Functions just in case 4 the order of that shit
int Input(std::vector<int>&reference);
int highValue(const std::vector<int>&reference);
void printALLSHIT(const std::vector<int>&reference);

namespace Another_vectorFunction{

  int Input(std::vector<int>&reference){
    bool INFINITE_CICLE = true;  // This is bad and I know that but its safe whit this program... kindaa sus
    int dot_data = 0;
    std::cout<<"Put some data on the vector = ";
    while(INFINITE_CICLE){
      std::cin>>dot_data;
      
      reference.push_back(dot_data);if(dot_data == 0){INFINITE_CICLE = false; reference.pop_back();};
    }

    return NULL; // ??!!
  }

  int highValue(const std::vector<int>&reference){

    int high_value = 0; // Initialize 0 just in case for the memory BUG

    for(int based:reference){
      if(based > high_value){
        high_value = based;
      }
    }
    return high_value;
  }

  void printALLSHIT(const std::vector<int>&reference){
    std::cout<<"\nThe max value on the vector = "<<highValue(reference)<<std::endl;
  }


};

int main(int argc, char **argv[]){

  std::vector<int>Im_everyFunction;

  Another_vectorFunction::Input(Im_everyFunction);
  Another_vectorFunction::highValue(Im_everyFunction);
  Another_vectorFunction::printALLSHIT(Im_everyFunction);
  
  // hahahaha 

  /// @author Ashy~
}

// if you wanna see the old code.. check the file "Old_code.txt"