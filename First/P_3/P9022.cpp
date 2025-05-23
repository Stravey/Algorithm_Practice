#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string ans = " ";
    char s1,s2,s3,s4,s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    if((s1 + s2) & 1 == 1) {
         ans = "left";
    } else {
        ans = "right";
    }
    while(s1 + s2 + s3 + s4 + s5 - 5 * '0' != 45) {
		if((s1-'0'+s2-'0') & 1){
			ans = "left";
			cout << ans << " " << s3 << s4 << s5 << endl;
		} else if(s1 - '0' + s2 - '0' != 0){
			ans = "right";
			cout << ans << " " << s3 << s4 << s5 << endl;
		} else{
			cout << ans << " " << s3 << s4 << s5 << endl;
		}
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
	}
    return 0;
}