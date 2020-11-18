int power(int x, int y){
    int i = 0;
    int ans = 1;

    for(i=0;i<y;i++){
        ans *= x;
    }

    return ans;

}