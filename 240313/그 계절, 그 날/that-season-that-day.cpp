bool isYoon(int n){
    if(n%4==0)
    return true;
    if(n%100!=0)
    return true;
    if(n%400==0)
    return true;
    return false;
}

int main(){
    int y,m,d;
    cin>>y>>m>>d;
    
}