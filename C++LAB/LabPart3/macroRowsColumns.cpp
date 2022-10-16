#include <iostream>

#define Rows 5
#define Columns 3

using namespace std;


int main(){

int V[Rows][Columns];
int i,j;
for (int i=0;i<Rows;i++){
    for (int j=0;j<Columns;j++){
        
        V[i][j]=((i+1)*(j+1));
 
        cout<<V[i][j]<<" ";
}
            cout<<'\n';
}

    return 0;
}
