
https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1


bool areIsomorphic(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return 0;
    }

    char seen[128] = {};

    for (int i = 0; i < str1.length(); i++)
    {
        char c = str1[i];

        if (!seen[c])
        {
            for (char s : seen)
            {
                if (s == str2[i])
                {
                    return false;
                }
            }
                seen[c] = str2[i];

        }
        else if (seen[c] != str2[i])
            return 0;
        
    }

    return 1;
}
