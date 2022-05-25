#include<iostream>
using namespace std;

void swap(int &a , int &b){  int c  = a ; a = b ; b = c    ;};



int * Rearrange(int *arr,int n){
    // Complete the function
   
    
    for(int i = 0 ; i<n ;){

                cout << "i  =  " << i << endl ;  ;

                if(arr[i] != -1 && arr[i] != i ){
                    swap(arr[i], arr[arr[i]]);

                     cout << "\nin if : " <<  arr[i] << endl ;
                }

                else i++ ;

                  
    }

    return arr ;
}

int main(){
    int n = 10;
    int arr[]  = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1} ;

int *r = Rearrange(arr , n)  ;

 for(int i = 0 ; i<n ;i++){
    cout << r[i] << " ";
 }

 delete [] r ;
}