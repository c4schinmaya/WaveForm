#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void matrix(vector<vector<int>>& arr, int row, int col) {
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    int row,col;
    cout<<"Enter the number of rows and column : "<<endl;
    cin>>row>>col;
    vector<vector<int>>arr(row,vector<int>(col,1));
    cout<<"enter the elements in array : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    matrix(arr,3,4);


}

