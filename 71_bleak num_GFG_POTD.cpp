
https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int is_bleak(int n)
{
    for(int i=n-30;i<=n;i++){
        if(i+countSetBits(i)==n) return 0;
    }
    return 1;
}
