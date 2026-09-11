/* spd-match: far pct=7.03 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057D860 */
#include <windows.h> 
extern int __cdecl FUN_00504630(void); 
extern int __cdecl FUN_0057ea80(void); 
extern int DAT_00734588; 
void __cdecl FUN_0057d860(int *esi) { 
    unsigned char stack_buf[0xa8]; 
    int iVar15 = *esi * 0xc90 + DAT_00734588; 
    if (iVar15) { 
        int iVar16 = iVar15 + 0x20; 
        int iVar21 = -1; 
        unsigned char bVar3 = *(unsigned char *)iVar16; 
        while (bVar3) { 
            iVar21 = iVar21 * 0x21 + bVar3; 
            bVar3 = *(unsigned char *)(++iVar16); 
        } 
        if (FUN_00504630()) { 
            esi[0x11f] = 1; 
            *(char *)((char*)esi + 0x638) += 1; 
            FUN_0057ea80(); 
        } 
    } 
    (void)stack_buf; 
}
