//
//  main.cpp
//  Game-1-1
//
//  Created by kong on 16/8/18.
//  Copyright © 2016年 konglee. All rights reserved.
//

#include <iostream>

//using namespace::std;

//函数声明
void func (void);
static int count = 10;

int main(int argc, const char * argv[]) {
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
//    cout << "fuck\n";
//    wchar_t *wchar = "我是个帅比";
//    cout << "size of wchar_t " << sizeof(wchar_t) << endl;
//    cout << "size of char " << sizeof(char) << endl;
//    const int d = 20;
    int a = 10;
    int b = 2;
    int c = a + b;
    std :: cout << c << std:: endl;
    
    while (count--) {
        if (count == 5) {
            func();
        }
    }
    
    return 0;
}

void func (void){

    static int i = 5;
    i++;
    std:: cout << "i = " << i <<  std:: endl;
    
}
