/**
 * 人见人爱 A^B
 * 求A^B的最后三位数表示的整数
 * (1<=A,B<=10000)
 * 
 * INPUT:
 * 多组测试用例，每个测试用例占一行
 * A B
 * if A==0 B==0 表示结束，不做处理
 * OUTPUT:
 * 输出A^B最后三位表示的整数，每个整数一行
 **/
#include <iostream>
using namespace std;

int main(){
    /**
     * 因为10000^10000位数过长 且 只要保留最后三位，而最后三位只与A的最后三位以及B有关
     * 所以在过程中，随时保证结果%1000即可得到后三位且不超过int表示范围
     **/ 
    int A=0,B=0;
    while (cin >> A >> B)
    {
        if (A == 0 && B == 0)
            break;
        int ans=1;
        while (B--)
        {
            ans = (ans*A)%1000;
        }
        cout << ans << endl;
    }
    return 0;
}