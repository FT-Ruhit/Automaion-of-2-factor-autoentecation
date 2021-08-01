#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <direct.h>

void cptoclipboard(char *str)
{
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, strlen(str) + 1);
    memcpy(GlobalLock(hMem), str, strlen(str) + 1);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();
}

int main()
{
    char str1[12], str2[12], str3[12], str4[12], str5[12], str6[12], str7[12], str8[12], str9[12], str10[12], str11[12], str12[12], str13[12], str14[12], str15[12], str16[12], temp[3];
    FILE *rf, *nf;
    int num;
    rf = fopen("github-recovery-codes.txt", "r");
    if (rf == NULL)
    {
        printf("File not found!\n");
        return 0;
    }
    fscanf(rf, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12, str13, str14, str15, str16);
    fclose(rf);
    // printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12, str13, str14, str15, str16);
    nf = fopen("temp.bin", "rb");
    if (nf == NULL)
    {
        nf = fopen("temp.bin", "wb");
        num = 1;
    }
    else
    {
        fgets(temp, 3, nf);
        num = atoi(temp);
    }
    fclose(nf);
    switch (num)
    {
    case 1:
        cptoclipboard(str1);
        printf("1st recovery code Copied Successful");
        break;
    case 2:
        cptoclipboard(str2);
        printf("2nd recovery code Copied Successful");
        break;
    case 3:
        cptoclipboard(str3);
        printf("3rd recovery code Copied Successful");
        break;
    case 4:
        cptoclipboard(str4);
        printf("4th recovery code Copied Successful");
        break;
    case 5:
        cptoclipboard(str5);
        printf("5th recovery code Copied Successful");
        break;
    case 6:
        cptoclipboard(str6);
        printf("6th recovery code Copied Successful");
        break;
    case 7:
        cptoclipboard(str7);
        printf("7th recovery code Copied Successful");
        break;
    case 8:
        cptoclipboard(str8);
        printf("8th recovery code Copied Successful");
        break;
    case 9:
        cptoclipboard(str9);
        printf("9th recovery code Copied Successful");
        break;
    case 10:
        cptoclipboard(str10);
        printf("10th recovery code Copied Successful");
        break;
    case 11:
        cptoclipboard(str11);
        printf("11th recovery code Copied Successful");
        break;
    case 12:
        cptoclipboard(str12);
        printf("12th recovery code Copied Successful");
        break;
    case 13:
        cptoclipboard(str13);
        printf("13th recovery code Copied Successful");
        break;
    case 14:
        cptoclipboard(str14);
        printf("14th recovery code Copied Successful");
        break;
    case 15:
        cptoclipboard(str15);
        printf("15th recovery code Copied Successful");
        break;
    default:
        break;
    }
    if (num == 16)
    {
        cptoclipboard(str16);
        printf("16th recovery code Copied Successful");
        printf("The list is end\n");
        num = 1;
        getchar();
    }
	else{
        num++;
    }
    nf = fopen("temp.bin", "wb");
    fprintf(nf, "%d", num);
    fclose(nf);
    return 0;
}
