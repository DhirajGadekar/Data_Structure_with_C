

class Solution {
    static int binarysearch(int arr[], int n, int k) {
        int start = 0;
        int end = n - 1;
        while(start < end){

            int mid = start + (end - start)/2;
		
	    System.out.println(mid);
            if(arr[mid] == k){

                return mid;
            }else if(arr[mid] > k){

                end = mid - 1;
            }else if(arr[mid] < k){

                start  = mid + 1;
            }
        }
        return  -1;
    }
    public static void main(String[] args){

	int arr[] = {1,2 ,3 ,4 ,5 ,6 ,8 ,9 ,10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50 ,51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};

	int ret = binarysearch(arr,59,93);
	System.out.println(ret);
    }
}
