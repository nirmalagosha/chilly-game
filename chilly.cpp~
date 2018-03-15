#include<cstdlib>
#include<iostream>
using namespace std;
int main(){
int p1=0,p2=0;
int s=0;
int n=0;
cout<<"Choose the number of blue coins you want to play with: ";
cin>>n;
cout<<endl<<"\n\nWhich Player you want to be Player 1 or 2:";
	int num=0;
cin>>num;




if(num==2){
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
if(p2>3||p2==0){
cout<<"You can take atmost 3 and atleast 1"<<endl;
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
else{
/*p1//Human 
p2//Computer
*/
if(n%4==1){
int control=0;
s=0;//0->Human Win  1->Computer WIn
label:
cout<<"Enter your turn:";	
cin>>p1;
if(p1>3||p1==0){
goto label;
}

if(p1==1){
p2=1;
cout<<"Computer took:"<<p2<<endl;
n=n-p1-p2;
while(n>0){
cout<<"Remaining are:"<<n<<endl;
cout<<"Enter your turn:";
label1:
cin>>p1;
	if(p1>3||p1==0)
		goto label1;
s=0;
if(p1==3&&control==0){
	p2=1;
	cout<<"Computer took:"<<p2<<endl;
	s=1;
n=n-p1-p2;

continue;
}
if(control==0){
p2=4-p1-1;
  cout<<"Computer took:"<<p2<<endl;
n=n-p1-p2;
s=1;
control=1;
continue;}
p2=4-p1;
cout<<"Computer took:"<<p2<<endl;
n-=p1+p2;

}

if(s==1){
cout<<"You win";
}
else{
cout<<"YOu lose";
}

}
else{
	s=0;
if(p1==2)
{
	s=1;
	p2=3;}
if(p1==3)
{
	p2=2;
s=1;
}
cout<<"Computer took:"<<p2<<endl;
n=n-p1-p2;
	while(n>0){
		cout<<"Remaining are:"<<n<<endl;
	label12:	cout<<"Enter your turn:";
		s=0;
		
           cin>>p1;
		      if(p1>3||p1==0)
              goto label12;
		p2=4-p1;
		
		cout<<"Computer took:"<<p2<<endl;
	
		n=n-p1-p2;
		if(n>=0)
		s=1;



}
if(s==0)
	cout<<"You Win";
	else
	cout<<"You lose";
}



}
else if(n%4==2){
	
label18:
	cout<<"Enter Your turn:";
	cin>>p1;
	      if(p1>3||p1==0)
              goto label18;
	if(p1==1){
	p2=1;
	n-=p1+p2;
	while(n>0){
 cout<<"Remaining are:"<<n<<endl;
label100:
  cout<<"Enter your turn:";
 cin>>p1;
if(p1>3||p1==0)
              goto label100;
 p2=4-p1;

 cout<<"Computer took:"<<p2;

 n=n-p1-p2;
 
	}
	cout<<"You lose";
	
	}
	else if(p1==3){
		p2=3;
		n-=p1+p2;
        while(n>0){
 cout<<"Remaining are:"<<n<<endl;
 
label101:
 
  cout<<"Enter your turn:";
  cin>>p1;
       if(p1>3||p1==0)
              goto label101;
 p2=4-p1;

 cout<<"Computer took:"<<p2;

 n=n-p1-p2;

        }
        cout<<"You lose";
		
	}
	else if(p1==2){

		s=0;
	int control=0;
	p2=2;
	s=1;
	cout<<"Computer took:"<<p2<<endl;
	n-=p1+p2;
	while(n>0){
	s=0;	
cout<<"Remaining are:"<<n<<endl;

label2:
cout<<"Enter your turn:";
cin>>p1;
        if(p1>3||p1==0)
                goto label2;
s=0;
if(p1==2&&control==0){
        p2=3;
        cout<<"Computer took:"<<p2<<endl;
        s=1;
n=n-p1-p2;

continue;
}
if(control==0){
	if(p1!=1){
p2=4-p1-1;
  cout<<"Computer took:"<<p2<<endl;
n=n-p1-p2;
s=1;
control=1;}
	if(p1==1){
	p2=2;
	n-=p1+p2;
	}
continue;
	
	}
p2=4-p1;
cout<<"Computer took:"<<p2<<endl;
n-=p1+p2;
s=1;

}
if(s>0)
	cout<<"you win";
	else
	cout<<"u lose";
	
	}




}
else if(n%4==3){
label10:
	if(n>0){
label125:	cout<<"Enter your turn:";
		cin>>p1;
	      if(p1>3||p1==0)
              goto label125;
	
if(p1==1||p1==2){
p2=3-p1;
n-=p1+p2;
cout<<"Computer took:"<<p2<<endl;

        while(n>0){
 cout<<"Remaining are:"<<n<<endl;
 
label123:
  cout<<"Enter your turn:";
 cin>>p1;
       if(p1>3||p1==0)
              goto label123;
 p2=4-p1;

 cout<<"Computer took:"<<p2;

 n=n-p1-p2;

        }
        cout<<"You lose";
	exit(0);

}
else{
p2=1;
cout<<"Computer took:"<<p2<<endl;
n-=p1+p2;
cout<<"Remaining are:"<<n<<endl;
goto label10;

}}
cout<<"You Win";
}

 }
}

