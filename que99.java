// Write a program to find the largest digit in a given number



class Logic
{
    void LargestDigit(int num)
    {
        int iDigit = 0;
        int iMax = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Largest digit is : " + iMax);
    }
}

class que99
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.LargestDigit(83429);
    }
}