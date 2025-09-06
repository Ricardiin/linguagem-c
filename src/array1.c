#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int valores[5] = {10,56,30,10,1};
    int rs = 0;
    for (int i = 0 ; i <= 4 ; i++ ){
        rs += valores[i];

}
    printf("O resultado é %d\n",rs);
    return 0;
}