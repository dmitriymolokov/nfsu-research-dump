/* spd-match: far pct=52.08 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00529A30 */
#include <windows.h>
void __fastcall FUN_00529a30(int *esi) {
    int *ecx;
    int eax;
    ecx = (int*)esi[0x5d8];
    if (ecx == 0) return;
    eax = esi[0x694];
    if (eax < 0) eax = 0; else if (eax > 0x400) eax = 0x400;
    ecx[0x38 / 4] = eax;
    eax = esi[0x693];
    ecx = (int*)esi[0x5d8];
    if (eax < 0) eax = 0; else if (eax > 0x400) eax = 0x400;
    ecx[0x34 / 4] = eax;
    eax = esi[0x691];
    ecx = (int*)esi[0x5d8];
    if (eax < 0) eax = 0; else if (eax > 0x400) eax = 0x400;
    ecx[0x2c / 4] = eax;
    eax = esi[0x692];
    ecx = (int*)esi[0x5d8];
    if (eax < 0) eax = 0; else if (eax > 0x400) eax = 0x400;
    ecx[0x30 / 4] = eax;
    ((void (__stdcall *)(void *, int))(*(int*)*esi + 0x38))(&esi[0x68f], 1);
    eax = esi[0x68f];
    if (eax < 0) eax = 0; else if (eax > 0x7fff) eax = 0x7fff;
    ecx = (int*)esi[0x5d8];
    ecx[0x3c / 4] = eax;
    eax = esi[0x690];
    if (eax < 0) { ecx[0x40 / 4] = 0; return; }
    if (eax > 0x1000) eax = 0x1000;
    ecx[0x40 / 4] = eax;
}
