class Solution {
public:
    bool hasAlternatingBits(int n) {
            // TC =  n SC = 1
        // // total set bit 
        // int temp = n;
        // int count = 0;
        // while (temp != 0) {
        //     count++;
        //     temp = temp >> 1;
        // }
        // // making the bit
        // int p1 = 0; // 1010
        // int p2 = 0; // 0101

        // for (int i = 0; i < count; i++) {

        //     p1 <<= 1;
        //     p2 <<= 1;

        //     if (i % 2 == 0) {
        //         p1 = p1 | 1;
        //     } else {
        //         p2 = p2 | 1;
        //     }
        // }

        // return (n == p1) || (n == p2);


        // // The optimal one is this 

        // TC 1 sc 1 
        long long  x = n ^ (n >> 1);

        return (x & (x + 1)) == 0;

    }
};