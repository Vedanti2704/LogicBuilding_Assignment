// Write a program to find the smallest digit in a given number


class Logic
{
    void SmallestDigit(int num)
    {
        int iDigit = 0;
        int iMin = 9;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            num = num / 10;
        }

        System.out.println("smallest digit is : " + iMin);
    }
}

class que99
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.SmallestDigit(45872);
    }
}