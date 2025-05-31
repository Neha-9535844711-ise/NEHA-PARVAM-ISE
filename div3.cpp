 #include<iostream>
 using namespace std; 
 class Linear{
    private:
    int a[10],loc,i,flag,key;
    public:
    void get_data()
    {
        cout<<"enter the elements of the array:"<<endl;

        for(i=0;i<10;i++)
        cin>>a[i];
     cout<<"enter the element to be searched :"<<endl;
        cin>>key;
         
}
void  search(){
    flag=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
        loc=i;
        flag=1;
       break;
    }
    }
    if (flag==1){
        cout<<"found at"<<loc;
    }
else{
    cout<<"not found";
}
}
};

 int main(){
Linear obj;
obj.get_data();
obj.search();
return 0;
 }