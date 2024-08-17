// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

// pascal triangle :
//                       1
//                     1   1
//                    1  2  1
//                   1 3  3  1

// Variation 1:

#include <bits/stdc++.h>
using namespace std;

int nCr(int n , int r){
    long long res = 1 ;

    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res / (i+1); 
    }
    return res;
}

int pascaltriangle(int r , int c){
    int element = nCr(r-1 , c-1);
    return element ;
}
int main(){
    int r = 5;
    int c = 3;
    int element = pascaltriangle(r, c);
    cout<< "The element is "<< element << endl;


    
    return 0;
}

// Variation 2:
#include <bits/stdc++.h>
using namespace std;

int wholerow(int n){
    long long ans = 1 ;
    cout << ans <<" ";

    for(int i=1; i<n; i++){
        ans = ans * (n-i);
        ans = ans / i;
        cout<<ans<<" " ;
    }
}

int main(){
    int r = 5 ;
    wholerow(r);

    return 0 ;

}

// Variation 3:
#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int n){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int i = 1; i < n; i++){
        ans = ans * (n-i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int> > pascalTri(int n){
    vector<vector<int>> ans ;

    for(int i = 1; i < n; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main(){
    int n = 5; 
    vector<vector<int>> ans = pascalTri(n);
    for(auto it :ans){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout<<endl;
    }

}
