int binaryToDecimal(int n){
    int ans=0,p=0;
    while(n>0){
        int dig=n%10;
        if(dig==1 || dig==0){
            ans=ans+dig*pow(2,p);
            n=n/10;
            p++;    
        }
        else{
            cout<<"Given number is not a Binary Number."<<endl;
            return 0;
        }
    }
    cout<<ans;
    return ans;
}

int main(){
    cout<<"Enter the Bianry Number for conversion into decimal : ";
    int n;
    cin>>n;
    int bin=binaryToDecimal(n);
}
