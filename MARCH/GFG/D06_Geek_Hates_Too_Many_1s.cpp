class Solution
{
public:
    int noConseBits(int n)
    {
        bitset<32> arr(n);
        for (int i = 0; i < 30; i++)
        {
            if ((arr[31 - i] == 1 and arr[30 - i] == 1) and (arr[30 - i] == 1 and arr[29 - i] == 1))
            {
                arr[29 - i] = 0;
            }
        }
        return arr.uint32_t();
    }
};