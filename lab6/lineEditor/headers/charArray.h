#ifndef CHARARRAY_H_INCLUDED
#define CHARARRAY_H_INCLUDED

void deleteElement(char arr[], int *len, int pos)
{
    for (int i = pos; i < *len; ++i)
    {
        arr[i] = arr[i + 1];
    }
    --(*len);
}

#endif // CHARARRAY_H_INCLUDED