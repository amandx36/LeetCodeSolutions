class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        // METHOD :)    01  my Approach tc 0(n squre )

        // if(s.size()==0) return 0;
        // int satisfaction = 0 ;
        // sort(g.begin(),g.end());
        // sort(s.begin(),s.end());
        // vector<bool>visited(s.size(),false);
        // for(int i = 0 ; i < g.size();i++){
        //     for(int j = 0  ;  j < s.size();j++){
        //         if(!visited[j] && g[i]<=s[j]){
        //             visited[j] = true;
        //             satisfaction++;
        //             break;
        //         }
        //     }
        // }
        // return satisfaction;

        // Method 2 using greedy         TC :)      nlogn

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0 ;  // for children
        int j = 0;  // for cookies 
        int count  = 0 ; 
        while(i < g.size() and j<s.size()){
            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }
            // cookies too small discard it dude 
            else 
            j++;
        }
        return count ;
    }
};