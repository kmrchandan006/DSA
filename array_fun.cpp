#include<iostream>
 using namespace std;

 void printArray(int arr[], int size){

    cout<< "printing the the Array"<<endl;
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
   cout<<" pronting Done "<<endl;
 }

 int main(){
    int third[15]={2,7};
    int n= 15;
    printArray(third,15);

    int fourth[110]={0};
     n= 10;
    printArray(fourth,10);

    return 0;
    
 }