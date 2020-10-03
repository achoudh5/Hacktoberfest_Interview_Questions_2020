#include<bits/stdc++.h> 
using namespace std; 
#define pb push_back
#define mp make_pair
#define f first
#define s second

void findTriplets(int arr[], int n) 
{ 
    bool found = false; 
    int c = 0 , i , j;
    // variable c is used to store the counts of triplets
    vector<pair<int,pair<int,int>>> v; // this vector is used to store the triplets.
    for (i=0; i<n-1; i++) 
    { 
        unordered_set<int> s; 
        for (j=i+1; j<n; j++) 
        { 
            int x = -(arr[i] + arr[j]); 
            if (s.find(x) != s.end()) 
            { 
                c++;
                v.pb(mp(x , mp(arr[i],arr[j])));
                found = true; 
            } 
            else
                s.insert(arr[j]); 
        } 
    }   
    if (found == false) 
        cout << " No Triplet Found" << "\n"; 
    else
    {
        cout << "Triplets Count :- " << c <<"\n";
        cout << "Triplets are :- " << "\n";
        for(i = 0; i < v.size();i++)
            cout << v[i].f << " " << v[i].s.f << " " << v[i].s.s << "\n";
    }
} 
  
int main() 
{
    int N , i;
    cout << "Enter Size of the Array" << "\n";
    cin >> N; 
    int A[N];
    cout << "Enter Array Elements " << "\n";
    for(i = 0 ; i < N;i++)
        cin >> A[i];
    
    findTriplets(A, N); 
    return 0; 
} 