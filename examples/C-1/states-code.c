#include <string.h>

#include "states-code.h"


static int T1[] = { 28, 38 };

static int T2[] = { 19, 51 };

static int G[] = { 0, 66, 0, 30, 0, 0, 0, 46, 0, 40, 15, 50, 10, 24, 28, 
    25, 0, 59, 37, 9, 57, 0, 62, 0, 0, 11, 60, 30, 19, 68, 45, 40, 60, 3, 
    9, 37, 53, 35, 32, 0, 48, 59, 19, 0, 0, 23, 63, 1, 28, 17, 17, 56, 34, 
    63, 11, 0, 0, 0, 46, 63, 0, 0, 0, 11, 0, 3, 60, 17, 64 };

static char *K[] = { "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", 
    "GA", "HI", "ID", "IL", "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", 
    "MI", "MN", "MS", "MO", "MT", "NE", "NV", "NH", "NJ", "NM", "NY", "NC", 
    "ND", "OH", "OK", "OR", "PA", "RI", "SC", "SD", "TN", "TX", "UT", "VT", 
    "VA", "WA", "WV", "WI", "WY" };

static int
hash_g(const char *key, const int *T)
{
    int i, sum = 0;

    for (i = 0; key[i] != '\0'; i++) {
        sum += T[i] * key[i];
        sum %= 69;
    }
    return G[sum];
}

static int
perfect_hash(const char *key)
{
    if (strlen (key) > 2)
        return 0;

    return (hash_g(key, T1) + hash_g(key, T2)) % 69;
}

int has_key(const char *abbr)
{
    int hash_value = perfect_hash (abbr);

    if (hash_value < 50 && strcmp(abbr, K[hash_value]) == 0)
        return hash_value;

    return -1;
}
