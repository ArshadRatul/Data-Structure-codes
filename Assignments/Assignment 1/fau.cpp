#include<iostream>
#include<stack>
using namespace std ;
stack<int> s ;
int temp=1 ;
void display(stack<int> s)
{
    cout << " The stack : " ;
    stack<int> b = s ;
    while(!b.empty())
    {
        cout << b.top() << "," ;
        b.pop();
    }
    cout<< "\b \n" ;
}
void arrangingStack( )
{
    int help=temp ;
    int helpingStack[help] ;
    int temp1=0 ;
    for (int i=0;i<help;i++){
        helpingStack[i]=s.top();
        s.pop() ;
    }
    for (int i=0;i<help;i++){
        for (int j=0;j<help;j++){
            if(helpingStack[j+1]>helpingStack[j]){
                temp1=helpingStack[j] ;
                helpingStack[j]=helpingStack[j+1];
                helpingStack[j+1]=temp1 ;
            }
        }
    }
    for (int k=0;k<help;k++){
        s.push(helpingStack[k]);
    }
    display(s) ;

}
void pushStack(int n)
{
    s.push(n);
    if(temp>1){
        arrangingStack() ;
    }
    else{display(s);}
    temp++;
}
int main()
{
    int x , input ;
    do
    {
        cout << "\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n Enter your choice : " ;
        cin >> x ;
        switch(x)
        {
        case 1:
            {
                cout << "\n Enter the value you want to push : " ;
                cin >> input ;
                pushStack(input) ;
                break ;
            }
        case 2 :
            {
                s.pop();
                break ;
            }
        case 3 :
            {
                display(s) ;
                break ;
            }
        case 4:
            {
                cout << "\n Thank you \n" ;
                break ;
            }
        default :
            {
                cout << "\n Invalid option try again \n" ;
            }
        }
    }
    while(x!=4);

    return 0 ;
}
