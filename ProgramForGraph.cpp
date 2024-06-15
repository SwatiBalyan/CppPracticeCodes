#include<iostream>
#include<vector>

using namespace std;

//N - number of nodes
//M - number of edges

int answer(int N, vector<int> &X, vector<int> &Y){

    int matrix[X.size()][Y.size];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++){
            if(matrix[i][j]==0)
        }
    }

    int temp=1;
    while(temp<N){
        if((matrix[temp][temp+1]) || (matrix[temp+1][temp]))
        {
            temp++;
        }
        else
            return 0;
    }

    //check if we have reached end node N
    if(temp==N){
    return 1;
    }
} 



int main(){

    return 0;
}
