//write a program to ffind the maximum of two number

class Logic
{
    void FindMax(int a,int b)
    {
       if(a > b)
       {
        System.out.println(" a is greater number");
       }
       else
        {
            System.out.println(" b is greater number");
       }

    
    }
}

class que83
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.FindMax(20,15);
    }
}