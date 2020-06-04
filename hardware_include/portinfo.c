/* File: /home/leonardo/Desktop/DOOM_SDSoC/sdsoc_project/stretch2x_8hw_100/Debug/_sds/p0/.cf_work/portinfo.c */
#include "cf_lib.h"
#include "cf_request.h"
#include "sds_lib.h"
#include "sds_trace.h"
#include "portinfo.h"
#include "stdio.h"  // for printf
#include "xlnk_core_cf.h"
#include "accel_info.h"
#include "axi_dma_sg_dm.h"
#include "axi_lite_dm.h"
#include "sysport_info.h"

sysport_info_t _sds_sysport_p0_ps_e_S_AXI_HP0_FPD = {
  .name = "ps_e_S_AXI_HP0_FPD",
  .id = 1,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_ps_e_S_AXI_HP1_FPD = {
  .name = "ps_e_S_AXI_HP1_FPD",
  .id = 2,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_ps_e_S_AXI_HP2_FPD = {
  .name = "ps_e_S_AXI_HP2_FPD",
  .id = 3,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_ps_e_S_AXI_HP3_FPD = {
  .name = "ps_e_S_AXI_HP3_FPD",
  .id = 4,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

accel_info_t _sds__p0_I_Stretch2x_HW8 = {
  .device_id = 0,
  .phys_base_addr = 0xa0070000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW8",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW7 = {
  .device_id = 1,
  .phys_base_addr = 0xa0060000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW7",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW6 = {
  .device_id = 2,
  .phys_base_addr = 0xa0050000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW6",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW5 = {
  .device_id = 3,
  .phys_base_addr = 0xa0040000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW5",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW4 = {
  .device_id = 4,
  .phys_base_addr = 0xa0030000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW4",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW3 = {
  .device_id = 5,
  .phys_base_addr = 0xa0020000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW3",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW2 = {
  .device_id = 6,
  .phys_base_addr = 0xa0010000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW2",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_I_Stretch2x_HW1 = {
  .device_id = 7,
  .phys_base_addr = 0xa0000000,
  .addr_range = 0x10000,
  .func_name = "I_Stretch2x_HW1",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

axi_dma_sg_info_t _p0_dm_0 = {
  .name = "dm_0",
  .phys_base_addr = 0xa0080000,
  .addr_range = 0x1000,
  .seq_num = 0,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_0:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 89,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP3_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_0:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 90,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP3_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_1 = {
  .name = "dm_1",
  .phys_base_addr = 0xa0081000,
  .addr_range = 0x1000,
  .seq_num = 1,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_1:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 91,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP2_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_1:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 92,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP2_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_2 = {
  .name = "dm_2",
  .phys_base_addr = 0xa0082000,
  .addr_range = 0x1000,
  .seq_num = 2,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_2:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 93,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP1_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_2:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 94,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP1_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_3 = {
  .name = "dm_3",
  .phys_base_addr = 0xa0083000,
  .addr_range = 0x1000,
  .seq_num = 3,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_3:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 95,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP0_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_3:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 96,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP0_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_4 = {
  .name = "dm_4",
  .phys_base_addr = 0xa0084000,
  .addr_range = 0x1000,
  .seq_num = 4,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_4:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 104,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP3_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_4:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 105,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP3_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_5 = {
  .name = "dm_5",
  .phys_base_addr = 0xa0085000,
  .addr_range = 0x1000,
  .seq_num = 5,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_5:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 106,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP2_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_5:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 107,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP2_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_6 = {
  .name = "dm_6",
  .phys_base_addr = 0xa0086000,
  .addr_range = 0x1000,
  .seq_num = 6,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_6:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 108,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP1_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_6:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 109,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP1_FPD,
  .chan_data[1].data_width = 64,
};

axi_dma_sg_info_t _p0_dm_7 = {
  .name = "dm_7",
  .phys_base_addr = 0xa0087000,
  .addr_range = 0x1000,
  .seq_num = 7,
  .chan_data[0].valid = 1,
  .chan_data[0].name = "dm_7:0",
  .chan_data[0].dir = XLNK_DMA_TO_DEV,
  .chan_data[0].irq = 110,
  .chan_data[0].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP0_FPD,
  .chan_data[0].data_width = 64,
  .chan_data[1].valid = 1,
  .chan_data[1].name = "dm_7:1",
  .chan_data[1].dir = XLNK_DMA_FROM_DEV,
  .chan_data[1].irq = 111,
  .chan_data[1].data_sysport = &_sds_sysport_p0_ps_e_S_AXI_HP0_FPD,
  .chan_data[1].data_width = 64,
};

int _p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0070000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW8,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW8_src_info = {
  .dma_info = &_p0_dm_0,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW8_dest_info = {
  .dma_info = &_p0_dm_7,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW8_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW8_fragments_info = {
  .phys_base_addr = 0xa0070000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW8_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW8,
};

int _p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0060000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW7,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW7_src_info = {
  .dma_info = &_p0_dm_1,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW7_dest_info = {
  .dma_info = &_p0_dm_6,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW7_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW7_fragments_info = {
  .phys_base_addr = 0xa0060000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW7_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW7,
};

int _p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0050000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW6,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW6_src_info = {
  .dma_info = &_p0_dm_2,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW6_dest_info = {
  .dma_info = &_p0_dm_5,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW6_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW6_fragments_info = {
  .phys_base_addr = 0xa0050000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW6_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW6,
};

int _p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0040000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW5,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW5_src_info = {
  .dma_info = &_p0_dm_3,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW5_dest_info = {
  .dma_info = &_p0_dm_4,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW5_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW5_fragments_info = {
  .phys_base_addr = 0xa0040000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW5_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW5,
};

int _p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0030000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW4,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW4_src_info = {
  .dma_info = &_p0_dm_4,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW4_dest_info = {
  .dma_info = &_p0_dm_3,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW4_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW4_fragments_info = {
  .phys_base_addr = 0xa0030000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW4_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW4,
};

int _p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0020000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW3,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW3_src_info = {
  .dma_info = &_p0_dm_5,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW3_dest_info = {
  .dma_info = &_p0_dm_2,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW3_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW3_fragments_info = {
  .phys_base_addr = 0xa0020000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW3_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW3,
};

int _p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0010000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW2,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW2_src_info = {
  .dma_info = &_p0_dm_6,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW2_dest_info = {
  .dma_info = &_p0_dm_1,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW2_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW2_fragments_info = {
  .phys_base_addr = 0xa0010000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW2_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW2,
};

int _p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_info = {
  .phys_base_addr = 0xa0000000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_I_Stretch2x_HW1,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW1_src_info = {
  .dma_info = &_p0_dm_7,
  .dma_channel = 0,
  .port_id = 0,
};

axi_dma_sg_transaction_info_t _p0_swinst_I_Stretch2x_HW1_dest_info = {
  .dma_info = &_p0_dm_0,
  .dma_channel = 1,
  .port_id = 0,
};

int _p0_swinst_I_Stretch2x_HW1_fragments_sg_list[] = {0xc};

axi_lite_info_t _p0_swinst_I_Stretch2x_HW1_fragments_info = {
  .phys_base_addr = 0xa0000000,
  .data_reg_offset = _p0_swinst_I_Stretch2x_HW1_fragments_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_I_Stretch2x_HW1,
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW8 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW8_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW8_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW8_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW7 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW7_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW7_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW7_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW6 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW6_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW6_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW6_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW5 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW5_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW5_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW5_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW4 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW4_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW4_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW4_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW3 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW3_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW3_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW3_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW2 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW2_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW2_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW2_fragments_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_I_Stretch2x_HW _p0_swinst_I_Stretch2x_HW1 = {
  .cmd_I_Stretch2x_HW = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_info}, 
    .send_i = &axi_lite_send },
  .src = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW1_src_info}, 
    .send_i = &axi_dma_sg_send_i },
  .dest = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW1_dest_info}, 
    .receive_ref_i = 0,
    .receive_i = &axi_dma_sg_recv_i },
  .fragments = { .base = { .channel_info = &_p0_swinst_I_Stretch2x_HW1_fragments_info}, 
    .send_i = &axi_lite_send },
};

extern void pfm_hook_init();
extern void pfm_hook_shutdown();
void _p0_cf_framework_open(int first)
{
  int xlnk_init_done;
  cf_context_init();
  xlnkCounterMap(1199880004);
  xlnk_init_done = cf_xlnk_open(first);
  if (!xlnk_init_done) {
    pfm_hook_init();
    cf_xlnk_init(first);
  } else if (xlnk_init_done < 0) {
    fprintf(stderr, "ERROR: unable to open xlnk\n");
    exit(-1);
  }
  cf_get_current_context();
  sysport_open(&_sds_sysport_p0_ps_e_S_AXI_HP0_FPD);
  sysport_open(&_sds_sysport_p0_ps_e_S_AXI_HP1_FPD);
  sysport_open(&_sds_sysport_p0_ps_e_S_AXI_HP2_FPD);
  sysport_open(&_sds_sysport_p0_ps_e_S_AXI_HP3_FPD);
  axi_dma_sg_open(&_p0_dm_0);
  axi_dma_sg_open(&_p0_dm_1);
  axi_dma_sg_open(&_p0_dm_2);
  axi_dma_sg_open(&_p0_dm_3);
  axi_dma_sg_open(&_p0_dm_4);
  axi_dma_sg_open(&_p0_dm_5);
  axi_dma_sg_open(&_p0_dm_6);
  axi_dma_sg_open(&_p0_dm_7);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW8_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW7_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW6_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW5_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW4_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW3_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW2_fragments_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_info);
  axi_lite_open(&_p0_swinst_I_Stretch2x_HW1_fragments_info);
  _sds__p0_I_Stretch2x_HW8.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW8.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW8_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW8_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW8.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW8_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW8_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW8.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW8_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW8.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW8);
  _sds__p0_I_Stretch2x_HW7.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW7.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW7_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW7_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW7.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW7_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW7_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW7.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW7_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW7.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW7);
  _sds__p0_I_Stretch2x_HW6.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW6.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW6_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW6_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW6.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW6_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW6_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW6.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW6_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW6.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW6);
  _sds__p0_I_Stretch2x_HW5.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW5.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW5_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW5_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW5.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW5_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW5_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW5.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW5_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW5.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW5);
  _sds__p0_I_Stretch2x_HW4.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW4.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW4_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW4_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW4.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW4_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW4_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW4.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW4_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW4.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW4);
  _sds__p0_I_Stretch2x_HW3.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW3.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW3_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW3_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW3.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW3_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW3_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW3.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW3_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW3.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW3);
  _sds__p0_I_Stretch2x_HW2.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW2.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW2_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW2_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW2.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW2_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW2_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW2.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW2_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW2.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW2);
  _sds__p0_I_Stretch2x_HW1.arg_dm_id[0] = _p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_info.dm_id;
  _sds__p0_I_Stretch2x_HW1.arg_dm_id[1] = _p0_swinst_I_Stretch2x_HW1_src_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW1_src_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW1.arg_dm_id[2] = _p0_swinst_I_Stretch2x_HW1_dest_info.dma_info->chan_data[_p0_swinst_I_Stretch2x_HW1_dest_info.dma_channel].dm_id;
  _sds__p0_I_Stretch2x_HW1.arg_dm_id[3] = _p0_swinst_I_Stretch2x_HW1_fragments_info.dm_id;
  _sds__p0_I_Stretch2x_HW1.arg_dm_id_count = 4;
  accel_open(&_sds__p0_I_Stretch2x_HW1);
}

void _p0_cf_framework_close(int last)
{
  accel_close(&_sds__p0_I_Stretch2x_HW8);
  accel_close(&_sds__p0_I_Stretch2x_HW7);
  accel_close(&_sds__p0_I_Stretch2x_HW6);
  accel_close(&_sds__p0_I_Stretch2x_HW5);
  accel_close(&_sds__p0_I_Stretch2x_HW4);
  accel_close(&_sds__p0_I_Stretch2x_HW3);
  accel_close(&_sds__p0_I_Stretch2x_HW2);
  accel_close(&_sds__p0_I_Stretch2x_HW1);
  axi_dma_sg_close(&_p0_dm_0);
  axi_dma_sg_close(&_p0_dm_1);
  axi_dma_sg_close(&_p0_dm_2);
  axi_dma_sg_close(&_p0_dm_3);
  axi_dma_sg_close(&_p0_dm_4);
  axi_dma_sg_close(&_p0_dm_5);
  axi_dma_sg_close(&_p0_dm_6);
  axi_dma_sg_close(&_p0_dm_7);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW8_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW8_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW7_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW7_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW6_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW6_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW5_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW5_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW4_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW4_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW3_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW3_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW2_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW2_fragments_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW1_cmd_I_Stretch2x_HW_info);
  axi_lite_close(&_p0_swinst_I_Stretch2x_HW1_fragments_info);
  sysport_close(&_sds_sysport_p0_ps_e_S_AXI_HP0_FPD);
  sysport_close(&_sds_sysport_p0_ps_e_S_AXI_HP1_FPD);
  sysport_close(&_sds_sysport_p0_ps_e_S_AXI_HP2_FPD);
  sysport_close(&_sds_sysport_p0_ps_e_S_AXI_HP3_FPD);
  pfm_hook_shutdown();
  xlnkClose(last, NULL);
}

#define TOTAL_PARTITIONS 1
int current_partition_num = 0;
struct {
  void (*open)(int);
  void (*close)(int);
}

_ptable[TOTAL_PARTITIONS]  = {
    {.open = &_p0_cf_framework_open, .close= &_p0_cf_framework_close}, 
};

void switch_to_next_partition(int partition_num)
{
#ifdef __linux__
  if (current_partition_num != partition_num) {
    _ptable[current_partition_num].close(0);
    char buf[128];
    sprintf(buf, "cat /mnt/_sds/_p%d_.bin > /dev/xdevcfg", partition_num);
    system(buf);
    _ptable[partition_num].open(0);
    current_partition_num = partition_num;
  }
#endif
}

void init_first_partition() __attribute__ ((constructor));
void close_last_partition() __attribute__ ((destructor));
void init_first_partition()
{
    current_partition_num = 0;
    _ptable[current_partition_num].open(1);

    sds_trace_setup();
}


void close_last_partition()
{
#ifdef PERF_EST
    apf_perf_estimation_exit();
#endif
    sds_trace_cleanup();
    _ptable[current_partition_num].close(1);
    current_partition_num = 0;
}

