//
//  vector_utils.c
//  zadanie 10.8
//
//  Created by Роман Безносенко on 18/11/2022.
//

#include "vector_utils.h"

int read_vector(int* tab, int size, int stop_value){
    if (size <= 0 || tab == NULL){
        return -1;
    }
    for (int i = 0; i < size; i++){
        if (scanf("%d", (tab + i)) != 1){
            return -2;
        }
        else if (*(tab + i) == stop_value){
            size = i;
            break;
        }
    }
    return size;
}

void display_vector(const int* tab, int size){
    if (size >= 1){
        for (int i = 0; i < size; i++){
            printf("%d ", *(tab + i));
        }
        printf("\n");
    }
}
