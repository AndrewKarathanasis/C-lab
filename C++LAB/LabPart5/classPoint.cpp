

#include<iostream>
using namespace std;


class point{

    public:
float xval,yval;
point() {xval=0.0f,yval=0.0f;}
point(float x,float y ){xval=x,yval=y;}
point (const point &start){xval=start.xval;  yval=start.yval;}
~point(){};

void sett(){
    float inx,iny;
    cout<<"Enter coordinates\n";
    cout<<"x=";
    cin>>inx;
    cout<<"y=";
    cin>>iny;
    xval=inx;
    yval=iny;
}

void copy(point p){
    xval=p.xval;
    yval=p.yval;
}

void print(){cout<<"x="<<xval<<" "<<"y="<<yval<<'\n';}

point move(){
float dx,dy;
cin>>dx;
cin>>dy;
    this->xval=xval+dx;
    this->yval=yval+dy;
return *this;}
};


int main(){
    
    float v[2]={1.0f,1.0f};

    point start(5,5);
    point end(9,9);
    point p;
    point q(3.0,4.0);
    point s(end);


s.~point();

p.sett();
p.print();
p.copy(end);
p.print();

cout<<"\n\n\n\n\n\n\n";


point g;
g.copy(start);
g.print();
g.move().print();



    return 0;
}
