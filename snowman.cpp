#include<iostream>
#include<string>
#include<array>
using namespace std;
#include "snowman.hpp"


constexpr int dig0 = 10000000;
constexpr int dig1 = 1000000;
constexpr int dig2 = 100000;
constexpr int dig3 = 10000;
constexpr int dig4 = 1000;
constexpr int dig5 = 100;
constexpr int dig6 = 10;
constexpr int digall = 8;

std::array<std::string, 4> H {" _===_ \n", "  ___  \n .....\n", "   _\n  /_\\ \n", "  ___\n (_*_)\n"};
std::array<std::string, 4> N {",", ".", "_", " "};
std::array<std::string, 4> L {"(.", "(o", "(O", "(-"};                                    //14422334
std::array<std::string, 4> R {".)", "o)", "O)", "-)"};
std::array<std::string, 4> X {"<", "\\", "/", ""};
std::array<std::string, 4> Y {"> ", "/ \n", "\\ ", " "};
std::array<std::string, 4> T {"( : )", "(] [)", "(> <)", "(   )"};
std::array<std::string, 4> B {"\n ( : ) ", "\n (\" \") ", "\n (___) ", "\n (   ) "};
int h=0, n=0, l=0, r=0, x=0, y=0, t=0, b=0;

namespace ariel{
    string snowman(int i){
        string digits = to_string(i);
        if(digits.size()!=digall){
            throw std::exception();
        }

        h = i/dig0 -1;
        if(h>3 || h<0){
            throw std::exception();
        }
        n = (i/dig1);
        n = n%dig6 - 1;
        if(n>3 || n<0){
            throw std::exception();
        }
        l = (i/dig2);
        l=l%dig6 - 1;
        if(l>3 || l<0){
            throw std::exception();
        }
        r = (i/dig3);
        r = r%dig6 - 1;
        if(r>3 || r<0){
            throw std::exception();
        }
        x = (i/dig4);
        x = x%dig6 - 1;
        if(x>3 || x<0){
            throw std::exception();
        }
        y = (i/dig5);
        y = y%dig6 - 1;
        if(y>3 || y<0){
            throw std::exception();
        }
        t = (i/dig6);
        t = t%dig6 - 1;
        if(t>3 || t<0){
            throw std::exception();
        }
        b = i%dig6-1;
        if(b>3 || b<0){
            throw std::exception();
        }

        string snow;
        snow = H.at(h);
        if(x==1){
            snow = snow + X.at(x);
        }
        else{
            snow = snow + " ";
        }
        snow = snow + L.at(l);
        snow = snow + N.at(n);
        snow = snow + R.at(r);
        if(y==1){
            snow =snow + Y.at(y);
        }
        else{
            snow = snow + " \n";
        }
        if((x==2 || x==0)){
            snow = snow + X.at(x);
        }
        else{
            snow = snow + " ";
        }
        
        snow = snow + T.at(t);
        if(y==2 || y==0){
            snow = snow + Y.at(y);
        }
        else{
            snow = snow + " ";
        }
        snow = snow + B.at(b);
        return snow;
    }

}