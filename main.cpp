#include <iostream>

using namespace std;

int Recursive_Binary_Search(int key,int Array[],int startpoint,int endpoint){
    int mid = (startpoint+endpoint)/2;  //mid point
    if(startpoint > endpoint)       //if key does not exist
        return -1;
    if(key == Array[mid])           // Base Case
        return mid;
    else if (key < Array[mid])      // recusive case-1
        Recursive_Binary_Search(key,Array,startpoint,mid-1);
    else          //recursice case-2
        Recursive_Binary_Search(key,Array,mid+1,endpoint);
}

int main()
{
    int Array[]= {1,2,5,10,12,59,60,75,95,105,205,859,1005};
    int key;
    int startpoint=0;   //Starting Index
    int endpoint = sizeof(Array)/sizeof(int)-1;   //Ending index or size of the array
    cout << "Enter Number to find: ";
    cin >> key;
    int found = Recursive_Binary_Search(key,Array,startpoint,endpoint);
    if(found == -1) // If Key not found
        cout << "\nItem not Found\n";
    else{       //if Found
        cout << "\n\n\t || Number Found ||\n\n";
        cout << "If Array Start from 0 then position will be " << found <<endl;
        cout << "\nIf Array Start from 1 then position will be " << found+1 <<endl;
    }
    return 0;
}
