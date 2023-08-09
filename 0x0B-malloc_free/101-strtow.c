#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
    int word_count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (!in_word)
            {
                in_word = 1;
                word_count++;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return word_count;
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int word_count = count_words(str);
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_start = 0, word_end = 0, index = 0;

    while (str[word_start] != '\0')
    {
        while (str[word_start] == ' ')
            word_start++;

        word_end = word_start;
        while (str[word_end] != ' ' && str[word_end] != '\0')
            word_end++;

        words[index] = (char *)malloc((word_end - word_start + 1) * sizeof(char));
        if (words[index] == NULL)
        {
            for (int i = 0; i < index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        int j = 0;
        for (int i = word_start; i < word_end; i++)
        {
            words[index][j] = str[i];
            j++;
        }
        words[index][j] = '\0';

        word_start = word_end + 1;
        index++;
    }

    words[index] = NULL;
    return words;
}

