#include <stdio.h>

int main()
{

    int SSC_TM;
    printf("Enter a SSC Total Marks: ");
    scanf("%d", &SSC_TM);

    float SSC_OM;
    printf("Enter  SSC Obtained Marks: ");
    scanf("%f", &SSC_OM);

    int HSSC_TM;
    printf("Enter  HSSC Total Marks: ");
    scanf("%d", &HSSC_TM);

    float HSSC_OM;
    printf("Enter HSSC Obtained Marks : ");
    scanf("%f", &HSSC_OM);

    float NTS_OM;
    printf("Enter  NTS Obtained Marks : ");
    scanf("%f", &NTS_OM);

    float Total_Aggregate = ((SSC_OM / SSC_TM * 100) * 0.1) + ((HSSC_OM / HSSC_TM * 100) * 0.4) + (NTS_OM * 0.5);

    printf(" Your Aggregate for COMSATS is::%f\n ", Total_Aggregate);
    return 0;
}