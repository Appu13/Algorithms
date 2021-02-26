/*
Given a list of integers, determine whether the sum of its elements is odd or even.

Give your answer as a string matching "odd" or "even".

If the input array is empty consider it as: [0] (array with a zero).

*/

# include<string>
# include<vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    // intialze the sum variable
    int sum = 0;

    // Iterate through the vector
    for(auto& it: arr)
    {
        // Add values to sum
        sum +=it;
    }

    if (sum % 2 == 0)
        return "even";
    else
        return "odd";
}