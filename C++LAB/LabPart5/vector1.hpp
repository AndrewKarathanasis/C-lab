#ifndef _vector1_hpp_
#define _vector1_hpp_ 

class vector{
    public :
unsigned int size;
float *array;
vector();//default constructor
vector(const unsigned int);//parametrised constructor
vector(const vector &);//copy constructor
void set(float vec[],unsigned int k);
void set_element(unsigned int index,float val);
~vector();//destructor
friend void print(const vector &v);
};

vector::vector(){
    size=1;
    array=new float[size];
    array[0]=0;
}
vector::vector(const unsigned int k){
    size=k;
    array=new float[size];
    for(unsigned int i=0;i<size;i++)
        array[i]=0.0f;
}
vector::vector(const vector &v){
    size=v.size;
    array=new float[size];
    for(unsigned int i=0;i<size;i++)
        array[i]=v.array[i];
}
vector::~vector(){
    delete [] array;
}
void vector::set(float vec[],unsigned int k){
     if (k!=size )  cout<<"Dimension of Vectors not equal\nNo change in Vector\n";
     else for(unsigned int i=0;i<size;i++)
         array[i]=vec[i];
}
void vector::set_element(unsigned int index,float val){
    if(index<size) array[index]=val;
    else cout<<"No vector element in position:"<<index<<'\n';
    print(*this);
}
void print(const vector &v){
    cout<<"(";
for(int i=0;i<v.size;i++)
    cout<<v.array[i]<<" ";
    cout<<")"<<'\n';
}

#endif
