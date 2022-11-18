//
//  main.c
//  zadanie 10.8
//
//  Created by Роман Безносенко on 18/11/2022.
//

#include <stdio.h>
#include "vector_utils.h"

int sort(int* tab, int size){
    if (size <= 0 || !tab || !size){
        return 1;
    }
    else{
        int change;
        for (int i = 0; i < size - 1; i++){
            for (int j = 0; j < size - 1; j++){
                if (*(tab + j) > *(tab + j + 1)){
                    change = *(tab + j);
                    *(tab + j) = *(tab + j + 1);
                    *(tab + j + 1) = change;
                }
            }
        }
    }
    return 0;
}

int main() {
    printf("Enter number:\n");
    int tab[100];
    int size = read_vector(tab, 100, -1);
    if (size == 0){
        printf("Not enough data available");
        return 3;
    }
    else if (size == -2){
        printf("Incorrect input");
        return 1;
    }
    else{
        sort(tab, size);
        display_vector(tab, size);
    }
    return 0;
}
