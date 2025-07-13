#include <iostream>
using namespace std;

// 递归 地板填补问题

void func(int x,int y,int gx,int gy,int l) {
    if(l == 1) return;
    
    if(gx <= x + l / 2 - 1 && gy <= y + l / 2 - 1) {
        // 公主在左上角
        cout << x + l / 2 << " " << y + l / 2 << " " << 1 << endl;
        func(x,y,gx,gy,l / 2);
        func(x,y + l / 2,x + l / 2 + 1,y + l / 2,l / 2);
        func(x + l / 2,y,x + l / 2,y + l / 2 - 1,l / 2);
        func(x + l / 2,y + l / 2,x + l / 2,y + l / 2,l / 2);
    } else if(gx <= x + l / 2 - 1 && gy >= y + l / 2){
        // 公主在右上角
        cout << x + l / 2 << " " << y + l / 2 - 1 << " " << 2 << endl;
        func(x,y,x + l / 2 - 1,y + l / 2 - 1,l / 2);
        func(x,y + l / 2,gx,gy,l / 2);
        func(x + l / 2,y,x + l / 2,y + l / 2 - 1,l / 2);
        func(x + l / 2,y + l / 2,x + l / 2,y + l / 2,l / 2);
    } else if(gx >= x + l / 2 && gy <= y + l / 2 - 1) {
        // 公主在左下角
        cout << x + l / 2 - 1 << " " << y + l / 2 << " " << 3 << endl;
        func(x,y,x + l / 2 - 1,y + l / 2 - 1,l / 2);
        func(x,y + l / 2,x + l / 2 + 1,y + l / 2,l / 2);
        func(x + l / 2,y,gx,gy,l / 2);
        func(x + l / 2,y + l / 2,x + l / 2,y + l / 2,l / 2);
    } else if(gx >= x + l / 2 && gy >= y + l / 2 ) {
        // 公主在右下角
        cout << x + l / 2 - 1 << " " << y + l / 2 - 1 << " " << 4 << endl;
        func(x,y,x + l / 2 - 1,y + l / 2 - 1,l / 2);
        func(x,y + l / 2,x + l / 2 + 1,y + l / 2,l / 2);
        func(x + l / 2,y,x + l / 2,y + l / 2 - 1,l / 2);
        func(x + l / 2,y + l / 2,gx,gy,l / 2);
    }
}

int main()
{
    int k,x,y;
    cin >> k >> x >> y;
    func(1,1,x,y,1 << k);
    return 0;
}