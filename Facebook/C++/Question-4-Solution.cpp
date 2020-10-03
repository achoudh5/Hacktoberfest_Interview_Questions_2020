#include <bits/stdc++.h> 
using namespace std; 
  
// Function to calculate the value 
int calcMaxValue(string str) 
{ 
    // Store first character as integer 
    // in result 
    int res = str[0] -'0'; 
  
    // Start traversing the string 
    for (int i = 1; i < str.length(); i++) 
    { 
        // Check if any of the two numbers 
        // is 0 or 1, If yes then add current 
        // element 
        if (str[i] == '0' || str[i] == '1' || 
            res < 2 ) 
            res += (str[i]-'0'); 
  
        // Else multiply 
        else
            res *= (str[i]-'0'); 
    } 
  
    // Return maximum value 
    return res; 
} 
  
// Drivers code 
int main() 
{ 
    string str = "01891"; 
    cout << calcMaxValue(str); 
    return 0; 
} 