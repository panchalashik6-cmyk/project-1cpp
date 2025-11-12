#include<iostream>
using namespace std;
class time{
    public:
    int hour;
    int minute;
    int second;

    void inputtime(int second){
        hour=second/3600;
        minute=(second%3600)/60;
         second=second%60;
         cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    void inputtime2(int hour, int minute, int second){
        second=hour*3600 + minute*60 +second;
        cout<<second<<endl;
    }

};
int main(){
    time t1;
    int number;
    cout<<" press 1 to Convert seconds to HH:MM:SS format"<<endl;
    cout<<" press 2 to convrt hh:mm:ss to seconds"<<endl;
    cin>>number;
    int sec,hr,min;
    if(number==1){
        cout<<"Enter seconds:"<<endl;
        cin>>sec;
        t1.inputtime(sec);  
    }
    else if(number==2){
        cout<<"Enter hours:"<<endl;
        cin>>hr;
        cout<<"Enter minutes:"<<endl;
        cin>>min; 
        cout<<"Enter seconds:"<<endl;
        cin>>sec;
        t1.inputtime2(hr,min,sec);
    }
    else{
        cout<<"Invalid input"<<endl;
    }
}