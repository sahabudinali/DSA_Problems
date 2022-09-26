public class Main {
        static int first(int[] nums, int target){
        int low=0;
        int high=nums.length-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==0 || nums[mid-1]!=nums[mid]){
                    return mid;
                }else{
                    high=mid-1;
                }
                
            }
        }
        return -1;
        
    }
    static int second(int[] nums, int target){
        int low=0;
        int high=nums.length-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==nums.length-1 || nums[mid+1]!=nums[mid]){
                    return mid;
                }else{
                    low=mid+1;
                }
                
            }
        }
        return -1;
        
    }
    

    public static void main(String[] args) {
        int arr[]={4,8,8,12,5};
        int target=8;
        System.out.println("First Occurenece = "+ first(arr,target));
        System.out.println("Second Occurenece = "+ second(arr,target));
        
        
}
}