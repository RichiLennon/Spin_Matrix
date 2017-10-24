//
//  main.cpp
//  Spin array 2
//
//  Created by Ricardo Martínez Arquieta on 08/02/17.
//  Copyright © 2017 Tec de Monterrey. All rights reserved.
//


#include <iostream>
using namespace std;

void arraysplit(int iArr[4][4],int Numero, int N)
{
    N=4;
    
    if (Numero >= 0) {
        if (Numero % 4==0)
        {
            for (int i=0; i<N; i++) {
                for (int j=0; j<N-1; j++) {
                    cout << iArr[i][j] << " ";
                }
                cout << iArr[i][N-1] << endl;
            }
        }
        if (Numero%4 ==1 ) {
            for (int i=0; i<N; i++){
                for (int j=N-1; j>0; j--){
                    cout << iArr[j][i] << " ";
                }
                cout  << iArr[0][i]<<endl;
            }
        }
        else
            if (Numero % 4 == 2) {
                for (int i=N-1; i>=0; i--){
                    for (int j=N-1; j>0; j--){
                        cout << iArr[i][j] << " ";
                    }
                    cout << iArr[i][0] << endl;
                }
            }
            else
                if (Numero%4 ==3) {
                    for (int i=N-1; i>=0; i--){
                        for (int j=0; j<N-1; j++){
                            cout << iArr[j][i] << " ";
                        }
                        cout << iArr[N-1][i] << endl;
                    }
                }
    }
    else
        if (Numero < 0) {
            if (Numero %4==-1) {
                for (int i=N-1; i>=0; i--){
                    for (int j=0; j<N-1; j++){
                        cout << iArr[j][i] << " ";
                    }
                    cout << iArr[N-1][i] << endl;
                }
            }
            else if (Numero % 4==-2)
            {
                for (int i=N-1; i>=0; i--){
                    for (int j=N-1; j>0; j--){
                        cout << iArr[i][j] << " ";
                    }
                    cout << iArr[i][N-1] << endl;
                }
            }
            else if (Numero % 4==-3)
            {
                for (int i=0; i<N; i++){
                    for (int j=N-1; j>0; j--){
                        cout << iArr[j][i] << " ";
                    }
                    cout  << iArr[0][i]<<endl;
                }
                
            }
        }
}

int main() {
    
    int iArray[4][4], i=0, j=0, Num, N=4;
    
    cin >> Num;
    
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            cin >> iArray[i][j];
        }
    }
    
    arraysplit(iArray, Num, N);
    
    return 0;
}
