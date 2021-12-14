template <typename A> //T is a name, it could be anything (rule: captial letter + (numbers))

A maximum(A value1, A value2, A value3)
{
    A maximumValue{value1};

    if (value2 > maximumValue)
    {
        maximumValue = value2;
    }

    if (value3 > maximumValue)
    {
        maximumValue = value3;
    }

    return maximumValue;
}
