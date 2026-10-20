#include <stdio.h>

int main(void) {
    /* 課題0405: 車輪型ロボットを考える．車輪の半径をr/2[m]とする．このロボットを距離x[m]だけ走らせたい時，
     どれだけモーターを回転させればよいか，回転角度a [度]を求めるプログラムを作成せよ．ただし，
						    r=4;
						    円周率=3.141592
     とする．また，xの値はキーボードからdoubleとして入力するものとする．
     これらの値すべてをdouble型として計算した計算結果のa(桁数指定なし)を表示するようなプログラムとせよ．
     */
    


     
    return 0;
}

#include <stdio.h>

int main(void) {
    double x;
    double angle;

    scanf("%lf", &x);
    angle = x / (3.141592 * 4) * 360;
    printf("%f\n", angle);

    return 0;
}