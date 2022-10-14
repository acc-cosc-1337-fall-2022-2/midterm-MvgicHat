#include "question1.h"

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna (string dna)
{
    string remove = "T";
    string replace = "U";

    size_t pos;
    while ((pos = dna.find(remove)) != std::string::npos) {
        dna.replace(pos, 1, replace);
    }

    return dna;
}
