// Write a program to calculate power of a number using loops



class Logic
{
    void CalculatePower(int base , int exp)
    {
        int result = 1;
        int i = 0;

         for( i = 1; i <= exp; i++)
        {
            result = result * base;
            exp--;
        }

         System.out.println("Power is : " + result);
    }
}

class que95
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CalculatePower(2,5);
    }
}
