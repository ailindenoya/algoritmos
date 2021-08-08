#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void revertir (int vector[], int dimension){

    int ultimo = (dimension-1); 
    int medio = (dimension/2);
    int i; 
    int temporal; 
    for (i =0; i <= medio; i++){
        temporal = vector[i]; 
        vector[i] = vector[ultimo]; 
        vector[ultimo] = temporal;
        ultimo--; 
    }

}

void transpuesta (int vector[][5], int dimension){
int temporaldei; 
int i, j; 
for (i=0; i<dimension;i++){
    for (j=0; j<dimension && i!=j; j++){   
       temporaldei = vector[i][j];   
       vector[i][j] = vector[j][i];
       vector[j][i] = temporaldei; 

                        
        }   
    }

}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};


    cout << " ===== vector original ======"  << endl; 
    mostrarvec(vec5,dim5);

    cout << " ===== vector revertido ======"  << endl;
    revertir(vec5,dim5);
    mostrarvec(vec5,dim5);

    cout << " ===== vector original ======"  << endl; 
    mostrarvec(vec10,dim10);
    
    cout << " ===== vector revertido ======"  << endl;
    revertir(vec10,dim10);
    mostrarvec(vec10,dim10);

    cout << "===== matriz original =======" << endl;  
    mostrarmat(matriz,dim5); 
    transpuesta(matriz,dim5);

    cout << "===== matriz transpuesta =======" << endl;
    mostrarmat(matriz,dim5); 

    
    return 0;
}