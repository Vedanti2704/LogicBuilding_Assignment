//write a program to check whether number is prime or not

class Logic
{
    void CheckPrime(int num)
    {
        boolean flag = true;

        if(num <= 1)
        {
            flag = false;
        }
        else
        {
            for(int i = 2; i <= num / 2; i++)
            {
                if(num % i == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            System.out.println(num + " is a Prime Number");
        }
        else
        {
            System.out.println(num + " is Not a Prime Number");
        }
    }
}

class que86
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CheckPrime(13);
    }
}