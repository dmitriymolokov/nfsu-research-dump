/* spd-match: far pct=27.68 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005741C0 */
#include <windows.h>
extern int _DAT_0073b3d8; extern int _DAT_0073b564; extern int DAT_0073d814; extern void* DAT_0073d81c; extern int DAT_0073d818; extern void* DAT_007345cc; extern unsigned char DAT_007306c4; extern unsigned int DAT_006f227c; extern unsigned int _DAT_006f1a00;
void* __cdecl FUN_00565b60(int, int, int, int);
void __cdecl FUN_00566e20(void);
void __cdecl FUN_00405660(void);
void __cdecl FUN_00574020(int, void*, int);
void __cdecl FUN_00574150(void);
struct VStruct { int field_0[12]; };
void FUN_005741c0(void) {
  int* p;
  int i;
  unsigned int uVar3, uVar4;
  _DAT_0073b3d8 = 0;
  _DAT_0073b564 = 1;
  p = (int*)FUN_00565b60(0x16b0, 0, 0, 0);
  if (p != 0) {
    p[9] = 0xA0; p[10] = 0x24; p[5] = 0xB; p[4] = 0; p[2] = 0; p[8] = 0; p[3] = (int)"EventNodeSlotPool"; p[11] = 0xA0; p[6] = 0; p[7] = 0;
    FUN_00566e20();
    if (DAT_0073d814 == 1) {
      *(void**)DAT_0073d81c = p;
      p[1] = (int)DAT_0073d81c;
      DAT_0073d81c = p;
      *p = (int)&DAT_0073d818;
    }
  }
  DAT_007345cc = p;
  FUN_00405660();
  for (i = 0; i < 2; i++) {
    *((unsigned char*)&DAT_007306c4 + i) = 0xFF;
    FUN_00574020(1, (void*)FUN_00574150, 0);
  }
  uVar3 = DAT_006f227c ^ 0x1D872B41;
  uVar4 = (uVar3 >> 5) ^ uVar3;
  _DAT_006f1a00 = DAT_006f227c & 0x7FFFFFFF;
  DAT_006f227c = (uVar4 << 0x1B) ^ uVar3 ^ uVar4;
}
