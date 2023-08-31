#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
          
        int col=1;
        char stat='A'+n-row; 
       while(col<=row){
        
            cout<<stat;
            stat=stat+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}