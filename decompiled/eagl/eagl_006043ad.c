/* spd-match: far pct=26.51 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006043AD */
#include <windows.h>
extern int __fastcall FUN_005fbf37(void *pThis, int a2, int a3, char *fmt, int a4);
int __fastcall FUN_006043ad(int *this_ptr) {
  unsigned int idx = (unsigned int)this_ptr[0x88 / 4];
  unsigned int limit = (unsigned int)this_ptr[0x138 / 4];
  if (idx < limit) {
    int *ptr = (int *)(*(int *)((char *)this_ptr + 0x144) + idx * 4);
    do {
      int *entry = (int *)*ptr;
      if (entry && entry[0]) {
        int *table = (int *)this_ptr[0x14 / 4];
        if ((*(int *)((char *)table + entry[1] * 4) != this_ptr[0x5c / 4]) || ((entry[0] & 0xFF000000) != 0x10000000)) {
          int count = 0;
          if (entry[1] > 0) {
            int *item_list = (int *)entry[2];
            do {
              int *curr = (int *)(*(int *)((char *)table + *item_list * 4));
              int *prev = curr;
              while (prev[0x24 / 4] != -1) prev = (int *)(*(int *)((char *)table + prev[0x24 / 4] * 4));
              if (*(char *)((char *)prev + 0x50) == 3 && ((prev[0x20 / 4] | curr[0x20 / 4]) & 0x200) == 0) {
                FUN_005fbf37(this_ptr, entry[0xd], 0x1263, "texcoord inputs used directly (that is, other than sampling from textures) in shader body in ps_1_%i are always clamped from 0 to 1", this_ptr[0x30 / 4] & 0xFF);
                return 0;
              }
              count++;
              item_list++;
            } while ((unsigned int)count < (unsigned int)entry[1]);
          }
        }
      }
      idx++;
      ptr++;
    } while (idx < limit);
  }
  return 0;
}
