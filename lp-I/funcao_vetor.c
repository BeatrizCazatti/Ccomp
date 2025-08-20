#include <stdio.h>

void le_vetor(int v[], n){
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

int main () {
    int n=0;
    
    scanf("%d", &n);
    int v1[n], v2[n];
    
    int *v = &v1;
    le_vetor(v, n);
    
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        v2[i] = num;
    }

    for(int i = 0; i < n; i++){
        printf("%d", v1[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d", v2[i]);
    }

	return 0;
}
