#include "colorCodeDefines.h"
#include "colorCodeTranslate.h"
#include "ColorCodeManual_Generate.h"


void generateColorCodeReferenceManual(void)
{
    int MajorColorCount = 0;
    int MinorColorCount = 0;
    int PairNumber = 1;

    printf("\n\n 25 pair Color Code Reference manual \n\n");
    printf("Pair No.\t Major Color\t Minor Color\n");
    for(MajorColorCount = 0; MajorColorCount < numberOfMajorColors; MajorColorCount++)
    {
        for(MinorColorCount = 0; MinorColorCount < numberOfMinorColors; MinorColorCount++)
        {
            printf("%d \t\t\t\t%s \t\t\t%s\n",PairNumber++, MajorColorNames[MajorColorCount], MinorColorNames[MinorColorCount]);
        }
    }
}
