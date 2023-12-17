#include <iostream>

using namespace std;

void error(){
cout<<"Does not match with any string"<<endl;
}

int main(){

string a;
cin>>a;

if(a.length()==1) {
if(a=="a"){
cout<<"Matches with String 'a'"<<endl;
}else if(a=="b"){
cout<<"Matches with String 'a*b+'"<<endl;
}else{
error();
return 0;
}
}else {

int i=0;
int ctr_a=0;
while(a[i]=='a'){
ctr_a++;
i++;
}

int ctr_b=0;

while(a[i]=='b') {
ctr_b++;
i++;
}

if(ctr_b>=1 && (ctr_a+ctr_b)==a.length()){
if(a=="abb"){
cout<<"Matches with String 'abb' and 'a*b+'"<<endl;
}else{
cout<<"Matches with String 'a*b+'"<<endl;
}
}else{
error();
}
}
return 0;
}