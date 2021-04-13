using namespace std;
#include <iostream>
#include <utility>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>


void SequentialSearch2(vector<int> v, int n, int elemento)
{
    int i=0, k=-1, naotem=0;

    while(i<n){
        i=i+1;
        if(elemento==v[i]){
            cout<<"o elemento esta no vetor\n";
            naotem=1+1;
            break;
        }

    }
    if(naotem==0){
        cout<<"o elemento nao esta no vetor \n";
        }

}


int main()
{
    vector<int> v;
    for(int i=0;i<INT_MAX;i++){
        int valorvetor;
        cin>>valorvetor;
        // Adiciona os valores no vetor
        v.push_back(valorvetor);
        if(valorvetor<0)break;
    }

    // Print out the vector
    cout << "v = { ";
    for (int n : v) {
        cout << n << ", ";
    }
    cout << "}; \n";
    int n= v.size();

    cout<<"insira um elemento para procurar \n";
    int elemento;
    cin>>elemento;

    SequentialSearch2(v, n, elemento);

    return 0;
}
