
https://www.codingninjas.com/studio/problems/set-the-rightmost-unset-bit_8160456?leftPanelTab=1

int setBits(int n){
    int k=n, c=0;
    while(k!=0){
        if(k&1){
            c++;
        }
        else{
            n=(n|(1<<c));
            break;
        }
        k=k>>1;
    }
    return n;
}
