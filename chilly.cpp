#include<iostream>
using namespace std;
int main(){
int p1=0,p2=0;
int s=0;
int n=0;
cin>>n;
cout<<"I am Player 1...."<<endl;
cout<<"U are Player2...."<<endl;
p1=n%4;
if(p1==0)
	p1=1;
n=n-p1;
s=0;
cout<<"Computer took:"<<p1<<endl;
while(n>0){
cout<<"Remaining:"<<n<<endl;
	cout<<"Your turn and you can take atmost 3 &enter ur take:";

cin>>p2;
if(p2>3){
cout<<"You can take atmost 3"<<endl;
continue;
}
n=n-p2;
s=0;
p1=4-p2;
if(p1<=n){
cout<<"Computer took: "<<p1<<endl;
n-=p1;
s=1;
}
else{
n=n+p2;	
	p1=n-p2;
	if(p1>0){
cout<<"Computer took:"<<p1<<endl;;

	s=1;
	}
	break;
}
}
if(s==1)
cout<<"You lose";
else
cout<<"You Win";
}

