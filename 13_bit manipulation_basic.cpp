
//https://www.codingninjas.com/studio/problems/bit-manipulation_8142533


vector<int> bitManipulation(int num, int i){

   vector<int>bitAns;

 

   bitAns.push_back((num>>(i-1))&1);//get bit at ith position

   bitAns.push_back(num|1<<(i-1));//set bit at ith position

   bitAns.push_back(num & ~(1<<(i-1)));//clear bit at ith position

 

   return bitAns;   

 

}
