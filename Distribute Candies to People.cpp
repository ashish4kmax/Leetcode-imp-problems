class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>distribute;
        int i=1;
        int s = ((num_people)*(num_people+1))/2;
        // Now to distribute candies we use this concept that is if num_people sum series s if s<=candies than all the people will get candies > 0 distributed .
        if(s<=candies) {
            while(i<=num_people) {
                distribute.push_back(i);
                candies-=i;
                i++;
            }
            int j=0;
            while(i<=candies) {
                distribute[j%num_people]+=i;
                candies-=i;
                i++;
                j++;
            }
            distribute[j%num_people] += candies;
        }
        // Whereas if its less then some people won't get candies as there would be no candies left to distribute to left out people.
        else {
            int j=0;
            while(i<=candies) {
                distribute.push_back(i);
                candies-=i;
                i++;
                j++;
            }
            distribute.push_back(candies);
            // Here we see all the candies are distributed and candies left = 0 so no candies are distributed to the left out people.
            while(j<num_people-1) {
                distribute.push_back(0);
                j++;
            }
        }

        return distribute;
    }
};
