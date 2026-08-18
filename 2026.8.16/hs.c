void swap();
int main()
{
    int a=5;
    int b=6;

    swap(a,b);
    {
        int a=0;
        printf("a=%d\n",a);
    }
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void swap(double a,double b)//应该是int
{
    
}