#include <stdio.h>

int main()
{
    float real1, real2, img1, img2, realresult, imgresult;

    printf("For 1st complex number,\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &real1, &img1);

    printf("\nFor 2nd complex number,\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &real2, &img2);

    realresult = real1+real2;

    imgresult = img1+img2;

    printf("\nSum = %.1f + %.1fi\n", realresult, imgresult);

    return 0;
}
