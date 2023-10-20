

https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1

class Solution
{
public:
    int convert(int num){
        int c1=0;
        while(num>0){
            int l=num%10;
            c1+=l;
            num=num/10;
        }
        return c1;
    }
    int isPossible(int n, int arr[])
    {
        int c=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]<10)
            {
                c += arr[i];
            }
            else{
                int x=convert(arr[i]);
                c+=x;
            }
        }
        if(c%3==0) return 1;
        else return 0;
    }
};
