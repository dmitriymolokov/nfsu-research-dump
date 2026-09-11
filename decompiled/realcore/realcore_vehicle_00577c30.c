/* spd-match: far pct=9.63 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00577C30 */
#include <stddef.h>
extern int DAT_007309d4;
extern int DAT_007309d0;
extern int* DAT_007309d8;
extern int DAT_0073b128;
extern int DAT_0073b118;
void FUN_00577c30(void) {
    int count;
    int i;
    int* arr;
    int* item;
    int* head;
    int* next;
    int k;
    count = DAT_007309d4;
    arr = DAT_007309d8;
    i = 0;
    DAT_007309d0 = 0x55ff33ac;
    if (count > 0) {
        while (i < count) {
            item = (int*)arr[i];
            if (item[5] == DAT_0073b128) {
                head = (int*)DAT_0073b118;
                next = (int*)head[9];
                item[10] = (int)head;
                *next = (int)item;
                head[9] = (int)item;
                *item = (int)head + 0x20;
                item[1] = (int)next;
                k = i;
                while (k < count - 1) {
                    arr[k] = arr[k + 1];
                    k++;
                }
                count--;
            } else {
                i++;
            }
        }
    }
}
