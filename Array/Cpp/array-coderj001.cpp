#include <cstdio>

using namespace std;

int main(){
    // Init array with size of 10
    int arr[10];

    // Assigned value for each array with index
    arr[0]=33;
    arr[1]=15;
    arr[5]=5;

    // Printing the array
    for(int i=0;i<10;i++)
        printf("Element %d -> %d\n",i,arr[i]);
}
