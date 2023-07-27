#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
string s = get_string("Text: ");
int n_words, n_sentences, n_letters;
n_words = n_sentences = n_letters = 0;
for (int i = 0, len = strlen(s); i < len; i++)
{
    if (isalpha(s[i]))
    n_letters++;
    if ((i == 0 && s[i] != ' ')
        || (i != len - 1 && s[i] == ' ' && s[i + 1] != ' '))
    n_words++;
    if (s[i] == '.' || s[i] == '?' || s[i] == '!')
    n_sentences++;
}
float L = (n_letters / (float) n_words) * 100;
float S = (n_sentences / (float) n_words) * 100;
int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
        printf("Before Grade 1\n");
    else if (index >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", index);
}
