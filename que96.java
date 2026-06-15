// Write a program to find the sum of even numbers up to N



class Logic
{
    void SumEvenNumber(int n)
    {
        int sum = 0;
        int i = 0;

        for( i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                sum = sum + i;
            }
        }

        System.out.println("Sum of even numbers is : " + sum);
    }
}

class que96
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.SumEvenNumber(10);
    }
}
