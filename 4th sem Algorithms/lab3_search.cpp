// Q.1 Analysis of time complexity of matrix multiplication of n*n
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 int cntp =0;
 int pro [n][n];
 int mat1[n][n], mat2[n][n];

 /*  INPUT */
    for (int i = 0; i < n; i++)
    {
        cntp++;
        for (int j = 0; j < n; j++)
        {
            cntp++;
            cin >> mat1[i][j];
            cntp++;
        }
        cntp++;
    }
    cntp++;

    for (int i = 0; i < n; i++)
    {
        cntp++;
        for (int j = 0; j < n; j++)
        {
            cntp++;
            cin >> mat2[i][j];
            cntp++;
        }
        cntp++;
    }
    cntp++;

/* CALCULATION OF PRODUCT */
	for (int i = 0; i < n; i++) {
        cntp++;
		for (int j = 0; j < n; j++) {
            cntp++;
			pro[i][j] = 0;
            cntp++;

			for (int k = 0; k < n; k++) {
                cntp++;
				pro[i][j] += mat1[i][k] * mat2[k][j];
                cntp++;
			}		
            cntp++;	
		}
        cntp++;
	}
    cntp++;

    cout << endl;
    cout << endl;
    cout << cntp << endl;
    cout << endl;
    cout << endl;

    /* PRINT MULTIPLICATION */  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << pro[i][j] << " ";
        }
        cout << endl;    
    }
    
    return 0;
}

// // Q.2 Implement Recursive Binary search and Linear search and determine the time taken to search an element

#include<bits/stdc++.h>
using namespace std;
int recursive_binary_search(int a[], int low, int high, int k)
{
    // TC = Olog(n) & AS = O(log(n)) // recursion requires additional space to store the function calls.
    int mid = (low + high) / 2;
    if (a[mid] == k)
        return mid;
    else if (a[mid] > k)
        recursive_binary_search(a, low, mid - 1, k);
    else
        recursive_binary_search(a, mid + 1, high, k);
}

bool linear_search(vector<int> v, int k){
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==k)
        return true;
    }
    return false ;
}
int main(){

    return 0;
}

// // Q. 3 Write a program to determine if a given matrix is a sparse matrix. Calculate its time and Space complexity. How it is more efficient than the conventional matrix?

#include<bits/stdc++.h>
using namespace std;
int main(){
       int m,n; 
       cin >> m,n;
       int mat[m][n];
       int cnt =0;
       for (int i = 0; i < m; i++)
       {
        for (int i = 0; i < n; i++)
        {
            cin >> mat[i][j];
            if (mat[i][j]==0)
            cnt++;
        }
       }
       if(cnt >= (m*n)/2)
       cout << "Yes, the matrix is sparse\n";
       else 
       cout << "No, the matrix is not sparse\n";
       

       /* 
       Time complexity of above program is O(m*n);
       and space complexity is O(1);


       Ofcourse Sparse matrix is better than the conventional matrix because 
       it takes less space then the conventional matrix.
       */
    return 0;
}


