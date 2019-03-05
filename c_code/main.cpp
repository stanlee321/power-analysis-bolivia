#include <stdio.h>
#include "vertex.h"

int main(){
    Vertex v;
    v.set(2,3,4);
    
    printf("%f \n", v.getY());
    return 0;
}