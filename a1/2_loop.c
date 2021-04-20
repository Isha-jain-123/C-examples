int main(){
    int a;
    printf("Enter the 4 digit number\n");
    scanf("%d",&a);
    int b=a;
    printf("The reversed number is\n");
    while (a>0){
        if (!(a%10==0)){
            printf("%d",a%10);    
        }
        a=a/10;
        if (a==0){
            break;
        }    
    }
    if (b%10==0){
        printf("\nInvalid");
    }
    else{
        printf("\nValid");
    }
        
    return 0;
}