#include <iostream>

 using namespace std;

// //time complexity => O(n)
// int linear_search (int key, int arr[], int size) {
  
// for (int i = 0; i < size; i++){
      
// if (key == arr[i]){
// 	  return i;}
// }
// return -1;
// }


// int binary_search_recursion (int key, int arr[],int start ,  int end ) {
  
//   int mid = (start+end) / 2 ;
  
//   if(start >= end) return -1 ;
  
//   else{
//   if(key == arr[mid]) return  mid ;
  
//   else if(key < arr[mid])   return  binary_search ( key,  arr,  start , mid - 1) ;
   
//  else  return binary_search (key, arr,mid + 1 , end);

// }
int binary_search (int key, int arr[] , int size) {
  
  int start  = 0 , end  = size ;
  
  while( start < end) {
      
  int mid = (start+end) / 2 ;
  
  if(key == arr[mid]) return  mid ; // key == data
  else if(key < arr[mid])   { end = mid - 1 ; } // key < data
 else { start = mid + 1 ; }; //key > data

  }
  
return -1 ;

}


 
int main (){
 
 int size = 6 ;
int arr[size] = {1  , 12 , 53 ,134 ,135  , 145}; 
int key = 148;
  
//int index = linear_search (key, arr , 6);
// int index = binary_search_recursion (key, arr , 0 , size);
int index = binary_search (key, arr , size);
  
cout << index << endl;
  
return 0;

}


/*

Time complexity of binary_search 

after first iteration , length of array = n ;
after second iteration , length of array = n/2 ;
after third iteration , length of array = (n / 2) / 2 => n/(2^2 );
after fourt iteration , length of array = ( n/(2^2 ) ) /  2 => n / (2^3) ;

after Kth iteration , length of array = n / (2)^k ;

n= 2^k

Applying log function on both sides: 
 
=> log2 (n) = log2 (2k)
=> log2 (n) = k log2 (2)
 

As (loga (a) = 1) 
Therefore, 
 
=> k = log2 (n)

O(log 2)
*/
