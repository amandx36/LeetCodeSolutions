class Solution {
public:
   int search(vector<int>& nums, int target)
 { 

        int n = nums.size() ;
        int first = 0 ;
        int last = n-1 ;
        while(first <=last){
            int mid = (last+first)/2 ;
            if (nums[mid]==target ) return mid ;

            // now check it brother the left side is sorted or not !!! 
            if (nums[first]<=nums[mid])
            {

                 // now check the element is present or not broooooo   !!!! 

                      if (nums[first]<=target && nums[mid] >= target )
                     {
                              last = mid - 1 ;

                      }

                       else 
                          {
                                     first =  mid + 1 ;
                             }

            }

            // now brother check the right part is sorted or not !!!  

            else 
            {
                    if (nums[mid] <= target && nums[last]>= target)
                    {
                        first =  mid + 1 ;
                    }
                    else {
                        last = mid - 1;
                    }
            }

        }


    return -1 ;

 }
                
};

