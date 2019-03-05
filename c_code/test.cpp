#include <iostream>
#include <string>
//#include <vector>
//#include <fstream>
using namespace std;


typedef struct {
    int x;
    char const life[20];
    char const name[20];
}Man;

Man m1 = {1, "a", "bbb"};

void print(int i){
    printf("%d \n", i);
};

void print(const char *str){
    printf("%s\n", str);
};

void print(double f){
    printf("%f\n", f);
};


int main(){
    bool val = true;
    fflush(stdin);
    string cppvar = "hi there";
    // auto
    cout << "hello world" << endl;
    cout << cppvar << endl;

    print(3);
    print("string i am");
    print(3.14);
    
    cout << m1.name << endl;
    cout << m1.x << endl;
    cout << m1.life << endl;

    return 0;
}

