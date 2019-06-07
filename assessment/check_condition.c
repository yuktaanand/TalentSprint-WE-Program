#include <stdio.h>
#include<math.h>
#define upper_limit_for_a 400
#define upper_limit_for_b 400

int find_square_root(int square){
    int num = sqrt(square);
    if (num * num == square)
        return square;
}
int check_condition(){
    int counter = 0;

    for (int a = 1 ; a <= upper_limit_for_a ; a++){
        for (int b = 1 ; b <= upper_limit_for_b ; b++){

            int addition=pow(a,3) + pow(b,3);

                if (pow(a,3) + pow(b,3) == find_square_root(addition)){

                        printf("%d %d %d \n",a, b, sqrt(addition));
                        counter++;
                        break;
                    }
                }if(counter == 10)
                break;
            }

}

int main(){
    check_condition();

}
