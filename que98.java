// Write a program to check whether a number is perfect number or not



class Logic
{
    void CheckPerfect(int num)
    {
        int sum = 0;
        int i = 1;    

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is Not a Perfect Number");
        }
    }
}

class que98
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CheckPerfect(6);
    }
}