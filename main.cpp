#include <iostream>


using namespace std;
int mergearrayh(int arr1[], int x,int arr2[],int y,int merged[]);
int returnfunc(int n);
int main()
{
    int x =4;
    int y=5;
    cout<<x+y<<endl;
    int arr1[x]={1,2,6,8};
    int arr2[y]={9,10,11,15};
    int merged[x+y];
    int sumR=0;
    mergearrayh(arr1[], x, arr2[], y, merged[]);
    for(int i =0 ; i<x+y ; i++){
        sumR=returnfunc(i);
    }

    cout<<"the sum of number: "<<sumR<<endl;
    return 0;

}

int mergearrayh(int arr1[], int x,int arr2[],int y,int merged[]){
    int i , j , k;
    i=0,j=0,k=0;

    while(i<x && j<y){
        if(arr1[i] < arr2[j]){
            merged[k++]=arr1[i++];
        }
        else{
            merged[k++]=arr2[j++];
        }
    }

    while(i<x){
        merged[k++]=arr1[i++];
    }

    while(j<y){
        merged[k++]=arr2[j++];
    }
}

int returnfunc(int n){

    if(n<=0){
    return 0;
    }
    else{
        return(x+sumR(n-1));
    }
}
