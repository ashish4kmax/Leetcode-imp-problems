class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        int n = details.size();
        for(int i=0;i<n;i++) {
            string age; 
             age+=details[i].at(11);
             age+=details[i].at(12);
            //cout<<age<<endl;
            if(age>"60") count++;
        }
        
        return count;
    }
};
