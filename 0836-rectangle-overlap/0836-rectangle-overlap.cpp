class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int r1 = rec1[0] ;
        int r2 = rec1[1] ; 
        int r3 = rec1[2] ;
        int r4 = rec1[3] ;

        int y1 = rec2[0];
        int y2 = rec2[1];
        int y3 = rec2[2];
        int y4 = rec2[3];

        if(((y1<r3 )and (y3 > r1 ))and ((r4 > y2) and (y4 > r2 ))) return true ;
        return false ;
        

    
    }
};