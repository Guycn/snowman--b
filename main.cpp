//
//  main.cpp
//  snowman-a
//
//  Created by Guy Cohen on 03/03/2021.
//
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
using namespace ariel;

int main(int argc, const char * argv[]) {
    int number = 0,flag=0;
    std::cout << "---welcome to snowman world----" << endl;
    std::cout << "You can choose to draw one of 32 possible snowman by entering an 8-character number and each character should be between 1-4" << endl;
    std::cout << "Example of 4 possible snowman:\n\n" << snowman(43214321) << "\n" << snowman(21144444) << "\n" << snowman(44444441) << "\n" << snowman(11111141)<< "\n" << endl;
    std::cout << "Please choose an 8 numbers between 1 to 4:" <<endl;
    std::cin >> number;
    string num = to_string(number);
    if(num.length() !=8){
        std::cout << "Bad snowman code" << endl;
        flag = 1;
    }

    for(int j=0;j<8 && flag==0;j++){
        char c = num[j];
        if(c!='1' && c!='2' && c!='3' && c!='4'){
            flag=1;
            j=8;
        }
        if(flag==1){
            std::cout << "Bad snowman code" << endl;
        }
    }
    if(flag==0){
        std::cout<< "The chosen snowman is:\n\n" << snowman(number) << endl;
    }

    
}
