//
//  main.cpp
//  202203040721
//
//  Created by jujube on 2022/3/4.
//

//#include <iostream>
//using namespace std;
//int main() {
//    int a,b;
//    while(cin >> a >> b)// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
//        cout << a+b << endl;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    while (cin >> a >> b) { // 注意 while 处理多个 case
//        cout << a + b << endl;
//    }
//}
//// 64 位输出请用 printf("%lld")


#include <iostream>
#include <cstdio>

using namespace std;
//
//int main(){
//    //freopen("1.in","r",stdin);
//    int n,ans = 0;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            int x; scanf("%d",&x);
//            ans += x;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int n,a,b;
//    int sum = 0;
//    cin >> n;
//    for(int i = 0; i < n; i++) {
//        cin >> a >> b;
//        int s = (2+(a-2)*b)*(b+1)/2;
//        sum += s;
//    }
//
//    printf("%d\n", sum);
//    return 0;
//}

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    int sum = 0;
//    if (n==3) {
//        n = 1;
//    }
//    printf("%d", n);
//    return 0;
//}

#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    char a[4][4];
    int b[4][4];
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%c", &a[i][j]);
            b[i][j] = 0;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(a[i][j] != '.') {
                b[i][j] = a[i][j] -'0';
            }
        }
    }
    // && (i != 3 || j !=3 || i != 0 || j != 0)
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(b[i][j] != 0 ) {
                //搜索(i,j)附近的值来确定（i，j）附近的雷的位置，
                // 先将a数组有数值附近的值全部变成x，然后验证正确性，不正确则进行下一次的，穷举
                // 直到符合要求
                if (a[i-1][j] && a[i-1][j]) {
                    a[i-1][j] = 'X';
                }
            }
        }
    }

// 结果输出 a[i][j],即是所要的结果
    
    return 0;
}
