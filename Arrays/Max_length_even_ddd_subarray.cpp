class solution {
   public:
        int even_odd(vector<int>& arr) {
          int n = arr.size();
          int count=0;
          int res=0;

          for(int i=0; i<n-1 ; i++) {
              if( (arr[i]%2==0 && arr[i+1]%2==0) || (arr[i]%2!=0 && arr[i+1]%2!=0) ) {
                  res = 1;
                  count=0;
              }
              else if( (arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0) ) {
                  count++;
                  res = max(res,count);
              }
          }

          return count+1;
    }
};
