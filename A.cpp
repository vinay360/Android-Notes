#include <bits/stdc++.h> 
using namespace std;
int main() {
    string s;
    cin >> s;
    string ans1, ans2;
    ans1.push_back(s[0]);
    ans2.push_back(s[0]);
    int parity = (ans1[0]-'0')%2;
 	int i;
    for(i = 1;i < s.length();i++) {
    	char c = s[i];
    	if((c-'0') % 2 == parity) {
	    	break;
    	} else {
    		ans1.push_back(c);
    		ans2.push_back(c);
    	}
 		parity = !parity;
    }

    if(s[i] == '0') {
    	int temp = 1;
    	while(i < s.length()) {
    		ans1.push_back('0'+temp);
    		temp = !temp;
    		i++;
    	}
    	cout << ans1 << endl;
    } else if(s[i] == '9') {
    	int temp = 8;
    	while(i < s.length()) {
    		ans1.push_back('0'+temp);
    		temp = (temp == 8 ? 9 : 8);
    		i++;
    	}
    	cout << ans2 << endl;
    } else {
    	ans1.push_back(s[i]+1);
    	ans2.push_back(s[i++]-1);
    	int temp1 = (parity == 0 ? 1 : 0), temp2 = (parity == 0 ? 9 : 8);
    	while(i < s.length()) {
    		ans1.push_back('0'+temp1);
    		ans2.push_back('0'+temp2);
    		temp1 = !temp1;
    		temp2 = (temp2 == 8 ? 9 : 8);
    		i++;
    	}
    	if(abs(stoi(s)-stoi(ans1)) == abs(stoi(s)-stoi(ans2)))
    	cout << min(ans1,ans2) << " " << max(ans1,ans2) << endl; 
    	else {
    		cout << (abs(stoi(s)-stoi(ans1)) > abs(stoi(s)-stoi(ans2)) ? ans2 : ans1) << endl;;
    	}
    }
}
