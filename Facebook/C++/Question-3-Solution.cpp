#include <bits/stdc++.h> 
using namespace std; 
#define mp make_pair
#define pb push_back
#define f first
#define s second

// Function to find all pairs in both arrays 
// whose sum is equal to given value x 
void findPairs(int arr1[], int arr2[], int n, 
               int m, int x) 
{ 
    // Insert all elements of first array in a hash 
    int i , j;
    unordered_set<int> s; 
    for (i = 0; i < n; i++) 
        s.insert(arr1[i]); 
    vector<pair<int,int>> v;// this vector is used to store the Pairs.
    int c = 0;// variable c is used to store the counts of Pairs
    // Subtract sum from second array elements one 
    // by one and check it's present in array first 
    // or not 
    for (j = 0; j < m; j++) 
    {
        if (s.find(x - arr2[j]) != s.end()) 
        {
            c++;
            v.pb(mp(x - arr2[j] , arr2[j]));
        }
    }
    if(c > 0)
    {
        cout << "Pairs Count :- " << c << "\n";
        cout << "Pairs are :- " << "\n";
            for(i = 0; i < v.size();i++)
                cout << v[i].f << " " << v[i].s << " " << "\n";    
    }
    else
        cout << "No Pair Found" << "\n"; 
    
} 
  
// Driver code 
int main() 
{ 
    int arr1[] = { 1, 0, -4, 7, 6, 4 }; 
    int arr2[] = { 0, 2, 4, -3, 2, 1 }; 
    int x = 8; 
    int n = sizeof(arr1) / sizeof(int); 
    int m = sizeof(arr2) / sizeof(int); 
    findPairs(arr1, arr2, n, m, x); 
    return 0; 
} 