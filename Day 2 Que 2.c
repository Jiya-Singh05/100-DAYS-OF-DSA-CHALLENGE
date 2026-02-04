int maxProfit(int* prices, int pricesSize) {
  if(pricesSize==0) return 0;
    int pro=0, initial=prices[0],current,diff;
    for(int i=0;i<pricesSize;i++) {
        current=prices[i];
        diff=current-initial;
        if(diff>pro) pro=diff;
        if(current<initial) initial=current; 
}
return pro;
}
