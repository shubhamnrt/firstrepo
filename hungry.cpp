#include<bits/stdc++.h>
using namespace std;

int main(){
	string hungry;
	cout<<"are you hungry "; 
	cin>>hungry;
	if(hungry=="yes"){
		cout<<"eat samosa"<<endl;
		cout<<"eat pizza"<<endl;
		cout<<"eat burger"<<endl;
	}
	else{
		cout<<"are you thirsty ";
		string thirsty;
		cin>>thirsty;
		if(thirsty=="yes"){
			cout<<"drink water"<<endl;
			cout<<"drink soda"<<endl;
		}
	}
	return 0;
}
