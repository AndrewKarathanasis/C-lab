#ifndef _vector2_hpp_
#define _vector2_hpp_

const unsigned int size=3;

class vector{

    public:
int v[size];

vector(){
    for (unsigned int i=0;i<size;i++) v[i]=0;
}
vector(const int r[]){
    for (unsigned int i=0;i<size;i++) v[i]=r[i];    
}
vector(const vector &r){
    for (unsigned int i=0;i<size;i++)
        v[i]=r.v[i];
}
~vector(){cout<<"vector =( ";
    for(unsigned int i=0;i<size;i++)
        { cout<<v[i]<<" "; }
    cout<<") is destroyed\n";
}
vector operator+ (const vector &r){
    vector result;
    for (unsigned int i=0;i<size;i++)
        result.v[i]=v[i]+r.v[i];
    return result;
}
int operator *(const vector &r){
    int result=0;
    for(unsigned int i=0;i<size;i++)
        result+=v[i]*r.v[i];
    return result;
}
bool operator ==(const vector &r){
    for (unsigned int i=0;i<size;i++)
    if (v[i]!=r.v[i]) return false;
        return true;
}
vector operator = (const vector &r){
    for (unsigned int i=0;i<size;i++)
        v[i]=r.v[i];
    return *this;
}

friend void print(const vector &);
};


void print(const vector &r){
    cout<<"(";
    for(unsigned int i=0;i<size;i++)
        cout<<r.v[i]<<" ";
    cout<<")\n";
}





#endif
