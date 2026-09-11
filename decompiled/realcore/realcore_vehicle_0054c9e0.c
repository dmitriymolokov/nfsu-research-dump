/* spd-match: far pct=47.51 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054C9E0 */
/* Decompiled from Speed.exe @ 0054c9e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#define DAT_0073D8D8 (*(void**)0x0073D8D8)
#define DAT_0073DDA0 (*(int*)0x0073DDA0)
#define DAT_0073DDA4 (*(int*)0x0073DDA4)
#define DAT_0073DDA8 (*(int*)0x0073DDA8)
#define DAT_0073DDAC (*(void(**)())0x0073DDAC)
#define DAT_00777CB4 (*(int*)0x00777CB4)
#define LAB_0054BA10 ((void*)0x0054BA10)
void FUN_0054C9E0(int p1, int* esi) {
  if (esi != 0) {
    int type = esi[1];
    if (type == 0x6D6F7665 || type == 0x726F6F6D) {
      ((void(__cdecl*)(void*))0x0054CF80)(esi);
      if (esi[2] == 0) {
        if (((int(__cdecl*)(int, const char*))0x00667530)(esi[3], "LIDENT") == 0) {
          DAT_0073DDA4 = DAT_0073DDA0;
          DAT_0073DDA0 = 0xF;
          if (((char(__cdecl*)())0x00438A60)()) {
            ((void(__cdecl*)(void*, int, int, void*))0x00666F60)(DAT_0073D8D8, 0, DAT_00777CB4 + 1, LAB_0054BA10);
          } else {
            ((void(__cdecl*)(void*, int, int, void*))0x00666F60)(DAT_0073D8D8, 0, 0, LAB_0054BA10);
          }
        } else {
          DAT_0073DDA4 = DAT_0073DDA0;
          DAT_0073DDA0 = 0x11;
        }
      }
      if (DAT_0073DDAC != 0) DAT_0073DDAC();
      DAT_0073DDA8 = 0;
      DAT_0073DDAC = 0;
    }
  }
}

