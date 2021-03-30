#include <iostream>

using namespace std;


void SequentialSearch2(int arr[], int n, int elemento)
{
    int i=0, k=-1, naotem=0;

    while(i<n){
        i=i+1;
        if(elemento==arr[i]){
            cout<<"o elemento esta no vetor\n";
            naotem=1+1;
        }

    }
    if(naotem==0){
        cout<<"o elemento nao esta no vetor \n";
        }

}


int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"insira um elemento \n";
    int elemento;
    cin>>elemento;
    SequentialSearch2(arr, n, elemento);

    return 0;
}
