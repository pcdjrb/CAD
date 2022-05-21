#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <time.h>
#include <cmath>
#define n 32768

using namespace std;

int main(){
    int i = 0;
    int j = 0;
    //int n = 1000;
    double V[n];
    static int M[n][n];
	double c[n];
	clock_t tempo;
	
	cout << n << '\n';

    for(i = 0;i<n;i++){
        V[i] = rand();
        for(j=0;j<n;j++){
            M[i][j] = rand();
        }
    }
	
	tempo = clock();
	
	for(i=0; i<n;i++){
       for(j=0;j<n;j++){
          c[i] = c[i] + M[i][j] * V[j];
	   }
	}
		
	
	tempo = clock() - tempo;
	cout << tempo << '\n';
	
	
	
	tempo = clock();
	
	for (j=0;j<n;j++){
		for(i=0;i<n;i++){
			c[i] = c[i] + M[i][j]*V[j];
		}
	}
    
	tempo = clock()-tempo;
	cout << tempo;
	
	
	}
       //F:\Faculdade\nao sei c++>