//write a program to find sum of even number and odd digits seperately in a number

class Logic
{
    void SumEvenOddDigits(int num)
    {
        int digit = 0;
        int evenSum = 0;
        int oddSum = 0;

        while(num != 0)
        {
            digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum = evenSum + digit;
            }
            else
            {
                oddSum = oddSum + digit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits : " + evenSum);
        System.out.println("Sum of Odd Digits  : " + oddSum);
    }
}

class que89
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.SumEvenOddDigits(123456);
    }
}