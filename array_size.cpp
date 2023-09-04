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
    int fifth[10] = {1};
   int n = 10;
   printArray(fifth,10);
   
   int fifthsize = sizeof(fifth)/sizeof(int);
   cout<<"size of fifth is "<<fifthsize<<endl;

   return 0;

 }