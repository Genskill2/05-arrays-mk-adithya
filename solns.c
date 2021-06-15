/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int len){
    int temp = 0;
    for (int i = 0; i <= len - 1; i++){
        if (arr[i] > temp){
            temp = arr[i];
        }
    }
    return temp;
}

int min(int arr[], int len){
    int temp = 1000000000;
    for (int i = 0; i <= len - 1; i++){
        if (arr[i] < temp){
            temp = arr[i];
        }
    }
    return temp;
}

float average(int arr[], int len){
    int sum = 0;
    float avg;
    for (int i = 0; i <= len - 1; i++){
        sum += arr[i];
    }
    avg = sum / len;
    return avg;
}

int mode(int arr[], int len){
    int temp = 0, result = 0, i, j;
    temp = max(arr, len);
    int counts[temp + 1];
    for (j = 0; j <= temp; j++){
        counts[j] = 0;
    }
    for (i = 0; i <= temp; i++){
        for (j = 0; j <= len - 1; j++){
            if (arr[j] == i){
                counts[i] += 1;
            }
        }
    }
    for (i = 0; i <= temp; i++){
        if (counts[i] > result){
            result = i;
        }
    }
    return result;
}

int factors(int n, int pf[]){
    int i = 0, j;
    while (n % 2 == 0){
        pf[i] = 2;
        n = n / 2;
        i++;
    }
    for (j = 3; j < n; j += 2){
        while (n % j == 0){
            pf[i] = j;
            n = n / j;
            i++;
        }
    }
    if (n > 2){
        pf[i] = n;
    }
    return i+1;
}

