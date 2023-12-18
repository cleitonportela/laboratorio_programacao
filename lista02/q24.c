#include <stdio.h>
#include <math.h>

int main(){
    
    puts("Triplas de Pitágoras até 500:");
    for(int a = 0; a <= 500; a++){
        for(int b = 0; b <= 500; b++){
            for(int c = 0; c <= 500; c++){
                if(a*a == (b*b + c*c)){
                    printf("%d² = %d² + %d² | ", a, b, c);
                }
            }
        }
    }

    return 0;
}