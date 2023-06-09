class Solution{
public:
    int remove_duplicate(int arr[],int n){
          int i = 0;
          int xorr = arr[0];
          for (int j = 1; j < n; j++) {
            xorr ^= arr[j];
            if (xorr != 0) {
              i++;
              arr[i] = arr[j];
              xorr = arr[j];
            }
            else{
                xorr = arr[j];
            }
          }
          return i + 1;
    }
};
