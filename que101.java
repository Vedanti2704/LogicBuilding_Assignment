// Write a program to calculate the product of digits of a number



class Logic
{
    void ProductOfDigits(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Product of digits is : " + iMult);
    }
}

class que101
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.ProductOfDigits(234);
    }
}
