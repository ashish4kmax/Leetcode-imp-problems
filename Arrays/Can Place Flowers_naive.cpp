class Solution {
public:
    bool isvalid(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0;i<flowerbed.size();i++) {
            if(flowerbed[i]==0) {
                count++;
            }
        }
        if(count==flowerbed.size()) {
            return true;
        }
        else {
            return false;
        }
    }

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(isvalid(flowerbed,n)) {
            if(flowerbed.size()%2==0) {
                int ans=flowerbed.size()/2;
                if(n<=ans) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                int ans=flowerbed.size()/2+1;
                if(n<=ans) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }   
        else {
            int index=0;
            int count=0;
            for(int i=0;i<flowerbed.size();i++) {
                if(flowerbed[i]==0) {
                    count++;
                    index++;
                }
                else {
                    break;
                }
            }

            int ans=(count/2);
            count=0;
            for(int i=index+1;i<flowerbed.size();i++) {
                if(flowerbed[i]==0) {
                    count++;
                }
                else {
                    ans+=(count-1)/2;
                    count=0;
                }
            }
            ans+=(count/2);
            if(n<=ans) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};
