
void print_cal(string d)
{
    int c=check_day(d);
    for(list<Month>::iterator it2=months.begin();it2!=months.end();it2++)
    {
        cout<<"\t--------------------------"<<it2->month<<"------------------------\n";
        cout<<"\t Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n";//printing the days.
        list<int>::iterator it3=it2->dates.begin();
        for(int k=0;k<7;k++)
        {
            for(int j=0;j<7;j++)
            {

                if(*it3==1)
                {
                    if(j<c)
                    {
                        cout<<"\t ";
                        continue;
                    }
                    cout<<"\t  "<<*it3;
                    it3++;
                }
                else
                {
                    if(it3==it2->dates.end())
                    {
                        c=j;
                        if(c>6){c=0;}
                        break;
                    }
                    else
                    {
                        if(*it3<=9)
                        {
                            cout<<"\t  "<<*it3;
                            it3++;
                            c=j;
                            if(c>=6){c=0;}
                        }
                        else
                        {
                            cout<<"\t "<<*it3;
                            it3++;
                            c=j;
                            if(c>=6){c=0;}
                        }
                    }
                }
            }
            cout<<endl;
            if(it3==it2->dates.end())
            {
                break;
            }
        }

    }
            cout<<endl;
}
