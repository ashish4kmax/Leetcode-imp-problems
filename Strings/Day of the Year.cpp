class Solution {
public:
    int dayOfYear(string date) {
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int y = stoi(date.substr(0, 4)), m = stoi(date.substr(5, 2)), d = stoi(date.substr(8));
    int ans=0;
    cout<<d<<endl;
    int temp=m;
    temp--;
    if((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) && (m>=3) ){
        ans+=1;
    }
    while(temp!=0){
    if(temp==0){
        break;
    }
    else if(temp==1){
        ans+=31;
        temp--;
    }
    else if(temp==2){
        ans+=28;
        temp--;
    }
    else if(temp==3){
        ans+=31;
        temp--;
    }
    else if(temp==4){
        ans+=30;
        temp--;
    }
    else if(temp==5){
        ans+=31;
        temp--;
    }
    else if(temp==6){
        ans+=30;
        temp--;
    }
    else if(temp==7){
        ans+=31;
        temp--;
    }
    else if(temp==8){
        ans+=31;
        temp--;
    }
    else if(temp==9){
        ans+=30;
        temp--;
    }
    else if(temp==10){
        ans+=31;
        temp--;
    }
    else if(temp==11){
        ans+=30;
        temp--;
    }
    
    }
    ans+=d;
    return ans;
    }
};
