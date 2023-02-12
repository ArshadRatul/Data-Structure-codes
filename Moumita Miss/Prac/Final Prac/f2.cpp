void ad(int a)
{
    node* h3=get_head3();
    while(h3!=NULL)
    {
        if(h3->value==a){return}
    }
    tail3->next=h3;
    tail3=tail3->next
}
void print_common()
{
    node* h=get_head3();
    while(h!=NULL)
    {
        cout<<h->value<<" ";
    }
}

void common(node* h1,node* h2)
{
    while(h1!=NULL)
    {
        while(h2!=NULL)
        {
            if(h1->value==h2->value)
            {
                ad(h1->value);
            }
            h1=h1->next;
        }
        h2=h2->next;
    }
    print_common();
}
