#include<bits/stdc++.h>
using namespace std; 
int main(){
	string s; 
	string input;
	string line;

	while (getline(cin, line)){
    if (line == "\n"){
		break;
    }
    input.push_back('+');
    input += line;
	}

	s= input; 
	for(int i=1; i<s.size(); i++){
		if(s[i] == '/' and s[i-1] == '/'){
			i+=1; 
			while(s[i]!='+'){
				i++; 
			}

			continue; 
		}
		else if(s[i] =='*' and s[i-1] == '/' ){
			i+=2;
			while(s[i-1] != '*' and s[i] != '/'){
				i++; 
			}

			i+=2; 
			continue;
		}
		if(s[i] == '+'){
			cout<<endl; 
			i++;
		}
		if(s[i]!='/' and s[i]!='*'){cout<<s[i];}
	}
	return 0; 
}