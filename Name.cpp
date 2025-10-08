#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

//                                 S

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){ 
            if( (i==0) || (i<5 && j==0) || (i==10 && j<n) || (i==5 && j<n) || (i>5 && j==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }                    
        }
        cout << endl;
    }
    cout << endl ;

//                                  H
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i==5) || (i<n && j==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;  

//                                  R

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (i<n && j==0) || (i==0 && j<n) || (i<5 && j==n-1) || (i==5 && j<n) || (i>5 && i==j) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

//                                  E

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (i<n && j==0) || (i==0 && j<n) || (i==5 && j<n) ||  (i==10 && j<n) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

//                                 Y

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (i<5 && i==j) || (i<5 && j==n-i-1) || (i>=5 && j==5) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

//                                  A

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (j==0 && i<n) || (i==0 && j<n) || (j==n-1 && i<n) || (i==5 && j<n) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

//                                   N

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (j==0 && i<n) || (i<n && i==j) || (j==n-1 && i<n) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

//                                    S

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){ 
            if( (i==0) || (i<5 && j==0) || (i==10 && j<n) || (i==5 && j<n) || (i>5 && j==n-1) ){
                          cout << "*";
            }
            else{
                cout << " ";
            }                    
        }
        cout << endl;
    }
    cout << endl ;

      
//                                    H

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i==5) || (i<n && j==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;  

//                                    S

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){ 
            if( (i==0) || (i<5 && j==0) || (i==10 && j<n) || (i==5 && j<n) || (i>5 && j==n-1) ){
                          cout << "*";
            }
            else{
                cout << " ";
            }                    
        }
        cout << endl;
    }
    cout << endl ;
     
//                                    H

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i==5) || (i<n && j==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;  
   
//                                    U

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i==n-1) || (i<n && j==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;
     
//                                    K

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i<5 && j==n-i-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;
     
//                                    L

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( (i<n && j==0) || (i==n-1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
    cout << endl ;

//                                  A

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if ( (j==0 && i<n) || (i==0 && j<n) || (j==n-1 && i<n) || (i==5 && j<n) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;    
    }
    cout << endl;

}