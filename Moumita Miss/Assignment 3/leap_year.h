void calender(int y)
{
    string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(int i=0;i<12;i++)
    {
        if(i<=6)
        {
            if(i==1)
            {
                if(leap_year(y)==true){push_dates(arr[i],29);}
                else{push_dates(arr[i],28);}
            }
            if(i%2==0)
            {
                push_dates(arr[i],31);
            }
            else{push_dates(arr[i],30);}
        }
        else
        {
            if(i%2!=0)
            {
                push_dates(arr[i],31);
            }
            else{push_dates(arr[i],30);}
        }
    }

}
int main()
{
    int year;
    string day;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Starting day of the year: ";
    cin>>day;
    calender(year);

    return 0;
}
