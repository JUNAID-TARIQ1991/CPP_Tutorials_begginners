#ifndef SHAPE_hh
#define SHAPE_hh
using namespace std;
class shape{
    protected:
    int width;
    int height;
    public:
    shape (){
        width =0;
        height =0;
    }
    shape(int w, int h){
        width=w;
        height =h;
    }
    int area() {
            cout << "Parent class area: " << endl;
            return (width*height);
        }



};
#endif
