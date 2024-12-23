#include <stdio.h>

int main(){
    int n;
    FILE * f;
	f = fopen("output.bt01.txt","w");
    printf("Nhap n : ");
    scanf("%d", &n);
    printf("Gia tri n  ban vua nhap da dc luu vao o bt01.txt : %d\n", n);
    return 0;
}	
