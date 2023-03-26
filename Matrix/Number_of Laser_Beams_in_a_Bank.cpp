class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser=0;
        int j=1;

        vector<int>vals;

        int freq=0; 
        string temp=bank[0]; 
        for(int i=0;i<bank.size();i++) { 
            temp = bank[i]; 
            freq = count(temp.begin(),temp.end(),'1'); 
            vals.push_back(freq); 
        }

        int count=0;
        for(int i=0;i<vals.size();i++) {
            if(vals[i]==0) {
                count++;
            }
        }

        if(count==0) {
            for(int i=0;i<vals.size()-1;) {
                laser+=vals[i]*vals[j];
                if(laser!=0) {
                    i++;
                    j++;
                }
            }
            return laser;
        }
        else {
            for(int i=0;i<vals.size(),j<vals.size();) {
                if(vals[i]==0) {
                    i++;
                    j++;
                }
                else if(vals[j]==0) {
                    j++;
                }
                else {
                    laser+=vals[i]*vals[j];
                    i=j;
                    j++;
                }
            }
            //cout<<vals.size()<<endl;
            return laser;
        }
        
        
    }
};
