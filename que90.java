//write a program to check whether a number is positive ,negetive,or zero

class Logic
{
    void CheckSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Positive Number");
        }
        else if(num < 0)
        {
            System.out.println("Negative Number");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

class que90
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CheckSign(-8);
    }
}