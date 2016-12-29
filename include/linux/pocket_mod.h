#ifndef _LINUX_POCKET_MOD_H
#define _LINUX_POCKET_MOD_H

extern char* alsps_dev;

int em3071_pocket_detection_check(void);
int stk3x1x_pocket_detection_check(void);
int ap3xx6_pocket_detection_check(void);
int epl259x_pocket_detection_check(void);
int device_is_pocketed(void);

#endif //_LINUX_POCKET_MOD_H
