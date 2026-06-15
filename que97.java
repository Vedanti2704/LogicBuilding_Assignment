// Write a program to print numbers from N down to 1 in reverse order


class Logic
{
    void PrintReverse(int num)
    {
        int i = num;

        while(i >= 1)
        {
            System.out.println(i);
            i--;
        }
    }
}

class que97
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.PrintReverse(10);
    }
}