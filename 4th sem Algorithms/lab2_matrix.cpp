#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1,n2,m2;cin >>n1>>m1>>n2>>m2;
    
    int mat1[n1][m1], mat2[n2][m2];
    int sum[n1][m1];
    int pro[n1][m2];
    int tr[m1][n1];
    
    int cnts=0;

    cnts+=2;   // size of matrices
    int cntp=0; 
    cntp+=4; 
    int cntt=0;
    cntt+=2;

    
    /*  INPUT */
    for (int i = 0; i < n1; i++)
    {
        cnts++;
        for (int j = 0; j < m1; j++)
        {
            cnts++;
            cin >> mat1[i][j];
            cnts++;
        }
        cnts++;
    }
    cnts++;

    for (int i = 0; i < n1; i++)
    {
        cnts++;
        for (int j = 0; j < m1; j++)
        {
            cnts++;
            cin >> mat2[i][j];
            cnts++;
        }
        cnts++;
    }
    cnts++;


    /*CALCULATION OF SUM*/
    for (int i = 0; i < n1; i++)
    {
        cnts++;
        for (int j = 0; j < m1; j++)
        {
            cnts++;
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cnts++;
        }
        cnts++;
    }
    cnts++;

    /*PRINT SUM*/
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
           cout << sum[i][j] <<" ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << cnts << endl;
    cout << endl;
    cout << endl;


    /* CALCULATION OF PRODUCT */
	for (int i = 0; i < n1; i++) {
        cntp++;
		for (int j = 0; j < m2; j++) {
            cntp++;
			pro[i][j] = 0;
            cntp++;

			for (int k = 0; k < m2; k++) {
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
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << pro[i][j] << " ";
        }
        cout << endl;    
    }
    


    /* CALCULATION OF TRANSPOSE OF MATRIX*/

    for (int i = 0; i < n1; i++)
    {
        cntt++;
        for (int j = 0; j < m1; j++)
        {
            cntt++;
            tr[j][i] = mat1[i][j];
            cntt++;
        }
        cntt++;
    }
    cntt++;
    
    /* PRINT TRANSPOSE OF MATRIX */
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << tr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << cntt << endl;
    cout << endl;
    cout << endl;


    
    return 0;
}

