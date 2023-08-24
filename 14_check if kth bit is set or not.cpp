
https://www.codingninjas.com/studio/problems/check-whether-k-th-bit-is-set-or-not_5026446?leftPanelTab=1

bool isKthBitSet(int n, int k)
{
    int t=(n>>(k-1))&1;
    if(t) return 1;
    else return 0;
}
