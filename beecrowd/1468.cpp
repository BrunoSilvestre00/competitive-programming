#include <bits/stdc++.h>

#define ASC   1
#define EQ    0
#define DESC -1

using namespace std;

typedef struct{
    int x1, y1, x2, y2;
    int tipo;
} Barra;

bool colisao(int x, int y, Barra barra){

    if(barra.x1 > x || barra.x2 < x) return false;

    //Achar função da reta y = m.(x-x0) + y0
    int y0, x0;
    float m;
    m = (barra.y1-barra.y2)/(barra.x1-barra.x2);
    if (y == m*(x-barra.x1)+barra.y1) return true;

    return false;
}

int main(){
    Barra barra;
    barra
}

int main_2(){

    int n, c, i;
    cin >> n >> c;
    vector<Barra> barras;

    int y_max = 0, x_min = 1000000, x_max = 0;

    for(i = 0; i < n; i++){
        Barra barra;
        cin >> barra.x1 >> barra.y1 >> barra.x2 >> barra.y2;

        if(barra.x1 > barra.x2){
            if(barra.x1 > x_max) x_max = barra.x1;
            if(barra.x1 < x_min) x_min = barra.x1;
        }else{
            if(barra.x2 > x_max) x_max = barra.x2;
            if(barra.x2 < x_min) x_min = barra.x2;
        }

        if(barra.y1 > barra.y2){
            if(barra.y1 > y_max) y_max = barra.y1;
            barra.tipo = DESC;
        }else {
            if(barra.y2 > y_max) y_max = barra.y2;

            if(barra.y1 < barra.y2){
                barra.tipo = ASC;
            }else{
                barra.tipo = EQ;
            }
        }

        barras.push_back(barra);
    }
    y_max++;

    for(i = 0; i < c; i++){
        int x_atual, y_atual = 0;
        bool subindo = true;

        cin << x_atual;

        while(subindo){




        }


    return 0;
}








