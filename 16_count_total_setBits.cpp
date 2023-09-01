
https://www.codingninjas.com/studio/problems/count-total-set-bits_784?leftPanelTab=1

int largestPowerof2inRange(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {

        x++;
    }
    return x - 1;
}
int countSetBits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int x = largestPowerof2inRange(n);
    int bitsupto2raisex = x * (1 << (x - 1)); //(1<<(x-1)) is 2 power x-1;
    int msbfrom2powerxton = n - (1 << x) + 1;
    int rest = n - (1 << x);
    int ans = bitsupto2raisex + msbfrom2powerxton + countSetBits(rest);
    return ans;
}
