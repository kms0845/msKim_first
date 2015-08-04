/* 
 * File:   main.cpp
 * Author: MinSung
 *
 * Created on 2015년 7월 23일 (목), 오후 12:08
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <vector>

//using namespace std;

int main(int argc, char** argv) {
    printf("hello world\n");

    
    std::vector<int> theArray;
    //theArray.resize(10);
    std::cout << theArray.size() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(12);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(18);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    theArray.push_back(19);
    std::cout << theArray.capacity() << "\n";
    
    std::cout << theArray.at(3);
    //std::cout << theArray.size() << "\n";



    return 0;
}

