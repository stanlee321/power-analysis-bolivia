#include <stdio.h>

class Vertex {
    private:
        float x,y,z;
    public:
        void setToZero(){
            x=0;
            y=0;
            z=0;
        };
        void set(float vx, float vy, float vz){
            x = vx;
            y = vy;
            z = vz;
        };
        float getY(){
            return y;
        };
};

struct VertexStruct
{
    /* data */
    float x,y,z;
};


int main(){
    Vertex v;

    v.set(2,3,4);
    printf("%f \n", v.getY());
    return 0;
}