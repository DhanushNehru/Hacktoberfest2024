public class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        
        int start =  peakIndexInMountainArray(mountainArr);
        int ans1 = binarysearch(mountainArr, target, 0, start);
        if(ans1 != -1){
            return ans1;
        }
        else if(ans1 == -1){
        int ans2 = binarysearch2(mountainArr, target, start+1, mountainArr.length()-1);
        
        if( ans2 != -1){
            return ans2;
        }
        } 
        
        return -1; 
    }

    int binarysearch(MountainArray arr, int target, int start, int end){

        while(start <= end){
            int mid = start + (end- start)/2;

            if(target < arr.get(mid)){
                end = mid-1;

            }
            else if(target>arr.get(mid)){
                start = mid +1;
            }
            else{
                return mid;
            }
        }
        
        return -1;
    }
    int binarysearch2(MountainArray arr, int target, int start, int end){

        while(start <= end){
            int mid = start + (end- start)/2;

              if(target < arr.get(mid)){
                start = mid + 1;;

            }
            else if(target>arr.get(mid)){
                end = mid - 1;
            }
            else{
                return mid;
            }
        }
        
        return -1;
    }
    public int peakIndexInMountainArray(MountainArray arr) {
                int start =0;
        int end = arr.length()-1;

        while(start < end){
            int mid = start + (end- start)/2;

            if (arr.get(mid) > arr.get(mid+1)){
                end =mid;
            }

            else {
                start = mid +1;
            } 
        
        }
        return start;
    }
} 