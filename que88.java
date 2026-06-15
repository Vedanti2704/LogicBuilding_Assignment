//write a program to print all odd numbers up to n

class Logic
{
    void PrintOddNumber (int num)
    {
         for(int i = 1; i <= num; i++)
        {
            if(i % 2 != 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

class que88
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.PrintOddNumber(13);
    }
}