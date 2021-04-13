using namespace std;
#include <iostream>
#include <utility>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>



int main()
{
    // Create a vector containing integers
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
        int i, j;
    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (v[j] > v[j+1])
            swap(v[j], v[j+1]);
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    //bubbleSort(v, n);

}

// This code is contributed by rathbhupendra
