#include<stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2) {
    
    int cx = (*x1 + *x2) / 2;
    int cy = (*y1 + *y2) / 2;

    int x1_shifted = *x1 - cx;
    int y1_shifted = *y1 - cy;
    int x2_shifted = *x2 - cx;
    int y2_shifted = *y2 - cy;

    int new_x1 = -y1_shifted + cx; 
    int new_y1 = x1_shifted + cy;
    int new_x2 = -y2_shifted + cx; 
    int new_y2 = x2_shifted + cy;

    *x1 = new_x1;
    *y1 = new_y1;
    *x2 = new_x2;
    *y2 = new_y2;
}

int main() {
    int xlt, ylt, xrb, yrb;

    scanf("%d %d %d %d", &xlt, &ylt, &xrb, &yrb); // 4 10 6 0

    rotateC(&xlt, &ylt, &xrb, &yrb);

    printf("%d %d %d %d\n", xlt, yrb, xrb, ylt);
    
    return 0;  
}

