#ifndef _SDS_PORTINFO_H
#define _SDS_PORTINFO_H
/* File: /home/leonardo/Desktop/DOOM_SDSoC/sdsoc_project/stretch2x_8hw_100/Debug/_sds/p0/.cf_work/portinfo.h */
#ifdef __cplusplus
extern "C" {
#endif

struct _p0_swblk_I_Stretch2x_HW {
  cf_port_send_t cmd_I_Stretch2x_HW;
  cf_port_send_t src;
  cf_port_receive_t dest;
  cf_port_send_t fragments;
};

extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW8;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW7;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW6;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW5;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW4;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW3;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW2;
extern struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW1;
void _p0_cf_framework_open(int);
void _p0_cf_framework_close(int);

#ifdef __cplusplus
};
#endif
#ifdef __cplusplus
extern "C" {
#endif
void switch_to_next_partition(int);
void init_first_partition();
void close_last_partition();
#ifdef __cplusplus
};
#endif /* extern "C" */
#endif /* _SDS_PORTINFO_H_ */
