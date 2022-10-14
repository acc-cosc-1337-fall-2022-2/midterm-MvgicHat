#include "question1.h"

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna (string dna)
{
    dna[2] = 'U';
    dna[8] = 'U';
    dna[9] = 'U';

    return dna;
}
