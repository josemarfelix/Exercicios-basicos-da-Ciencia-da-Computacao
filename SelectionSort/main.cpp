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
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (v[j] < v[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(v[min_idx], v[i]);
    }
    for (i=0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}
