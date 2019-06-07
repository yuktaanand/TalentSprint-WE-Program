#include <bits/stdc++.h>
#define upper_limit_for_a 400
#define upper_limit_for_b 400
using namespace std;

int find_square_root(int square){
    int num = sqrt(square);
    if (num * num == square)
        return square;
}
int check_condition(){
    set < int > occurance;

    int counter = 0;

    for (int a = 1 ; a <= upper_limit_for_a ; a++){
        for (int b = 1 ; b <= upper_limit_for_b ; b++){

            int addition=pow(a,3) + pow(b,3);

                if (pow(a,3) + pow(b,3) == find_square_root(addition)){

                    if(occurance.find(sqrt(addition)) == occurance.end()){

                        cout << a << " " << b << " " << sqrt(addition) << endl;
                        occurance.insert(sqrt(addition));
                        counter++;
                        break;
                    }
                }
            }
             if(counter == 10)
                break;
        }

}

int main(){


    check_condition();

}
