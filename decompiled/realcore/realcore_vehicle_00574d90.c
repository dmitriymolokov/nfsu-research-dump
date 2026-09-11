/* spd-match: far pct=21.43 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00574D90 */
#include <windows.h>
extern int DAT_0077a920;
extern int* DAT_007361f0;
extern int* DAT_006f1d44;
struct DataStruct { char pad1[4]; char byte4; char byte5; char pad2[6]; float* data_ptr; float extra; float scale1; float scale2; };
void __fastcall FUN_00574d90(int param_1, int param_2, float param_3) {
  int iVar1 = *DAT_007361f0;
  if (((DAT_0077a920 != 6 || iVar1 == 1 || iVar1 == 7 || iVar1 == 0xb || iVar1 == 4)) &&
      (*DAT_006f1d44 != 0 && (*(char*)(param_2 + 5) != 0))) {
    float* pfVar2 = *(float**)(param_2 + 0xc);
    if (pfVar2[0] <= param_3) {
      if (pfVar2[1] < param_3) param_3 = pfVar2[1];
      if (DAT_0077a920 != 3) {
        float val = (pfVar2[3] - pfVar2[2]) * ((param_3 - pfVar2[0]) / (pfVar2[1] - pfVar2[0])) + pfVar2[2];
        extern void __cdecl FUN_00574c20(int a, float b, char c);
        FUN_00574c20(*(int*)(param_2 + 8), val, *(char*)(param_2 + 4));
      }
    }
  }
}
