// Write a program to print each digit of a number separately


class Logic
{
    void PrintDigits(int num)
    {
        while(num != 0)
        {
            int digit = num % 10;
            System.out.println(digit);
            num = num / 10;
        }
    }
}

class que94
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.PrintDigits(9876);
    }
}
