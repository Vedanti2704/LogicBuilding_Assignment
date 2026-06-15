//write a program to find the minimum of three number

class Logic
{
    void FindMin(int a,int b,int c)
    {
       if((a <= b) && (a <= c))
       {
        System.out.println( a +" is minimum  number");
       }
       else if((b <= a) && (b <= c))
        {
            System.out.println( b+" is minium number");
        }
        else
        {
            System.out.println(c +"is the minimun number");
        }
    
    }
}

class que84
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.FindMin(3,7,2);
    }
}