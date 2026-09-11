/* spd-match: far pct=20.83 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00621F00 */
#include "ghidra_compat.h"
extern int *DAT_00709ea0;
extern void **DAT_00709d80;
int __cdecl FUN_0061efe0(void);
int __cdecl FUN_0061f040(int*);
int __cdecl FUN_0061f780(int*);
void FUN_00621f00(int p1) {
    int *piVar;
    int *pObj;
    int **vtable;
    int iVar;
    int stack_p1 = p1;
    piVar = DAT_00709ea0;
    while (piVar != 0) {
        pObj = (int *)*piVar;
        if (pObj != 0) {
            if (((unsigned char *)piVar)[4] & 1) {
                vtable = (int **)*DAT_00709d80;
                iVar = ((int (__cdecl *)(void*, int, int, int, int, int, int, int*))vtable[20])(DAT_00709d80, pObj[1], pObj[2], pObj[3], 1, pObj[5], 0, (int*)(pObj[9]+24));
                if (iVar < 0) *(int *)(pObj[9] + 24) = 0;
            }
            if (((unsigned char *)piVar)[4] & 2) {
                FUN_0061f040(&stack_p1);
                FUN_0061efe0();
                FUN_0061f780(&stack_p1);
            }
        }
        piVar = (int *)piVar[3];
    }
}
